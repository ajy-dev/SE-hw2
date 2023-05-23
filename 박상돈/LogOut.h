//
// Created by 박상돈 on 2023/05/23.
//
#pragma once
#include <iostream>

class DataBase;
class LogOutUI;

class LogOut
{
public:
    LogOut();
    LogOut(DataBase* dataBase);

    LogOutUI* GetLogOutUI() { return logOutUI; }

    bool TryLogOut(std::string id);
private:
    DataBase* dataBase;
    LogOutUI* logOutUI;
};