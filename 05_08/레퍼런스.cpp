int main(void)
{
	int num = 10;
	int& reg = num;		//ref는 num의 별명

	cout << "num = " << num << endl;
	cout << "ref=" << ref << endl;	//num의 값 출력

	ref = 100;		//num = 100;을 수행함

	cout << "num=" << num << endl;
	cout << "ref=" << ref << endl;		//num값 출력

	cout << "&num=" << &num << endl;
	cout << "&ref=" << &ref << endl;		//num 주소 출력

	return 0;
}