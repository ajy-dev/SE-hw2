#ifndef GETJOBLIST_HPP
# define GETJOBLIST_HPP

# include <string>
# include <vector>
# include <iostream>
# include <algorithm>
# include "JobPosting.hpp"

using namespace std;

class GetJobList
{
private:
	static vector<JobPosting*> joblist;
public:
	void printJobListByCompany(string company);
	static vector<JobPosting*>& getVector(void);
};

#endif