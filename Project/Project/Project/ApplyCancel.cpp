#include "ApplyCancel.hpp"

void ApplyCancel::cancelApply(GeneralMember *logon, std::string input)
{
	std::vector<Application *> &applyDB = ApplyCompany::getDB();
	std::vector<Application *>::iterator it;
	JobPosting *tmp;

	for (it = applyDB.begin(); it < applyDB.end(); it++)
	{
		if ((*it)->getApplicant() == logon)
		{
			tmp = (*it)->getJobPosting();
			if (tmp->getCompanyNo() == input)
			{
				std::cout << "> " << tmp->getCompanyName() << " " << tmp->getCompanyNo() << " " << tmp->getJob() << "\n";
				(*it)->~Application();
				applyDB.erase(it);
				break;
			}
		}
	}
}