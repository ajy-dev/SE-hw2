#ifndef LOGINUI_HPP
# define LOGINUI_HPP

# include "Member.hpp"
# include "Login.hpp"

class LoginUI
{
private:
public:
	Member *login(std::string id, std::string password);
};

#endif