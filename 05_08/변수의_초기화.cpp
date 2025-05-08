#include<stdio.h>

int foo(void)
{
	int i = 0, j;
	j = i + 2;

	return j;
}

int main(void)
{
	for (int i = 0; i < 10; i++)
		printf("Result #%d : %d\n", i, foo());
	return 0;
}