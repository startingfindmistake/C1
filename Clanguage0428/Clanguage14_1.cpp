#include<stdio.h>

int SquareByValue(int num)		//num이라는 값을 복사해서 매개변수로 받음
{
	return num * num;			//받은 값 num을 제곱 num*num해서 결과 리턴
}

void SquareByReference(int* ptr)
{
	int num = *ptr;				//포인터가 가리키는 값을 num에 저장
	*ptr = num * num;			//가리키는 메모리에 제곱한 값을 다시 저장
}

int main(void)
{
	int num = 10;
	printf("%d \n", SquareByValue(num));
	SquareByReference(&num);
	printf("%d \n", num);
	return 0;
}