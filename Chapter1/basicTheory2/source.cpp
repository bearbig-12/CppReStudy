#include <iostream>

void TypeObjectValue()
{
	std::cout << "값을 입력하고 엔터를 누르세요 !!" << std::endl;

	//int number; // number라는 정수 타입의 객체를 선언(Declarartion)
	//float number;
	char mChar;
	// number = 1; // number에 상수 1을 대입 (Assignment)

	//std::cin >> number; // character input stream;
	//std::cout << "입력하신 숫자는 ";
	//std::cout << number;
	//std::cout << "입니다 !!!!" << std::endl;

	std::cin >> mChar; // character input stream;
	std::cout << "입력하신 문자는 ";
	std::cout << mChar;
	std::cout << "입니다 !!!!" << std::endl;

	// &를 사용하여 변수의 메모리 주소(16진수)를 확인
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
		myNumber는 2147483647 + 1 = 2147483648이 아닌 2의 보수로 된 음수 - 2147483648이 된다.
		이는 허용할 수 있는 값을 넘겨버려 Overflow가 발생하였기 때문이다.
	*/

	unsigned int myNumber2 = 0;
	myNumber2 -= 1;
	std::cout << myNumber2 << std::endl;

	/*
		overflow가 있다면 underflow도 존재한다.
	*/
}

int main()
{
	//TypeObjectValue();
	OverFlow();
	
}

