#pragma once
#include "JobPosting.h"
#include <iostream>
#include <array>

using namespace std;

// Boundary


// Control
// ������ ������ �� ��� �Լ��� JobPosting ä�� ������ ���۷����� ������
std::string& GetJobList::getApplicationStatistics()
{
	for (int i = 0; i < myJobList.size(); i++)
	{

	}
}
	








// Entity
std::string& JobPosting::getCurrentApplicantPerJob()
{

}

std::string& JobPosting::getJob()
{
	return job_;
}

int& JobPosting::getTotalMember()
{
	return totalMember_;
}



// �Լ�: ȸ�� ȸ���� ������ ������ ���� ���
// ����, ������ ���� ����ϱ� ���� getJob(), getTotalMember() �޼ҵ� �߰�,
// �ֳ��ϸ� "������� ����� ��� ä�� ����"�� ���� ���







