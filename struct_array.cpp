#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

struct employee
{
	char name[20];	//�̸�
	char pid[20];	//�ֹι�ȣ
	int salary;		//�޿�
};

int main(void)
{
	struct employee arr[3];
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("�̸�: ");
		scanf("%s", arr[i].name);
		printf("�ֹι�ȣ: ");
		scanf("%s", arr[i].pid);
		printf("�޿�: ");
		scanf("%d", &arr[i].salary);
	}

	for (i = 0; i < 3; i++)
	{
		printf("�̸�: %s \n", arr[i].name);
		printf("�ֹι�ȣ: %s \n", arr[i].pid);
		printf("�޿�: %d \n", arr[i].salary);
	}
	return 0;
}

