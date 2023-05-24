#include "LogOut.hpp"

std::string LogOut::tryLogout(Member *logon)
{
	if (!logon)
		return ("You are not logged in");
	return (logon->getID());
}