#include<stdio.h>

int main(void)
{
	char x, y;
	x = -128;
	y = -x;

	if (x == y)		printf("1");
	if ((x-y)==0)		printf("2");
	if ((x + y) == 2 * x)	printf("3");
	if (x != -y)					printf("4");


	return 0;
}