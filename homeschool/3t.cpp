#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// �ִ����� ���ϴ� �Լ�
int gcd(int a, int b) {
	int middle_temp;

	
	while (b != 0) {		//b�� 0�� �ƴ� ������ ��� �ݺ�
		middle_temp = a % b;
		a = b;
		b = middle_temp;
	}
	return a;
}

int main() {
	int num1, num2;

	// ����ڷκ��� �� ���� �Է�
	printf("�� ���� ������ �Է��ϼ���: ");
	scanf("%d %d", &num1, &num2);

	// �ִ����� ��� �� ���
	int result = gcd(num1, num2);
	printf("�� ���� �ִ�����: %d\n", result);

	return 0;
}

