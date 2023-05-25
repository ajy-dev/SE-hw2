#ifndef APPLYCOMPANY_HPP
# define APPLYCOMPANY_HPP

# include <vector>
# include "Application.hpp"
# include "GeneralMember.hpp"
# include "JobPosting.hpp"
# include "GetJobList.hpp"

class ApplyCompany
{
private:
	static std::vector<Application *> applyDB;
public:
	static void applyCompany(std::string bNumber, GeneralMember *applicant);
};

#endif