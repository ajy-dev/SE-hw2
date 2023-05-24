#ifndef ADDJOBPOST_HPP
# define ADDJOBPOST_HPP

# include "JobPosting.hpp"
# include <iostream>
# include <string>
# include <vector>

class AddJobPost
{
private:
	std::vector<JobPosting*>& joblist;
public:
	AddJobPost(std::vector<JobPosting*>& joblist);
	void	addJobPosting(CompanyMember* company, std::string job, std::string endDate, int maxMember);
};

#endif