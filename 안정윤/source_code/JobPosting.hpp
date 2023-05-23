#ifndef JOBPOSTING_HPP
# define JOBPOSTING_HPP

# include "CompanyMember.hpp"
# include <string>

class JobPosting
{
private:
	CompanyMember	*company;
	std::string	job;
	std::string	endDate;
	int		maxMember;
	int		totalMember;
public:
	JobPosting(CompanyMember *company, std::string job, std::string endDate, int maxMember);
	std::string	getCompanyName(void);
	std::string	getJob(void);
	std::string	getDetail(void);
};

#endif