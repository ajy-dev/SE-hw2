#include "AddJobPost.hpp"

void	AddJobPost::addJobPosting(CompanyMember* company, std::string job, std::string endDate, int maxMember)
{
	JobPosting* jobPost;

	jobPost = new JobPosting(company, job, endDate, maxMember);
	GetJobList::getVector().push_back(jobPost);
}
