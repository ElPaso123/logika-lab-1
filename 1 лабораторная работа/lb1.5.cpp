#include "stdio.h"
#include "StdAfx.h"
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>



int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Rus");
	setvbuf(stdin, NULL, _IONBF, 0); 
	setvbuf(stdout, NULL, _IONBF, 0); 

	int i;
	int ch = 0;
	char eng[20];
	int ch1 = 0;

	struct student
	{
		char famil[20];
		char name[20], facult[20];
		int Nomzach;
	} stud[3];

	for(i=0;i<3;i++)
	{
		printf("������� ������� ��������\n"); 
		scanf("%20s",stud[i].famil);
		printf("������� ��� �������� %s\n",stud[i].famil);
		scanf("%20s",stud[i].name);
		printf("������� �������� ���������� �������� %s %s\n",stud[i].famil,stud[i].name); 
		scanf ("%20s",stud[i].facult);
		printf("������� ����� �������� ������ �������� %s %s\n",stud[i].famil,stud[i].name); 
		scanf ("%d",&stud[i].Nomzach);
	}
	for (i = 0; i < 3; i++)
	{
		printf("C������ %s %s ��������� �� ���������� %s, ����� �������� ������ %d \n\n",stud[i].famil,stud[i].name,stud[i].facult,stud[i].Nomzach);
	}

	while (1){
		printf("������� ���� �� ������ �� �������� ����� ����������� �����(������� �����)\n1.������� \n2.��� \n3.�������� ���������� \n4.����� �������� ������\n");
		scanf("%d", &ch);
		if (ch != 4)
		{
			printf("������� �������� ���������\n");
			scanf("%20s", &eng);
		}
		else
		{
			printf("������� ����� �������� ������\n");
			scanf("%d", &ch1);
		}

		int num = 0;
		for (i = 0; i < 3; i++) 
		{
			if ((ch == 1 && strcmp(eng, stud[i].famil) == 0)||
			(ch == 2 && strcmp(eng, stud[i].name) == 0)||
			(ch == 3 && strcmp(eng, stud[i].facult) == 0)||
			(ch == 4 && stud[i].Nomzach == ch1))
			{
				printf("������� %s %s ��������� �� ���������� %s, ����� ������ ������ %d\n", stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
			}
		}
	}



	getchar();
}


