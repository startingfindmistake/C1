#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 최대공약수 구하는 함수
int gcd(int a, int b) {
	int middle_temp;

	
	while (b != 0) {		//b가 0이 아닐 때까지 계속 반복
		middle_temp = a % b;
		a = b;
		b = middle_temp;
	}
	return a;
}

int main() {
	int num1, num2;

	// 사용자로부터 두 정수 입력
	printf("두 개의 정수를 입력하세요: ");
	scanf("%d %d", &num1, &num2);

	// 최대공약수 계산 및 출력
	int result = gcd(num1, num2);
	printf("두 수의 최대공약수: %d\n", result);

	return 0;
}

