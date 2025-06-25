#include <iostream>
// Liter - 리터럴
/*
	변수 아닌 숫자들

	bool - 불린 - 없음 - true or false
	int	 - 정수 - 없음 - 100,200,...
	unsigned int - 정수 - U,u - 100u, 200u
	long int - 정수 - L,l - 100l,200l
	unsinged long - 정수 - UL, ul - 100UL, 200UL
	float - 실수 - f,F - 100.0f
	doule - 실수 - 없음 - 200.0
	char - 문자 - 없음 - 'a'
	std::string - 아스키 문자열 - 없음 - "aa"
*/

// Escape Sequence - 대응 문자
/*
	\' - 작은 따옴표
	\" - 큰 따옴표
	\\ - 역 슬래시
	\0 - null 문자
	\r - 캐리지 리턴 - 맨 처음으로 복귀
	\n - 새 줄(New Line)
	\t - 가로 탭
	\v - 세로 탭
*/

// 상수 - Constant 변하지 않는 수
/*
	const double pi = 3.141592;
	pi = 3.141592653;	// error - 상수는 변경이 되지 않는다
	double are = w * pi * r;
*/

int main()
{
	std::cout << "이름과 나이를 입력하고 엔터를 누르세요." << '\n';
	std::string mName;
	int mAge;

	std::cin >> mName >> mAge;
	std::cout << "Hello, " << mName << "(" << mAge << ")" << std::endl;
}