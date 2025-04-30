#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char str[20];
	printf("정수 입력: ");
	scanf("%s", str);
	printf("%d \n", atoi(str));

	
	printf("실수입력: ");
	scanf("%s", str);
	printf("%d \n", atoi(str));

	return 0;
}