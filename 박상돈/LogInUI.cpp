//
// Created by 박상돈 on 2023/05/23.
//

#include "LogInUI.h"
#include "LogIn.h"
#include "Member.h"
#include "File.h"

LogInUI::LogInUI()
{

}

void LogInUI::StartInterface()
{

}

void LogInUI::SelectLogIn(LogIn* logIn, File* file)
{
    // 파일 입력 받기
    std::string id = "";
    std::string password = "";

    file->ifs.seekg(file->readed);
    file->ifs >> id >> password;
    file->readed = file->ifs.tellg();

    if (logIn->TryLogIn(id, password)) {
        file->ofs << "2.1. 로그인" << '\n';
        file->ofs << "> " << id << " " << password << " " << '\n' << '\n';
    }
    else {
        file->ofs << "2.1. 로그인" << '\n';
        file->ofs << "로그인 실패" << '\n' << '\n';
    }


}