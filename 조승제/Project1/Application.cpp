#include <iostream>
#include "Application.h"

// 업무별 지원 횟수 출력 함수는 Application의 레퍼런스를 가져오면 되는데, Application의 Entity가 이미 JobPosting의 레퍼런스를 멤버변수로 하기 떄문에 그냥 JobPosting을 가져오면됨

// Boundary
void CountApplicationUI::displayStatistics()
{

}




// Control
std::string& CheckApplyListForCounting::getApplicationStatistics()
{

}




// Entity
std::string& Application::countApplicationPerJob()
{
	
}