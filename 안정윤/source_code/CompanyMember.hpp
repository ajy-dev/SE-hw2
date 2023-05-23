#ifndef COMPANYMEMBER_HPP
# define COMPANYMEMBER_HPP

# include "Member.hpp"
# include <string>

class CompanyMember : public Member
{
private:
	std::string	companyName;
	std::string	businessNumber;
public:
	std::string	getCompanyName(void)
	{
		return (companyName);
	}
	std::string	getBusinessNumber(void)
	{
		return (businessNumber);
	}
};

#endif