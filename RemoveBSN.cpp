#include<stdio.h>
#include<string.h>

void RemoveBSN(char str[])
{
	int len = strlen(str);	//\n ���� ���̸� ��ȯ�Ѵ�.	
	str[len - 1] = 0;		//���ڿ� ���� �ִ� �ٹٲ� �� ���� \0 ��ü�Ͽ� ����
}

int main(void)
{
	char str[100];
	printf("���ڿ� �Է�: ");
	fgets(str, sizeof(str), stdin);		//�ڵ����� \n �ٹٲ� ���ڰ� ����
	printf("����: %d, ����: %s \n", strlen(str), str);

	RemoveBSN(str);		//�ٹٲ� ���� ����: str[strlen(str) - 1] = '\0';
	printf("����: %d, ����: %s \n", strlen(str), str);
	return 0;
}