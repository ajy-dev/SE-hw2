#include "Login.hpp"

Member *Login::tryLogin(std::string id, std::string password)
{
	std::vector<Member *> &memberDB = SignUp::getMemberDB();
	std::vector<Member *>::iterator it;

	for (it = memberDB.begin(); it < memberDB.end(); it++)
	{
		if ((*it)->getID() == id)
		{
			if ((*it)->isPasswordCorrect(password) == true)
				return (*it);
			else
				return (nullptr);
		}
	}
}