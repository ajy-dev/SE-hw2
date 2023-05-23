//
// Created by 박상돈 on 2023/05/23.
//

#pragma once
#include <iostream>

class Member
{
public:
    Member();
    Member(std::string name, std::string ssn, std::string id, std::string password);

    void CheckMember();
    void CreateMember();
    void DeleteMember();

    std::string GetID() { return id; }
    std::string GetPassword() { return password; }

private:
    std::string name;
    std::string ssn;
    std::string id;
    std::string password;
};
