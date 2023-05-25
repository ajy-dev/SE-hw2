#include "StatForGeneral.hpp"

void StatForGeneral::getStat(GeneralMember *logon)
{
	std::vector<Application *> &applyDB = ApplyCompany::getDB();
	std::vector<Application *>::iterator it;
	std::map<std::string, int> map;
	std::map<std::string, int>::iterator it2;
	JobPosting *tmp;
	int count = 0;

	for (it = applyDB.begin(); it < applyDB.end(); it++)
	{
		if ((*it)->getApplicant() == logon)
		{
			tmp = (*it)->getJobPosting();
			if (map.find(tmp->getJob()) == map.end())
				map.insert({tmp->getJob(), 1});
			else
				map[tmp->getJob()] += 1;
			count++;
		}
	}
	if (!count)
		std::cout << "> No apply\n";
	else
	{
		for (it2 = map.begin(); it2 != map.end(); it2++)
			std::cout << "> " << it2->first << " " << it2->second << "\n";
	}
}