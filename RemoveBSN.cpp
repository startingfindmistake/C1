#include<stdio.h>
#include<string.h>

void RemoveBSN(char str[])
{
	int len = strlen(str);	//\n 포함 길이를 반환한다.	
	str[len - 1] = 0;		//문자열 끝에 있는 줄바꿈 널 문자 \0 대체하여 종류
}

int main(void)
{
	char str[100];
	printf("문자열 입력: ");
	fgets(str, sizeof(str), stdin);		//자동으로 \n 줄바꿈 문자가 포함
	printf("길이: %d, 내용: %s \n", strlen(str), str);

	RemoveBSN(str);		//줄바꿈 문자 제거: str[strlen(str) - 1] = '\0';
	printf("길이: %d, 내용: %s \n", strlen(str), str);
	return 0;
}