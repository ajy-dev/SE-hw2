#ifndef SIGNUPUI_HPP
# define SIGNUPUI_HPP

# include <iostream>
# include <fstream>
# include <string>
# include "SignUp.hpp"
# include "GeneralMember.hpp"
# include "CompanyMember.hpp"

class SignUpUI
{
private:
public:
	void createMember(std::string type, std::string p1, std::string p2, std::string p3, std::string p4);
};

#endif