#include<stdio.h>
#include<stdlib.h>

typedef struct _student
{
	char num[7];
	char clas[20];
	char name[20];
	int score[3];
}student;

void sub(student *p);

int main() 
{

	int i;
	student stu[3] = { {"970101","�q�l�@�A","�L�x��",90,90,90},
					   {"970101","�q�l�@�A","�B�t��",89,89,89},
					   {"970101","�q�l�@�A","�}����",49,49,49}, };
	student *ps;
	ps = stu;
	printf("\n");
	printf("================================================\n");
	printf(" �Ǯ�	�Z��	�m�W   	 ���	 �^��	 �ƾ�\n");
	printf("================================================\n");
	for (i = 0; i <= 2; i++)
	{
		printf("%6s %-10s %-8s %4d %4d %4d\n", (ps + i)->num, (ps + i)->clas, 
			(ps + i)->name, (ps + i)->score[0], (ps + i)->score[1], (ps + i)->score[2]);
	}
	printf("	�I�s�禡�e\n\n");
	sub(ps);
	printf("\n	�I�s�禡��\n");
	for (i = 0; i <= 2; i++)
	{
		printf("%6s %-10s %-8s %4d %4d %4d\n", (ps + i)->num, (ps + i)->clas,
			(ps + i)->name, (ps + i)->score[0], (ps + i)->score[1], (ps + i)->score[2]);
	}
	printf("\n");
	system("pause");
}

void sub(student *p)
{
	int i;
	for (i = 0; i <= 2; i++)
	{
		(p + i)->score[0] += 10;
		(p + i)->score[1] += 10;
		(p + i)->score[2] += 10;
	}
}