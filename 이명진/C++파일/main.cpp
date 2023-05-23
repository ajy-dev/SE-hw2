//
//  main.cpp
//  채용정보
//
//  Created by 이명진 on 2023/05/22.
//

#include <iostream>
#include "ReadJobInformation.cpp"

int main() {
    
    JobInformationUI jobInformationUI;
    jobInformationUI.startInterface();

    ApplyCompanyUI applyCompanyUI;
    applyCompanyUI.startInterface();

    ApplicationUI applicationUI;
    applicationUI.startInterface();
    
}


