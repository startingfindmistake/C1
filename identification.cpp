#define _CRT_SECURE_NO_WARNINGS  // C4996 ��� ����
#include<stdio.h>

int main(void)
{
	char iD[7];
	char name[10];

	fputs("�ֹι�ȣ �� 6�ڸ� �Է� ", stdout);
	fgets(iD, sizeof(iD), stdin);	// �Է¹��� ���ڿ� ���� , ���� �ִ� ���� ��, �Է½�Ʈ��

	fputs("�̸� �Է� ", stdout);
	fgets(name, sizeof(name), stdin);	// �Է¹��� ���ڿ� ����, ���� �ִ� ���� ��, �Է½�Ʈ��

	printf("�ֹι�ȣ: %s \n", iD);			// %s ���ڿ� ���
	printf("�̸�: %s \n", name);			// %s ���ڿ� ���
	return 0;

}

