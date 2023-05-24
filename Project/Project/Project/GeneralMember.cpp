#include "GeneralMember.hpp"

GeneralMember::GeneralMember(std::string id, std::string password, std::string name, std::string ssn)
: name(name), ssn(ssn)
{
	this->id = id;
	this->password = password;
	this->isCompany = false;
}

std::string GeneralMember::getName(void)
{
	return (name);
}

std::string GeneralMember::getSSN(void)
{
	return (ssn);
}