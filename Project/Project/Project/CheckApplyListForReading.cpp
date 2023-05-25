#include "CheckApplyListForReading.hpp"

void CheckApplyListForReading::showApplyList(GeneralMember *logon)
{
	std::vector<Application *> &applyDB = ApplyCompany::getDB();
	std::vector<Application *>::iterator it;
	JobPosting *tmp;
	int count = 0;

	for (it = applyDB.begin(); it < applyDB.end(); it++)
	{
		if ((*it)->getApplicant() == logon)
		{
			tmp = (*it)->getJobPosting();
			std::cout << "> " << tmp->getCompanyName() << " " << tmp->getCompanyNo() << " " << tmp->getDetail();
			count++;
		}
	}
	if (!count)
		std::cout << "> No match found\n";
}