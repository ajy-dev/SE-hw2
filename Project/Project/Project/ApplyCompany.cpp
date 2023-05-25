#include "ApplyCompany.hpp"

void ApplyCompany::applyCompany(std::string bNumber, GeneralMember *applicant)
{
	std::vector<JobPosting *>& jobDB = GetJobList::getVector();
	std::vector<JobPosting *>::iterator it;

	for (it = jobDB.begin(); it < jobDB.end(); it++)
	{
		if ((*it)->getCompanyNo() == bNumber)
		{
			Application *newApply = new Application(*it, applicant);
			applyDB.push_back(newApply);
			std::cout << "> " << (*it)->getCompanyName() << " " << (*it)->getCompanyNo() << " " << (*it)->getJob() << "\n";
			break;
		}
	}
}