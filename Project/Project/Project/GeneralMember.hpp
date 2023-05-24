#ifndef GENERALMEMBER_HPP
# define GENERALMEMBER_HPP

# include <string>
# include "Member.hpp"

class GeneralMember : public Member
{
private:
	std::string name;
	std::string ssn;
public:
	GeneralMember(std::string id, std::string password, std::string name, std::string ssn);
	std::string getName(void);
	std::string getSSN(void);
};

#endif