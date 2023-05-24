#include <cstdio>

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstdio>
#include "GetJobList.hpp"

#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

vector<JobPosting*> GetJobList::joblist;

int main(void)
{
	ifstream	in_fp;
	ofstream	out_fp;
	int		menu_level_1;
	int		menu_level_2;

	in_fp.open(INPUT_FILE_NAME, std::ios::in);
	if (!in_fp.is_open())
	{
		perror("File opening failed");
		return EXIT_FAILURE;
	}
	out_fp.open(OUTPUT_FILE_NAME, std::ios::out);
	if (!out_fp.is_open())
	{
		perror("File opening failed");
		return EXIT_FAILURE;
	}
	while (1)
	{
		in_fp >> menu_level_1 >> menu_level_2;
		switch (menu_level_1)
		{
		case 3:
			switch (menu_level_2)
			{
			case 1:
				break;
			case 2:
				break;
			default:
				break;
			}
			break;
		case 6:
			goto END;
		default:
			break;
		}
	}
END:
	return EXIT_SUCCESS;
}

/*
* 
* #include "GetJobList.hpp"
* 
* GetJobList::getVector() 사용하면 JobPosting vector의 레퍼런스 가져올 수 있음
* 
*/