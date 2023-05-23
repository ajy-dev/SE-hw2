#pragma once
#include "JobPosting.h"
#include <iostream>
#include <array>

using namespace std;

// Boundary


// Control
// 업무별 지원자 수 출력 함수는 JobPosting 채용 정보의 레퍼런스를 가져옴
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



// 함수: 회사 회원이 업무별 지원자 수를 출력
// 업무, 지원자 수만 출력하기 위해 getJob(), getTotalMember() 메소드 추가,
// 왜냐하면 "현재까지 등록한 모든 채용 정보"에 대해 출력







