#ifndef GETJOBLIST_HPP
# define GETJOBLIST_HPP

# include <vector>
# include "JobPosting.hpp"

class GetJobList
{
private:
	static std::vector<JobPosting*> joblist;
public:
	static void printJobListByCompany(std::string company);
	static std::vector<JobPosting*>& getVector(void);
};

#endif