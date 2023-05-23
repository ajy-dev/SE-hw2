//
// Created by 박상돈 on 2023/05/23.
//

#pragma once
#include "Member.h"

class LogIn;
class File;

class LogInUI
{
public:
    LogInUI();

    void StartInterface();
    void SelectLogIn(LogIn* logIn, File* file);
private:
    LogIn* logIn;
};