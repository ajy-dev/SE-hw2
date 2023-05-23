//
//  main.cpp
//  채용정보
//
//  Created by 이명진 on 2023/05/22.
//

#include <iostream>
#include "ReadJobInformation.cpp"

int main() {
    
    // 4.1 채용정보 검색
    JobInformationUI jobInformationUI;
    jobInformationUI.startInterface();
    
    // 4.2 채용 지원
    ApplyCompanyUI applyCompanyUI;
    applyCompanyUI.startInterface();
    
    // 4.3 지원 정보 조회
    ApplicationUI applicationUI;
    applicationUI.startInterface();
    
}


