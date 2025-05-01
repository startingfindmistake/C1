#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

typedef struct person
{
	char name[20];
	char phoneNum[20];
	int age;
} person;

void ShowPersonInfo(person man)
{
	printf("name: %s \n", man.name);
	printf("phone: %s \n", man.phoneNum);
	printf("age: %d \n", man.age);
}

person ReadPersonInfo(void)
{
	person man;
	printf("name? "); scanf("%s", man.name);
	printf("phone? "); scanf("%s", man.phoneNum);
	printf("age? "); scanf("%d", &man.age);

}

int main(void)
{
	person man = ReadPersonInfo();
	ShowPersonInfo(man);
	return 0;
}