#include<stdio.h>

struct point
{
	int xpos;
	int ypos;
};

struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};

int main(void)
{
	struct point pos = { 10, 20 };
	struct person man = { "�̽±�", "010-1212-0001", 21 };
	printf("%d %d \n", pos.xpos, pos.ypos);
	printf("%s %s %d \n", man.name, man.phoneNum, man.age);
	return 0;
}