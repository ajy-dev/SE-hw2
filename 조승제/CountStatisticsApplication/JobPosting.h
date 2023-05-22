#pragma once
#include <iostream>
#include <string>

class JobPosting
{
private:
	std::string job_, endDate_; // 멤버변수는 변수명 끝에 _를 작성
	int totalMember_;

public:
	// JobPosting을 update함수의 인자로 사용하기 위해 생성자 메소드 호출
	JobPosting(const string& job, const string& endDate, const int& totalMember)
		:job_(job), endDate_(endDate), totalMember_(totalMember) {}

	void updateJobPosting(const JobPosting& job_details)
	{
		set(job_details.job_, job_details.endDate_, job_details.totalMember_, )
	}

	int getCurrentApplicant() const
	{

	}

	&JobPosting getJobPostingDetails() const
	{
		return JobPosting;
	}
};