#include<iostream>

namespace BestComlmpl
{
	void SimpleFunc(void)
	{
		std::cout << "BestCom�� ������ �Լ�" << std::endl;
	}
}

namespace ProgComlmpl
{
	void SimpleFunc(void)
	{
		std::cout << "ProgCom�� ������ �Լ�" << std::endl;
	}
}

int main()
{
	BestComlmpl::SimpleFunc();
	ProgComlmpl::SimpleFunc();

	return 0;
}