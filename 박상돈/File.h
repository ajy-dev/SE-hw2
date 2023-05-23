//
// Created by 박상돈 on 2023/05/23.
//

#pragma once
#include <fstream>

class File
{
public:
    File();

public:
    std::ifstream ifs;
    std::ofstream ofs;

    int readed = 0;
};