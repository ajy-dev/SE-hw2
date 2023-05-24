#ifndef COMPANYMEMBER_HPP
# define COMPANYMEMBER_HPP

# include "Member.hpp"
# include <string>

using namespace std;

class CompanyMember : public Member
{
private:
	string	companyName;
	string	businessNumber;
public:
	string	getCompanyName(void)
	{
		return (companyName);
	}
	string	getBusinessNumber(void)
	{
		return (businessNumber);
	}
};

#endif