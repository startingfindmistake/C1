#include<iostream>

using namespace std;

int main(void)
{
	double chris = 100.12;
	double& youngjin = chris;
	cout << "chris's memory address=" << &chris << endl;
	cout << "youngin's memory address =" << &youngjin << endl;
	return 0;
}