#pragma once
#include <iostream>
#include <string>

class JobPosting
{
private:
	std::string job_, endDate_; // ��������� ������ ���� _�� �ۼ�
	int totalMember_;

public:
	// JobPosting�� update�Լ��� ���ڷ� ����ϱ� ���� ������ �޼ҵ� ȣ��
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