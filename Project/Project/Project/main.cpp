#include <cstdio>
#include <iostream>
#include <fstream>
#include <vector>
#include "SignUpUI.hpp"
#include "WithdrawalUI.hpp"
#include "LoginUI.hpp"
#include "LogOutUI.hpp"
#include "JobListUI.hpp"
#include "JobInformationUI.hpp"
#include "ApplyCompanyUI.hpp"
#include "ReadApplicationUI.hpp"

#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

vector<Member*>	SignUp::memberDB;
vector<JobPosting*> GetJobList::joblist;
vector<Application *> ApplyCompany::applyDB;

int main(void)
{
	ifstream	in_fp;
	ofstream	out_fp;
	Member* logon = nullptr;
	SignUpUI signUpUI;
	WithdrawalUI withdrawalUI;
	LoginUI loginUI;
	LogOutUI logoutUI;
	JobListUI jobListUI;
	JobInformationUI jobInformationUI;
	ApplyCompanyUI applyCompanyUI;
	ReadApplicationUI readApplicationUI;
	int		menu_level_1;
	int		menu_level_2;

	in_fp.open(INPUT_FILE_NAME, std::ios::in);
	if (!in_fp.is_open())
	{
		perror("File opening failed");
		return EXIT_FAILURE;
	}
	out_fp.open(OUTPUT_FILE_NAME, std::ios::out);
	if (!out_fp.is_open())
	{
		perror("File opening failed");
		return EXIT_FAILURE;
	}
	//std::cout.rdbuf(out_fp.rdbuf());
	while (1)
	{
		in_fp >> menu_level_1 >> menu_level_2;
		switch (menu_level_1)
		{
		case 1:
			switch (menu_level_2)
			{
			case 1:
			{
				std::string type, p1, p2, p3, p4;
				in_fp >> type >> p1 >> p2 >> p3 >> p4;
				signUpUI.createMember(type, p1, p2, p3, p4);
				break;
			}
			case 2:
				if (logon)
					withdrawalUI.selectWithdrawal(logon->getID());
				logon = nullptr;
				break;
			}
			break;
		case 2:
			switch (menu_level_2)
			{
			case 1:
			{	
				std::string id, pw;
				in_fp >> id >> pw;
				logon = loginUI.login(id, pw);
				break;
			}
			case 2:
				logoutUI.logout(logon);
				logon = nullptr;
				break;
			}
			break;
		case 3:
			switch (menu_level_2)
			{
			case 1:
			{
				std::string	job;
				int		maxNumber;
				std::string	endDate;

				in_fp >> job >> maxNumber >> endDate;
				jobListUI.inputJobPosting((CompanyMember*)logon, job, maxNumber, endDate);
			}
			break;
			case 2:
				jobListUI.showJobPostingList((CompanyMember*)logon);
				break;
			default:
				break;
			}
			break;
		case 4:
			switch (menu_level_2)
			{
			case 1:
			{
				std::string input;
				in_fp >> input;
				jobInformationUI.searchCompanyByName(input);
				break;
			}
			case 2:
			{
				std::string input;
				in_fp >> input;
				applyCompanyUI.selectApply(input, (GeneralMember *)logon);
				break;
			}
			case 3:
				readApplicationUI.selectApplyList((GeneralMember *)logon);
				break;
			case 4:
			{
				std::string input;
				in_fp >> input;
				readApplicationUI.cancelApplication((GeneralMember *)logon, input);
				break;
			}
			}
			break;
		case 6:
			goto END;
		default:
			break;
		}
	}
END:
	return EXIT_SUCCESS;
}