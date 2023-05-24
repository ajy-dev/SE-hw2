#include "GetJobList.hpp"

void GetJobList::printJobListByCompany(string company)
{
	JobPosting* result;

	result = nullptr;
	for (vector<JobPosting*>::iterator it = joblist.begin(); it < joblist.end(); it++)
	{
		if ((*it)->getCompanyName() == company)
			result = *it;
	}
	if (!result)
	{
		std::cout << "No match found\n";
		return;
	}
	std::cout << "> " << result->getDetail();
}

vector<JobPosting*>& GetJobList::getvector(void)
{
	return (joblist);
}