#ifndef ADDJOBPOST_HPP
# define ADDJOBPOST_HPP

# include <string>
# include "GetJobList.hpp"

class AddJobPost
{
public:
	static void addJobPosting(CompanyMember* company, std::string job, std::string endDate, int maxMember);
};

#endif