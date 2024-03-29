#include "StatisticsUI.hpp"

void StatisticsUI::displayStatistics(Member *logon)
{
	std::cout << "5.1. 지원 정보 통계\n";
	if (!logon)
	{
		std::cout << "You are not logged in\n";
		return;
	}
	if (logon->getIsCompany() == true)
	{
		StatForCompany::getStat((CompanyMember *)logon);
	}
	else
	{
		StatForGeneral::getStat((GeneralMember *)logon);
	}
}