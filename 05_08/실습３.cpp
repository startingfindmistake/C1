#include<iostream>
using namespace std;

//first네임스페이스 정의
namespace first
{
	int value = 1;
}

//second 네임스페이스 정의
namespace second
{
	int value = 2;
}

int main()
{
	cout << first::value;		//1을 추력
	cout << second::value;		//2을 출력
}