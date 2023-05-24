#include <cstdio>

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstdio>
#include "GetJobList.hpp"

#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

using namespace std;

vector<JobPosting*> GetJobList::joblist;

int main(void)
{
	std::ifstream	in_fp;
	std::ofstream	out_fp;
	int		menu_level_1;
	int		menu_level_2;

	in_fp.open(INPUT_FILE_NAME, std::ios::in);
	if (!in_fp.is_open())
	{
		std::perror("File opening failed");
		return EXIT_FAILURE;
	}
	out_fp.open(OUTPUT_FILE_NAME, std::ios::out);
	if (!out_fp.is_open())
	{
		std::perror("File opening failed");
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