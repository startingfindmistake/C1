int main(void)
{
	int num = 10;
	int& reg = num;		//ref�� num�� ����

	cout << "num = " << num << endl;
	cout << "ref=" << ref << endl;	//num�� �� ���

	ref = 100;		//num = 100;�� ������

	cout << "num=" << num << endl;
	cout << "ref=" << ref << endl;		//num�� ���

	cout << "&num=" << &num << endl;
	cout << "&ref=" << &ref << endl;		//num �ּ� ���

	return 0;
}