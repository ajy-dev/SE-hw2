//
//  ReadJobInformation.cpp
//  채용정보
//
//  Created by 이명진 on 2023/05/22.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class JobPosting {
private:
    string company;
    int number;
    string task;
    string maxMember;
    string endDate;
    
public:
    JobPosting(string company, int number, string task, string maxMember, string endDate)
    : company(company), number(number), task(task), maxMember(maxMember) ,endDate(endDate) {}

    string getCompany() const {
        return company;
    }

    int getNumber() const {
        return number;
    }

    string getTask() const {
        return task;
    }
    
    string getMaxMember() const {
        return maxMember;
    }
    
    string getEndDate() const {
        return endDate;
    }
    
};

// control
class JobInformation {
public:
    static vector<JobPosting> getJobPostings() {
        // 임의로 몇 개의 작업 정보를 생성합니다.
        vector<JobPosting> jobPostings;
        jobPostings.push_back(JobPosting("hankook", 345, "accounting", "2", "2023/05/05"));
        jobPostings.push_back(JobPosting("hankook", 123, "marketing", "3", "2023/06/10"));
        jobPostings.push_back(JobPosting("abc", 789, "sales", "5", "2023/07/15"));
        jobPostings.push_back(JobPosting("xyz", 456, "engineering", "4", "2023/08/20"));

        return jobPostings;
    }
};

//boundary
class JobInformationUI {
private:
    void showJobPostingDetails(const JobPosting& jobPosting) {
        cout << jobPosting.getCompany() << " " << jobPosting.getNumber() << " " << jobPosting.getTask() << jobPosting.getMaxMember() << " " << jobPosting.getEndDate() << " "<< endl;
    }

    void searchCompanyByName(const string& input) {
        vector<JobPosting> jobPostings = JobInformation::getJobPostings();
        bool found = false;

        for (const auto& jobPosting : jobPostings) {
            if (jobPosting.getCompany() == input) {
                showJobPostingDetails(jobPosting);
                found = true;
            }
        }

        if (!found) {
            cout << "No job postings found for the input: " << input << endl;
        }
    }

public:
    void startInterface() {
        string input;
        cout << "Enter a company name or job: ";
        cin >> input;
        searchCompanyByName(input);
    }
};



// ----------------------------------------------------------------


// entity
class Application {
private:
    string company;
    int number;
    string task;

public:
    Application(const string& company, int number, const string& task)
        : company(company), number(number), task(task) {}

    string getCompany() const {
        return company;
    }

    int getNumber() const {
        return number;
    }

    string getTask() const {
        return task;
    }

    void getDetails() const; // 선언만 하고 정의는 클래스 외부에서

    void setDetails(const JobPosting& jobPosting) {
        company = jobPosting.getCompany();
        number = jobPosting.getNumber();
        task = jobPosting.getTask();
    }
};

// entity 외부에서 getDetails() 함수의 정의
void Application::getDetails() const {
    cout << company << " " << number << " " << task << endl;
}


// control

class ApplyCompany {
public:
    static JobPosting getJobPosting(const int& number) {
        // 임의의 작업 정보를 생성 (원래는 불러와야함)
        if (number == 345) {
            return JobPosting("hankook", 345, "accounting", "2", "2023/05/05");
        } else if (number == 456) {
            return JobPosting("xyz", 456, "engineering", "4", "2023/08/20");
        } else {
            // 사업자 번호에 해당하는 작업 정보가 없는 경우 빈 JobPosting을 반환합니다.
            return JobPosting("", NULL, "", "", "");
        }
    }

    static void applyCompany(const JobPosting& jobPosting, Application& application) {
        application.setDetails(jobPosting);
    }

};

// boundary
class ApplyCompanyUI {
private:
    int getNumberInput() {
        int number;
        cout << "Enter a business number: ";
        cin >> number;
        return number;
    }

    void showJobPostingDetails(const JobPosting& jobPosting) {
        cout << jobPosting.getCompany() << " " << jobPosting.getNumber() << " " << jobPosting.getTask() << " " << jobPosting.getMaxMember() << " " << jobPosting.getEndDate() << " "<< endl;
    }

    void selectApply() {
        int num = getNumberInput();
            JobPosting jobPosting = ApplyCompany::getJobPosting(num);

            if (jobPosting.getCompany() != "") {
                Application application(jobPosting.getCompany(), jobPosting.getNumber(), jobPosting.getTask());
                
                ApplyCompany::applyCompany(jobPosting, application);

                // Application 객체에 저장된 회사 정보 출력
                cout << "Application details:" << " " << application.getCompany() << " " << application.getNumber() << " " << application.getTask() << endl;
            } else {
                cout << "No job posting found for the business number: " << num << endl;
            }
    }

public:
    void startInterface() {
        selectApply();
    }
};

// ---------------------------------------------

class CheckApplyList {
public:
    void showApplyList(const JobPosting& jobPosting) {
        Application application(jobPosting.getCompany(), jobPosting.getNumber(), jobPosting.getTask());
        // application.getDetails();
        vector<JobPosting> jobPostings = JobInformation::getJobPostings();
        for (const auto& jobPosting : jobPostings) {
            if (jobPosting.getCompany() == application.getCompany()) {
                cout << jobPosting.getCompany() << " " << jobPosting.getNumber() << " " << jobPosting.getTask() << jobPosting.getMaxMember() << " " << jobPosting.getEndDate() << " "<< endl;
            }
        }
    }
};

class ApplicationUI {
private:
    CheckApplyList checkApplyList;

public:
    void startInterface() {
        JobPosting jobPosting("hankook", 345, "accounting", "2", "2023/05/05");
        showApplyList();
    }

    void showApplyList() {
        JobPosting jobPosting("hankook", 345, "accounting", "2", "2023/05/05");
        checkApplyList.showApplyList(jobPosting);
    }
};
