#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int translate;

	// 사용자로부터 10진수 정수 입력 받기
	printf("10진수 정수를 입력하세요: ");
	scanf("%d", &translate);

	// 서식문자를 이용하여 16진수로 출력
	printf("16진수: %X\n", translate);	// 대문자 출력
	printf("16진수: %x\n", translate);	// 소문자 출력

	return 0;
}