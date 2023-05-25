#ifndef READAPPLICATIONUI
# define READAPPLICATIONUI

# include <iostream>
# include "GeneralMember.hpp"
# include "CheckApplyListForReading.hpp"
# include "ApplyCancel.hpp"

class ReadApplicationUI
{
public:
	void selectApplyList(GeneralMember *logon);
	void cancelApplication(GeneralMember *logon, std::string input);
};

#endif