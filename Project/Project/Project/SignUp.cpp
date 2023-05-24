#include "SignUp.hpp"

void SignUp::createGeneralMember(std::string name, std::string ssn, std::string id, std::string password)
{
	GeneralMember *newMember = new GeneralMember(id, password, name, ssn);
	memberDB.push_back(newMember);
}

void SignUp::createCompanyMember(std::string cName, std::string bNumber, std::string id, std::string password)
{
	CompanyMember *newMember = new CompanyMember(id, password, cName, bNumber);
	memberDB.push_back(newMember);
}


std::vector<Member *>& SignUp::getMemberDB(void)
{
	return(memberDB);
}