//
// Created by 박상돈 on 2023/05/24.
//
#include <iostream>
#include "AccountManage.cpp"


int main() {

    // 1.1 회원가입
    SignUpUI signUpUI;
    SignUpUI.startInterface();

    // 1.2 회원탈퇴
    WithdrawalUI withdrawalUI;
    WithdrawalUI.startInterface();

    // 2.1 로그인
    LogInUI logInUI;
    LogInUI.startInterface();

    // 2.2 로그아웃
    LogOutUI logOutUI;
    LogOutUI.startInterface();
}

