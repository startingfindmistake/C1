#include<stdio.h>

typedef struct sbox	//	����ü sbox�� ����
{
	int mem1;
	int mem2;
	double mem3;
}SBox;

typedef union ubox	// ���ü ubox�� ����
{
	int mem1;
	int mem2;
	double mem3;
}UBox;

int main(void)
{
	SBox sbx;
	UBox ubx;
	printf("%p %p %p \n", &sbx.mem1,)
}