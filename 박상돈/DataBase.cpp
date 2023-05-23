//
// Created by 박상돈 on 2023/05/23.
//

#include "DataBase.h"
#include "Member.h"

DataBase::DataBase()
{
    logInIndex = -1;
    memberList.clear();
    sellerList.clear();
    buyerList.clear();
}