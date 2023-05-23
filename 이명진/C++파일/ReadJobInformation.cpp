//
//  ReadJobInformation.cpp
//  채용정보
//
//  Created by 이명진 on 2023/05/22.
//

#include "ReadJobInformation.h"

vector<JobPosting> JobInformation::getJobPostings() {
    vector<JobPosting> jobPostings;
    jobPostings.push_back(JobPosting("hankook", 345, "accounting", "2", "2023/05/05"));
    jobPostings.push_back(JobPosting("hankook", 123, "marketing", "3", "2023/06/10"));
    jobPostings.push_back(JobPosting("abc", 789, "sales", "5", "2023/07/15"));
    jobPostings.push_back(JobPosting("xyz", 456, "engineering", "4", "2023/08/20"));

    return jobPostings;
}

void JobInformationUI::showJobPostingDetails(const JobPosting& jobPosting) {
    cout << jobPosting.getCompany() << " " << jobPosting.getNumber() << " " << jobPosting.getTask() << jobPosting.getMaxMember() << " " << jobPosting.getEndDate() << " " << endl;
}

void JobInformationUI::searchCompanyByName(const string& input) {
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

void JobInformationUI::startInterface() {
    string input;
    cout << "Enter a company name or job: ";
    cin >> input;
    searchCompanyByName(input);
}

void Application::getDetails() const {
    cout << company << " " << number << " " << task << endl;
}

void Application::setDetails(const JobPosting& jobPosting) {
    company = jobPosting.getCompany();
    number = jobPosting.getNumber();
    task = jobPosting.getTask();
}

JobPosting ApplyCompany::getJobPosting(const int& number) {
    if (number == 345) {
        return JobPosting("hankook", 345, "accounting", "2", "2023/05/05");
    } else if (number == 456) {
        return JobPosting("xyz", 456, "engineering", "4", "2023/08/20");
    } else {
        return JobPosting("", 0, "", "", "");
    }
}

void ApplyCompany::applyCompany(const JobPosting& jobPosting, Application& application) {
    application.setDetails(jobPosting);
}

int ApplyCompanyUI::getNumberInput() {
    int number;
    cout << "Enter a business number: ";
    cin >> number;
    return number;
}

void ApplyCompanyUI::showJobPostingDetails(const JobPosting& jobPosting) {
    cout << jobPosting.getCompany() << " " << jobPosting.getNumber() << " " << jobPosting.getTask() << " " << jobPosting.getMaxMember() << " " << jobPosting.getEndDate() << " " << endl;
}

void ApplyCompanyUI::selectApply() {
    int num = getNumberInput();
    JobPosting jobPosting = ApplyCompany::getJobPosting(num);

    if (jobPosting.getCompany() != "") {
        Application application(jobPosting.getCompany(), jobPosting.getNumber(), jobPosting.getTask());

        ApplyCompany::applyCompany(jobPosting, application);

        cout << "Application details:" << " " << application.getCompany() << " " << application.getNumber() << " " << application.getTask() << endl;
    } else {
        cout << "No job posting found for the business number: " << num << endl;
    }
}

void ApplyCompanyUI::startInterface() {
    selectApply();
}

void CheckApplyList::showApplyList(const JobPosting& jobPosting) {
    Application application(jobPosting.getCompany(), jobPosting.getNumber(), jobPosting.getTask());
    vector<JobPosting> jobPostings = JobInformation::getJobPostings();

    for (const auto& jobPosting : jobPostings) {
        if (jobPosting.getCompany() == application.getCompany()) {
            cout << jobPosting.getCompany() << " " << jobPosting.getNumber() << " " << jobPosting.getTask() << jobPosting.getMaxMember() << " " << jobPosting.getEndDate() << " " << endl;
        }
    }
}

void ApplicationUI::startInterface() {
    JobPosting jobPosting("hankook", 345, "accounting", "2", "2023/05/05");
    showApplyList();
}

void ApplicationUI::showApplyList() {
    JobPosting jobPosting("hankook", 345, "accounting", "2", "2023/05/05");
    checkApplyList.showApplyList(jobPosting);
}
