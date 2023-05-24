#ifndef MEMBER_HPP
# define MEMBER_HPP

# include "Member.hpp"
# include <string>

using namespace std;

class Member
{
protected:
	string id;
	string password;
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
};

#endif