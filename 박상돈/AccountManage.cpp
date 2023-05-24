//
// Created by 박상돈 on 2023/05/24.
//
#include "AccountManage.h"
string Member::getId()
{
    return id;
}

string Member::getPassword()
{
    return password;
}

string GeneralMember::getName()
{
    return name;
}

string GeneralMember::getSsn()
{
    return ssn;
}

string CompanyMember::getName()
{
    return name;
}

string CompanyMember::getBusinessNumber()
{
    return businessNumber;
}

vector<GeneralMember>& MemberCollection::getGeneralMemberList()
{
    return generalMemberList;
}

vector<CompanyMember>& MemberCollection::getCompanyMemberList()
{
    return companyMemberList;
}

void MemberCollection::addGeneralMember(GeneralMember& member)
{
    generalMemberList.push_back(member);
}

void MemberCollection::addCompanyMember(CompanyMember& member)
{
    companyMemberList.push_back(member);
}


