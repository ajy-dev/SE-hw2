// ��� ���Ͽ��� Ŭ������ �Լ��� �������̽��� ���ǵǾ� ������, ���� ���Ͽ��� �ش� �������̽��� ���� ������ �ۼ��Ǿ����
#pragma once

#include <iostream>
#include <string>
#include <vector>

// Boundary
class StatisticsApplicationUI
{
public:
	void displayStatistics()
	{
		std::cout<< getApplicationStatistics()
	}

};




// Control
class GetJobList
{
private:
	JobPosting jobList; // JobPlsting�� ���� �������
	std::vector<JobPosting> myJobList; // myjoblist�� �������� ������ ����

public:
	std::string& getApplicationStatistics();
	
};







// Entity
class CompanyMember
{
private:
	std::string companyName_;
	int businessNumber_;

public:
	// ������ �޼ҵ��� �̴ϼȶ����� ����Ʈ�� ����Ͽ� �Է°� �ʱ�ȭ
	CompanyMember(const std::string& companyName, int businessNumber)
	: companyName_(companyName), businessNumber_(businessNumber) {}
};

// Entity
class JobPosting : public CompanyMember
{
	// attribute: companyName, businessNumber, job, totalNumber, endDate
private:
	std::string job_, endDate_; 
	int totalMember_;
	
public:
	// ������ �޼ҵ��� �̴ϼȶ����� ����Ʈ�� ����Ͽ� �Է°� �ʱ�ȭ
	JobPosting(const std::string& companyName, const int& businessNumber, const std::string& job, const std::string& endDate, const int& totalMember) 
		: CompanyMember(companyName, businessNumber), job_(job), endDate_(endDate), totalMember_(totalMember) {}
	

	// �޼ҵ� ����
	// �Լ�: ������ ���� Ƚ���� ���
	std::string& getCurrentApplicantPerJob();
	std::string& getJob();
	int& getTotalMember();
	

	// �Լ�: ȸ�� ȸ���� ������ ������ ���� ���
	// ����, ������ ���� ����ϱ� ���� getJob(), getTotalMember() �޼ҵ� �߰�,
	// �ֳ��ϸ� "������� ����� ��� ä�� ����"�� ���� ���
	





	




};