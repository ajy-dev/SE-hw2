#include "SignUpUI.hpp"

void SignUpUI::createMember(std::string type, std::string p1, std::string p2, std::string p3, std::string p4)
{
	std::cout << "1.1 ȸ������\n";
	if (!type.compare("1"))
	{
		SignUp::createCompanyMember(p3, p4, p1, p2);
		std::cout << "> 1 " << p3 << " " << p4 << " " << p1 << " " << p2 << "\n";
	}
	else
	{
		SignUp::createGeneralMember(p3, p4, p1, p2);
		std::cout << "> 2 " << p3 << " " << p4 << " " << p1 << " " << p2 << "\n";
	}
}