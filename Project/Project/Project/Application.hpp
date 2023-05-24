#ifndef APPLICATION_HPP
# define APPLICATION_HPP

# include "Master.hpp"

using namespace std;

class Application
{
private:
	JobPosting* jobPost;
	GeneralMember* applicant;
public:
	Application(JobPosting* jobpost, GeneralMember* applicant);
	~Application(void);
};

#endif