//
// Created by 박상돈 on 2023/05/23.
//

#pragma once
#include <iostream>

class DataBase;
class LogInUI;

class LogIn
{
public:
    LogIn();
    LogIn(DataBase* dataBase);

    LogInUI* GetLogInUI() { return logInUI; }

    bool TryLogIn(std::string id, std::string password);
private:
    DataBase* dataBase;
    LogInUI* logInUI;
};
