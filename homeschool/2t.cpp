#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int a, b;
	
	//����� �Է� �ޱ�
	printf("�� ���� ������ �Է��ϼ���: ");
	scanf("%d %d", &a, &b);

	//���� ���� ū �� ����
	int start = (a < b) ? a : b;
	int end = (a > b) ? a : b;

	//�� �� ���̿� �ܸ� ���
	if (end - start <= 1) {
		printf("�� �� ���̿� ����� �������� �����ϴ�.\n");
	}
	else {
		for (int i = start + 1; i < end; i++) {
			printf("== %�� ==\n", i);
			for (int j = 1; j <= 9; j++) {
				printf("%d x %d = %d\n", i, j, i * j);
			}
			printf("\n");


		}
	}

	return 0;
}