// ��� ����
#include <stdio.h>
#include <string.h>
#include <iostream>

// ��� ����
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// �Լ� ����
void doTask();
void displayStatistics();
void program_exit();

// ���� ����
FILE* in_fp, * out_fp;

int main()
{	// ���� ������� ���� �ʱ�ȭ
	FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
	FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");

	doTask();

	return 0;
}

void doTask()
{
	// �޴� �Ľ��� ���� level ������ ���� ����
	int menu_level_1 = 0, menu_level_2 = 0;
	int is_program_exit = 0;

	while (!is_program_exit)
	{
		// �Է����Ͽ��� �޴� ���� 2���� �б�
		fscanf(in_fp, "%d %d", &menu_level_1, &menu_level_2);

		// �޴� ���� �� �ش� ���� ����
		switch (menu_level_1)
		{
		case 5:
		{
			switch (menu_level_2)
			{
			case 1: // "5.1 ���� ���� ���" �޴� �κ�
			{
				// displayStatistics() �Լ����� �ش� ��� ����
				displayStatistics();
				break;
			}
			case 2:
			{
				break;
			}

			}

		case 6:
		{
			switch (menu_level_2)
			{
			case 1: // "6.1. ����" �޴� �κ�
			{
				program_exit();
				is_program_exit = 1;
				break;
			}

			}

		}
		}
		}
		return;
	}
}

// �޴� ��� �Լ�
void displayStatistics()
{
	std::cout << "5.1. ���� ���� ���" << std::endl;
}