#ifndef MEMBER_HPP
# define MEMBER_HPP

#include <iostream>
#include <string>

class Member
{
protected:
	std::string id;
	std::string password;
	bool isCompany;
public:
	std::string getID(void)
	{
		return (id);
	}
	bool getIsCompany(void)
	{
		return (isCompany);
	}
	bool isPasswordCorrect(std::string input)
	{
		return (!this->password.compare(input));
	}
};

#endif