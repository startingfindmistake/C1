//파일로 부터 데이터를 읽어 보자

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int ch, i;
	FILE* fp = fopen("data.txt", "rt");
	if (fp == NULL) {
		puts("파일오픈 실패!");
		return -1;
	}

	for (i = 0; i < 3; i++)
	{
		ch = fgetc(fp);
		printf("%c \n", ch);
	}
	fclose(fp);
	return 0;
}