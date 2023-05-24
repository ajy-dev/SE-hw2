#include "CompanyMember.hpp"

CompanyMember::CompanyMember(std::string id, std::string pw, std::string cName, std::string bNumber)
: companyName(cName), businessNumber(bNumber)
{
	this->id = id;
	this->password = pw;
	this->isCompany = true;
}

std::string CompanyMember::getCompanyName(void)
{
	return (companyName);
}

std::string CompanyMember::getBusinessNumber(void)
{
	return (businessNumber);
}