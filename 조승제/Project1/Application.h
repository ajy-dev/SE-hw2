#pragma once

#include <iostream>
#include <string>
#include "JobPosting.h" // JobPosting�� ����ϱ� ���� ���Խ�Ŵ

// Boundary
class CountApplicationUI
{
public:
	void displayStatistics();
	

	
};

// Control
class CheckApplyListForCounting
{
public:
	std::string& getApplicationStatistics();
	
};


// Entity
class Application
{
// attribute: companyName, businessNumber, job, totalMember, endDate
private:
	JobPosting jobpost_;

public:
	// Application�� JobPosting�� �Ӽ��� �����Ƿ� ���۷����� �����ͼ� �ʱ�ȭ
	Application(const JobPosting& jobpost)
		: jobpost_(jobpost){}

	// �Լ�: ������ ������ ���� ��� 
	

	// �Լ�: �Ϲ� ȸ���� ������ ���� Ƚ�� ���
	// �굵 loop�� ���ƾ� �ϴµ�, �̰��� for-each������ 
	std::string& countApplicationPerJob(); // 


};
