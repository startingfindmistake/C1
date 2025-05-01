#include<stdio.h>

typedef struct sbox	//	구조체 sbox의 정의
{
	int mem1;
	int mem2;
	double mem3;
}SBox;

typedef union ubox	// 고용체 ubox의 정의
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