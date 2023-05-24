//
// Created by 박상돈 on 2023/05/24.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

//Control

class JoinGeneralMember{
public:
    vector<string>& addGeneralMember(string name, string ssn, string id, string password);
};

class JoinCompanyMember{
public:
    vector<string>& addCompanyMember(string name, string businessNumber, string id, string password);
};

class Withdrawal {
public:
    vector<string>& withdrawal(string id);
};

class LogIn {
public:
    bool checkLoginInfo(string id, string password);
};

class LogOut {
public:
    bool checkLogoutInfo(string id, string password);
};

class JoinGeneralMemberUI {
public:
    void joinGeneralMemberUI(FILE* in_fp, FILE* out_fp);
};

class JoinCompanyMemberUI {
public:
    void joinCompanyMemberUI(FILE* in_fp, FILE* out_fp);

};

//Boundary

class WithdrawalUI {
public:
    void startInterface();
    void selectWithdrawalUI(FILE* in_fp, FILE* out_fp);
};

class LogInUI {
public:
    void startInterface();
    string selectLoginUI(FILE* in_fp, FILE* out_fp);
};
class LogOutUI {
public:
    void startInterface();
    void selectLogoutUI(FILE* in_fp, FILE* out_fp);
};

//Entity

class Member {
private:
    string id;
    string password;
public:
    Member(string id, string password) : id(id), password(password) {};
    string getId();
    string getPassword();
};

class GeneralMember : public Member {
private:
    string name;
    string ssn;
public:
    GeneralMember(string name, string ssn, string id, string password)
            : Member(id, password), name(name), ssn(ssn) {};
    string getName();
    string getSsn();
};

class CompanyMember : public Member {
private:
    string name;
    string businessNumber;
public:
    CompanyMember(string name, string businessNumber, string id, string password)
            : Member(id, password), name(name), businessNumber(businessNumber) {};
    string getName();
    string getBusinessNumber();
};

class MemberCollection {
private:
    vector<GeneralMember> generalMemberList;
    vector<CompanyMember> companyMemberList;
public:
    vector<GeneralMember> &getGeneralMemberList();

    vector<CompanyMember> &getCompanyMemberList();

    void addGeneralMember(GeneralMember &member);

    void addCompanyMember(CompanyMember &member);

    void deleteMember(Member &member);

    bool loginMember(string id, string password);

    bool logoutMember(string id);
}