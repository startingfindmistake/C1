#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int translate;

	// ����ڷκ��� 10���� ���� �Է� �ޱ�
	printf("10���� ������ �Է��ϼ���: ");
	scanf("%d", &translate);

	// ���Ĺ��ڸ� �̿��Ͽ� 16������ ���
	printf("16����: %X\n", translate);	// �빮�� ���
	printf("16����: %x\n", translate);	// �ҹ��� ���

	return 0;
}