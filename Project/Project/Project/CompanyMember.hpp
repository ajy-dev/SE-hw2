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
	CompanyMember(std::string id, std::string pw, std::string cName, std::string bNumber);
	std::string	getCompanyName(void);
	std::string	getBusinessNumber(void);
};

#endif