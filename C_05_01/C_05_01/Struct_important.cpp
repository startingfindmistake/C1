#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct student
{
	char name[20];
	char student_number[20];	//�л� ������ȣ
	char school[20];			//�б� �̸�
	char major[20];				//���� ����
	int year;					//�г�
}student;

void show_student_info(student* sptr)
{
	printf("�л� �̸�: %s \n", sptr->name);
	printf("�л� ������ȣ: %s \n", sptr->student_number);
	printf("�б� �̸�: %s \n", sptr->major);
	printf("�г�: %d \n", sptr->year);
}

int main(void)
{
	student arr[7];
	int i;

	for (i = 0; i < 7; i++)
	{
		printf("�̸�: "); scanf("%s", arr[i].name);
		printf("�̸�: "); scanf("%s", arr[i].student_number);
		printf("�̸�: "); scanf("%s", arr[i].school);
		printf("�̸�: "); scanf("%s", arr[i].major);
		printf("�̸�: "); scanf("%s", arr[i].year);
	}

	for (i = 0; i < 7; i++)
		show_student_info(&arr[i]);
	return 0;
}