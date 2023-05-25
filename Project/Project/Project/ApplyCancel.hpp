#ifndef APPLYCANCEL_HPP
# define APPLYCANCEL_HPP

# include <vector>
# include <iostream>
# include "ApplyCompany.hpp"

class ApplyCancel
{
private:
public:
	static void cancelApply(GeneralMember *logon, std::string input);	
};

#endif