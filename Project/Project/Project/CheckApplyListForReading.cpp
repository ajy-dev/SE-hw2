#include "CheckApplyListForReading.hpp"

void CheckApplyListForReading::showApplyList(GeneralMember *logon)
{
	std::vector<Application *> &applyDB = ApplyCompany::getDB();
	std::vector<Application *>::iterator it;
	JobPosting *tmp;

	for (it = applyDB.begin(); it < applyDB.end(); it++)
	{
		if ((*it)->getApplicant() == logon)
		{
			tmp = (*it)->getJobPosting();
			std::cout << "> " << tmp->getCompanyName() << " " << tmp->getCompanyNo() << " " << tmp->getDetail();
		}
	}
}