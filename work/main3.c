#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task3.h"
#include <Windows.h>

int main()
{
	float angle=0;
	char type = '\0';
	char buf[30] = { 0 };
	int check = 0;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("������� �������� ���� �������� 45.00D\n");
	check=scanf("%f%c", &angle, &type);
	if (check != 2 || type == '\n')
	{
		printf("�������� ������ ������\n");
		return 0;
	}
		
	printf("%s", convert(buf, angle, type));
	return 0;

}