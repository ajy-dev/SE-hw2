#include "AddJobPost.hpp"

AddJobPost::AddJobPost(std::vector<JobPosting*>& joblist) : joblist(joblist)
{
}

void	AddJobPost::addJobPosting(CompanyMember* company, std::string job, std::string endDate, int maxMember)
{
	JobPosting* jobPost;

	jobPost = new JobPosting(company, job, endDate, maxMember);
	joblist.push_back(jobPost);
}