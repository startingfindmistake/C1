#define _CRT_SECURE_NO_WARNINGS  // C4996 경고 무시
#include<stdio.h>

int main(void)
{
	char iD[7];
	char name[10];

	fputs("주민번호 앞 6자리 입력 ", stdout);
	fgets(iD, sizeof(iD), stdin);	// 입력받을 문자열 버퍼 , 읽을 최대 문자 수, 입력스트림

	fputs("이름 입력 ", stdout);
	fgets(name, sizeof(name), stdin);	// 입력받을 문자열 버퍼, 읽을 최대 문자 수, 입력스트림

	printf("주민번호: %s \n", iD);			// %s 문자열 출력
	printf("이름: %s \n", name);			// %s 문자열 출력
	return 0;

}

