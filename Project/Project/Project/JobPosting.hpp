#ifndef JOBPOSTING_HPP
# define JOBPOSTING_HPP

# include <string>
# include "CompanyMember.hpp"

using namespace std;

class JobPosting
{
private:
	CompanyMember* company;
	string job, endDate;
	int maxNumber, totalNumber;
public:
	JobPosting(CompanyMember* company, std::string job, std::string endDate, int maxMember);
	std::string getCompanyName(void);
	std::string getCompanyNo(void);
	std::string getJob(void);
	std::string getDetail(void);
	void addTotalNumber(int value);
	int getTotalNumber(void);
};

#endif