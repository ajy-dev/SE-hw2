#ifndef SIGNUP_HPP
# define SIGNUP_HPP

# include <vector>
# include <iostream>
# include <string>
# include "Member.hpp"
# include "CompanyMember.hpp"
# include "GeneralMember.hpp"

class SignUp
{
private:
	static std::vector<Member*> memberDB;
public:
	static void createGeneralMember(std::string name, std::string ssn, std::string id, std::string password);
	static void createCompanyMember(std::string cName, std::string bNumber, std::string id, std::string password);
	static std::vector<Member*>& getMemberDB(void);
};

#endif