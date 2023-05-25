#ifndef APPLYCOMPANYUI
# define APPLYCOMPANYUI

# include <string>
# include "GeneralMember.hpp"
# include "ApplyCompany.hpp"

class ApplyCompanyUI
{
private:
public:
	void selectApply(std::string bNumber, GeneralMember *logon);
};

#endif