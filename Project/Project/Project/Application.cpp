#include "Application.hpp"

Application::Application(JobPosting *jobPost, GeneralMember *applicant)
: jobPost(jobPost), applicant(applicant)
{
	jobPost->addTotalNumber(1);
}

Application::~Application(void)
{
	jobPost->addTotalNumber(-1);
}