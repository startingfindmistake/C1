#include<iostream>
using namespace std;

//first���ӽ����̽� ����
namespace first
{
	int value = 1;
}

//second ���ӽ����̽� ����
namespace second
{
	int value = 2;
}

int main()
{
	cout << first::value;		//1�� �߷�
	cout << second::value;		//2�� ���
}