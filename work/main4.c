#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task4.h"
//#include <Windows.h>

int main()
{
	//SetConsoleCP(1251);
	//SetConsoleOutputCP(1251);
	int check = 0;
	int feet = 0;
	int inches = 0;
	printf("������� ���� �� ������������ ������� ����`�����\n");
	check=scanf("%d`%d", &feet, &inches);
	if (check != 2)
	{
		printf("�������� ������ ������\n");
		return 0;
	}

	printf("���� � ����������� - %.1f ��\n", convert(feet, inches));
	return 0;

}