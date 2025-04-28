#include<stdio.h>

int SquareByValue(int num)		//num�̶�� ���� �����ؼ� �Ű������� ����
{
	return num * num;			//���� �� num�� ���� num*num�ؼ� ��� ����
}

void SquareByReference(int* ptr)
{
	int num = *ptr;				//�����Ͱ� ����Ű�� ���� num�� ����
	*ptr = num * num;			//����Ű�� �޸𸮿� ������ ���� �ٽ� ����
}

int main(void)
{
	int num = 10;
	printf("%d \n", SquareByValue(num));
	SquareByReference(&num);
	printf("%d \n", num);
	return 0;
}