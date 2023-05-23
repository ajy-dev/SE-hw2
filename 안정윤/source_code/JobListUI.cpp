#include "JobListUI.hpp"

JobListUI::JobListUI(CompanyMember *logon) : logon(logon), addJobPost(getJobList.getvector())
{
	if (!logon)
		std::cout << "You are not logged in\n";
}

void	JobListUI::showJobPostingList(void)
{
	std::cout << "3.2. 등록된 채용 정보 조회\n";
	getJobList.printJobListByCompany(logon->getCompanyName());
}

void	JobListUI::inputJobPosting(std::string job, int maxNumber, std::string endDate)
{
	std::cout << "3.1. 채용 정보 등록\n";
	std::cout << "> " << job << " " << maxNumber << " " << endDate << "\n";
	addJobPost.addJobPosting(logon, job, endDate, maxNumber);
}