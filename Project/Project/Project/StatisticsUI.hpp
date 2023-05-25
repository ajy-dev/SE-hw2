#ifndef STATISTICSUI_HPP
# define STATISTICSUI_HPP

# include <string>
# include <iostream>
# include "Member.hpp"
# include "StatForCompany.hpp"
# include "StatForGeneral.hpp"

class StatisticsUI
{
private:
public:
	void displayStatistics(Member *logon);
};

#endif