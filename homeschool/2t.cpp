#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int a, b;
	
	//사용자 입력 받기
	printf("두 개의 정수를 입력하세요: ");
	scanf("%d %d", &a, &b);

	//작은 수와 큰 수 정리
	int start = (a < b) ? a : b;
	int end = (a > b) ? a : b;

	//두 수 사이에 단만 출력
	if (end - start <= 1) {
		printf("두 수 사이에 출력할 구구단이 없습니다.\n");
	}
	else {
		for (int i = start + 1; i < end; i++) {
			printf("== %단 ==\n", i);
			for (int j = 1; j <= 9; j++) {
				printf("%d x %d = %d\n", i, j, i * j);
			}
			printf("\n");


		}
	}

	return 0;
}