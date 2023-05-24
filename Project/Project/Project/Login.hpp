#ifndef LOGIN_HPP
# define LOGIN_HPP

# include <iostream>
# include <vector>
# include "Member.hpp"
# include "SignUp.hpp"

class Login
{
private:
public:
	static Member *tryLogin(std::string id, std::string password);
};

#endif