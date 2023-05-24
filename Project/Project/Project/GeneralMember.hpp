#ifndef GENERALMEMBER_HPP
# define GENERALMEMBER_HPP

# include "Member.hpp"
# include <string>

using namespace std;

class GeneralMember : public Member
{
private:
	string	name;
	string	ssn;
public:
	string	getName(void)
	{
		return (name);
	}
	string	getSSN(void)
	{
		return (ssn);
	}
};

#endif