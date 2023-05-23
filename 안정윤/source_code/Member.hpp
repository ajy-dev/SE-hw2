#ifndef MEMBER_HPP
# define MEMBER_HPP

# include <string>

class Member
{
private:
	std::string	id;
	std::string	password;
public:
	void		checkLoginInfo(std::string id, std::string password);
};

#endif