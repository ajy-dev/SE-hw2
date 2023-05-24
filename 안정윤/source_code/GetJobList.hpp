#ifndef GETJOBLIST_HPP
# define GETJOBLIST_HPP

# include <string>
# include <vector>
# include <iostream>
# include <algorithm>
# include "JobPosting.hpp"

class GetJobList
{
private:
	static std::vector<JobPosting *>	joblist;
public:
	void								printJobListByCompany(std::string company);
	static std::vector<JobPosting *>	&getvector(void);
};

#endif
