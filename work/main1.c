#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task1.h"
#include <locale.h>
//#include <Windows.h>


int main()
{
	//setlocale(LC_ALL, "Rus");
	//SetConsoleCP(1251);
	//SetConsoleOutputCP(1251);
	char gender;
	float height;
	float weight;
	int check,result;
	printf("������� ��� ���,����,���:\n");
	check=scanf("%c,%f,%f", &gender, &height,&weight);
	if (check != 3)
	{
		printf("�������� ����\n");
		return 0;
	}

	result = getRecommendation(gender, height, weight);
	switch (result)
	{
	case 1:
		printf("��� ���������\n");
		break;
	case -1:
		printf("��� ������������\n");
		break;
	case 0:
		printf("��� �������\n");
		break;
	default:
		printf("������\n");
		break;
	}


	return 0;
}