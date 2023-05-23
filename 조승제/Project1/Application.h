#pragma once

#include <iostream>
#include <string>
#include "JobPosting.h" // JobPosting을 사용하기 위해 포함시킴

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
	// Application과 JobPosting의 속성이 같으므로 레퍼런스를 가져와서 초기화
	Application(const JobPosting& jobpost)
		: jobpost_(jobpost){}

	// 함수: 업무별 지원자 수를 출력 
	

	// 함수: 일반 회원이 업무별 지원 횟수 출력
	// 얘도 loop를 돌아야 하는데, 이것은 for-each문으로 
	std::string& countApplicationPerJob(); // 


};
