#include <iostream>
// Liter - ���ͷ�
/*
	���� �ƴ� ���ڵ�

	bool - �Ҹ� - ���� - true or false
	int	 - ���� - ���� - 100,200,...
	unsigned int - ���� - U,u - 100u, 200u
	long int - ���� - L,l - 100l,200l
	unsinged long - ���� - UL, ul - 100UL, 200UL
	float - �Ǽ� - f,F - 100.0f
	doule - �Ǽ� - ���� - 200.0
	char - ���� - ���� - 'a'
	std::string - �ƽ�Ű ���ڿ� - ���� - "aa"
*/

// Escape Sequence - ���� ����
/*
	\' - ���� ����ǥ
	\" - ū ����ǥ
	\\ - �� ������
	\0 - null ����
	\r - ĳ���� ���� - �� ó������ ����
	\n - �� ��(New Line)
	\t - ���� ��
	\v - ���� ��
*/

// ��� - Constant ������ �ʴ� ��
/*
	const double pi = 3.141592;
	pi = 3.141592653;	// error - ����� ������ ���� �ʴ´�
	double are = w * pi * r;
*/

int main()
{
	std::cout << "�̸��� ���̸� �Է��ϰ� ���͸� ��������." << '\n';
	std::string mName;
	int mAge;

	std::cin >> mName >> mAge;
	std::cout << "Hello, " << mName << "(" << mAge << ")" << std::endl;
}