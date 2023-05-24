#ifndef JOBPOSTING_HPP
# define JOBPOSTING_HPP

# include <string>

using namespace std;

class JobPosting
{
private:
	CompanyMember* company;
	int number, maxMember, totalMember;
	string task, endDate;
public:
	JobPosting(CompanyMember* company, string job, string endDate, int maxMember);
	string getCompanyName(void);
	string getJob(void);
	string getDetail(void);
};

#endif