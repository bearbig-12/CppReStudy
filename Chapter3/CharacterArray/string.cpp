#include <iostream>
#include <stdio.h>
#include <sstream>


void FormattedString();
void FormattedStringCpp();

int main()
{
	//char c[5] = {'d', 'o', 'g', 'g', 'y'};
	//std::cout << c << std::endl;
	// 요렇게 출력하면 doggy뒤에 쓰레기 값이 나오게 된다. 이건 포인터와 연관되어 있는 문제이니 포인터 파트에서..
	// 문제가 발생하는 이유는 문자가 언제 끝나는지 모르기 때문이다.

	//char d[6] = { 'd', 'o', 'g', 'g', 'y', '\0'};
	//std::cout << d << std::endl;
	// 문자가 언제 끝나는지 알려주는 널 문자가 필요하다

	//char myString[] = "this is my world";
	//std::cout << myString << std::endl;
	// 이 경우 컴파일러가 배열 초기화 및 널 문자를 자동으로 처리해준다. 
	// 문자열은 항상 마지막에 널 문자가 붙어 있기 때문에 <길이 + 1> 이라고 기억해두자

	FormattedString();
	FormattedStringCpp();


}

void FormattedString()
{
	// C 스타일, 구식이긴 하지만 한줄에 다 표현 가능하여 자주 쓰임
	int number{ 1 };
	char name[]{"doggy"};
	float average{ 90.1f };
	char output[128]{};

	sprintf_s(output, sizeof(output), "%d번 학생 %s는 평균 %.1f 입니다.", number, name, average);
	std::cout << output << std::endl;
}

void FormattedStringCpp()
{
	//C++ 스타일
	int number{ 2 };
	char name[]{ "Coogie" };
	float average{ 95.1f };

	std::ostringstream oss;

	oss << number << "번 학생 " << name << "는 평균 " << average << "입니다" << std::endl;

	std::cout << oss.str() << std::endl;
}