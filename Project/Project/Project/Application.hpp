#ifndef APPLICATION_HPP
# define APPLICATION_HPP

# include "JobPosting.hpp"
# include "GeneralMember.hpp"

using namespace std;

class Application
{
private:
	JobPosting* jobPost;
	GeneralMember* applicant;
public:
	Application(jobPosting* jobPost, GeneralMember* applicant);
	~Application(void);
};
#endif