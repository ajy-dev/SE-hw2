#ifndef JOBLISTUI_HPP
# define JOBLISTUI_HPP

# include "JobPosting.hpp"
# include "GetJobList.hpp"
# include "AddJobPost.hpp"
# include "CompanyMember.hpp"

class JobListUI
{
private:
	CompanyMember* logon;
public:
	JobListUI(CompanyMember* logon);
	void		startInterface(void);
	void		showJobPostingList(void);
	void		inputJobPosting(std::string job, int maxNumber, std::string endDate);
};

#endif