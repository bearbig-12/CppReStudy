#include <iostream>

void TypeObjectValue()
{
	std::cout << "���� �Է��ϰ� ���͸� �������� !!" << std::endl;

	//int number; // number��� ���� Ÿ���� ��ü�� ����(Declarartion)
	//float number;
	char mChar;
	// number = 1; // number�� ��� 1�� ���� (Assignment)

	//std::cin >> number; // character input stream;
	//std::cout << "�Է��Ͻ� ���ڴ� ";
	//std::cout << number;
	//std::cout << "�Դϴ� !!!!" << std::endl;

	std::cin >> mChar; // character input stream;
	std::cout << "�Է��Ͻ� ���ڴ� ";
	std::cout << mChar;
	std::cout << "�Դϴ� !!!!" << std::endl;

	// &�� ����Ͽ� ������ �޸� �ּ�(16����)�� Ȯ��
	//std::cout << number << " : " << &number << std::endl;

	std::cout << mChar << " : " << &mChar << std::endl;
	std::cout << mChar << " : " << static_cast<void*>(&mChar) << std::endl;
}

void OverFlow()
{
	int myNumber = 2147483647;
	myNumber += 1;
	std::cout << myNumber << std::endl;

	/*
		myNumber�� 2147483647 + 1 = 2147483648�� �ƴ� 2�� ������ �� ���� - 2147483648�� �ȴ�.
		�̴� ����� �� �ִ� ���� �Ѱܹ��� Overflow�� �߻��Ͽ��� �����̴�.
	*/

	unsigned int myNumber2 = 0;
	myNumber2 -= 1;
	std::cout << myNumber2 << std::endl;

	/*
		overflow�� �ִٸ� underflow�� �����Ѵ�.
	*/
}

int main()
{
	//TypeObjectValue();
	OverFlow();
	
}

