//
//  ReadJobInformation.h
//  assignment
//
//  Created by 이명진 on 2023/05/23.
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
        : company(company), number(number), task(task), maxMember(maxMember), endDate(endDate) {}

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

class JobInformation {
public:
    static vector<JobPosting> getJobPostings();
};

class JobInformationUI {
private:
    void showJobPostingDetails(const JobPosting& jobPosting);
    void searchCompanyByName(const string& input);

public:
    void startInterface();
};

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

    void getDetails() const;
    void setDetails(const JobPosting& jobPosting);
};

class ApplyCompany {
public:
    static JobPosting getJobPosting(const int& number);
    static void applyCompany(const JobPosting& jobPosting, Application& application);
};

class ApplyCompanyUI {
private:
    int getNumberInput();
    void showJobPostingDetails(const JobPosting& jobPosting);
    void selectApply();

public:
    void startInterface();
};

class CheckApplyList {
public:
    void showApplyList(const JobPosting& jobPosting);
};

class ApplicationUI {
private:
    CheckApplyList checkApplyList;

public:
    void startInterface();
    void showApplyList();
};
