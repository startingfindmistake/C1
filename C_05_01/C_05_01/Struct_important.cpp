#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct student
{
	char name[20];
	char student_number[20];	//학생 고유번호
	char school[20];			//학교 이름
	char major[20];				//선택 전공
	int year;					//학년
}student;

void show_student_info(student* sptr)
{
	printf("학생 이름: %s \n", sptr->name);
	printf("학생 고유번호: %s \n", sptr->student_number);
	printf("학교 이름: %s \n", sptr->major);
	printf("학년: %d \n", sptr->year);
}

int main(void)
{
	student arr[7];
	int i;

	for (i = 0; i < 7; i++)
	{
		printf("이름: "); scanf("%s", arr[i].name);
		printf("이름: "); scanf("%s", arr[i].student_number);
		printf("이름: "); scanf("%s", arr[i].school);
		printf("이름: "); scanf("%s", arr[i].major);
		printf("이름: "); scanf("%s", arr[i].year);
	}

	for (i = 0; i < 7; i++)
		show_student_info(&arr[i]);
	return 0;
}