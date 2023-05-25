#include "StatForCompany.hpp"

void StatForCompany::getStat(CompanyMember *company)
{
	std::vector<JobPosting *> &joblist = GetJobList::getVector();
	JobPosting* result;

	result = nullptr;
	for (vector<JobPosting*>::iterator it = joblist.begin(); it < joblist.end(); it++)
	{
		if ((*it)->getCompanyName() == company->getCompanyName())
			result = *it;
	}
	if (!result)
	{
		std::cout << "> No post\n";
		return;
	}
	std::cout << "> " << result->getJob() << " " << result->getTotalNumber() << "\n";
}