//
// Created by 박상돈 on 2023/05/23.
//

#include "SignUpUI.h"
#include "SignUp.h"
#include "Member.h"
#include "File.h"

SignUpUI::SignUpUI()
{

}

void SignUpUI::StartInterface()
{
}

void SignUpUI::SelectSignUp(SignUp* signUp, File* file)
{

    std::string name = "";
    std::string ssn = "";
    std::string id = "";
    std::string password = "";

    file->ifs.seekg(file->readed);
    file->ifs >> name >> ssn >> id >> password;
    file->readed = file->ifs.tellg();

    if (signUp->AddNewMember(name, ssn, id, password)) {
        file->ofs << "1.1. 회원가입" << '\n';
        file->ofs << "> " << name << " " << ssn << " " << id << " " << password << " " << '\n' << '\n';
    }
    else {
        file->ofs << "1.1. 회원가입" << '\n';
        file->ofs << "> 회원가입 실패" << '\n' << '\n';
    }


}