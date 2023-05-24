#include "withdrawal.hpp"

void Withdrawal::withdrawal(std::string id)
{
	std::vector<Member *>& memberDB = SignUp::getMemberDB();
	std::vector<Member *>::iterator it;

	for (it = memberDB.begin(); it < memberDB.end(); it++)
	{
		if ((*it)->getID() == id)
		{
			memberDB.erase(it);
			break ;
		}
	}
}