// 헤더 파일에는 클래스나 함수의 인터페이스가 정의되어 있으며, 구현 파일에는 해당 인터페이스의 실제 구현이 작성되어야함
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
	JobPosting jobList; // JobPlsting의 참조 멤버변수
	std::vector<JobPosting> myJobList; // myjoblist를 가변적인 개수로 설정

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
	// 생성자 메소드의 이니셜라이저 리스트를 사용하여 입력값 초기화
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
	// 생성자 메소드의 이니셜라이저 리스트를 사용하여 입력값 초기화
	JobPosting(const std::string& companyName, const int& businessNumber, const std::string& job, const std::string& endDate, const int& totalMember) 
		: CompanyMember(companyName, businessNumber), job_(job), endDate_(endDate), totalMember_(totalMember) {}
	

	// 메소드 영역
	// 함수: 업무별 지원 횟수를 출력
	std::string& getCurrentApplicantPerJob();
	std::string& getJob();
	int& getTotalMember();
	

	// 함수: 회사 회원이 업무별 지원자 수를 출력
	// 업무, 지원자 수만 출력하기 위해 getJob(), getTotalMember() 메소드 추가,
	// 왜냐하면 "현재까지 등록한 모든 채용 정보"에 대해 출력
	





	




};