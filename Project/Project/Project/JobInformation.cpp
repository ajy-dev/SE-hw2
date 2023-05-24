#include "JobInformation.hpp"

JobPosting *JobInformation::getJobPostingDetails(std::string input)
{
	std::vector<JobPosting *> &jobDB = GetJobList::getVector();
	std::vector<JobPosting *>::iterator it;

	for (it = jobDB.begin(); it < jobDB.end(); it++)
	{
		if ((*it)->getCompanyName() == input)
			return (*it);
	}
	return (nullptr);
}