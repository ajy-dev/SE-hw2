#include "JobPosting.hpp"

JobPosting::JobPosting(CompanyMember* company, std::string job, std::string endDate, int maxMember)
	: company(company), job(job), endDate(endDate), maxNumber(maxMember), totalNumber(0)
{
}

std::string	JobPosting::getCompanyName(void)
{
	return (company->getCompanyName());
}

std::string	JobPosting::getCompanyNo(void)
{
	return (company->getBusinessNumber());
}

std::string	JobPosting::getJob(void)
{
	return (job);
}

std::string	JobPosting::getDetail(void)
{
	return (job + " " + std::to_string(maxNumber) + " " + endDate + "\n");
}

int JobPosting::getTotalNumber(void)
{
	return (totalNumber);
}