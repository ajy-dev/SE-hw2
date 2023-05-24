#include "JobListUI.hpp"

JobListUI::JobListUI(CompanyMember* logon) : logon(logon)
{
	if (!logon)
		std::cout << "You are not logged in\n";
}

void	JobListUI::showJobPostingList(void)
{
	std::cout << "3.2. ��ϵ� ä�� ���� ��ȸ\n";
	GetJobList::printJobListByCompany(logon->getCompanyName());
}

void	JobListUI::inputJobPosting(std::string job, int maxNumber, std::string endDate)
{
	std::cout << "3.1. ä�� ���� ���\n";
	std::cout << "> " << job << " " << maxNumber << " " << endDate << "\n";
	AddJobPost::addJobPosting(logon, job, endDate, maxNumber);
}