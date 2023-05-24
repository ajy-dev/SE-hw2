#ifndef ADDJOBPOST_HPP
# define ADDJOBPOST_HPP

# include "JobPosting.hpp"
# include "GetJobList.hpp"
# include <iostream>
# include <string>
# include <vector>

class AddJobPost
{
public:
	static void addJobPosting(CompanyMember* company, std::string job, std::string endDate, int maxMember);
};

#endif