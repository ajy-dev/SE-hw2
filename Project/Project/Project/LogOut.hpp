#ifndef LOGOUT_HPP
# define LOGOUT_HPP

# include <string>
# include "Member.hpp"

class LogOut
{
private:
public:
	static std::string tryLogout(Member *logon);
};

#endif