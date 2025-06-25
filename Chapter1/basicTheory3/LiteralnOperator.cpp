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

// 연산자 
/*
	myInt	 =		1;
	(피연),(연산),(피연)
	단항 연산자 - 하나의 피연산자에 대한 계산
	이항 연산자 - 두개의 피연산자에 대한 계산 -> =도 이항
	삼한 연산자 - 세개의 피연산자에 대한 계산

	산술 연산자
	+,-,*,/,%(나머지),+=,-=

	비트 연산자
	!(단항) - var1 != var2; var2의 값을 논리 부정하여 var1에 배정
	&(이항) - var1 = var2 & var3; var2와3의 각 비트를 논리곱(AND)으로 연산
	|(이항) - var1 = var2 | var3; var2와3의 각 비트를 논리합(OR)으로 연산
	^(이항) - var1 = var2 ^ var3; var2와3의 각 비트를 배타적 논리합(XOR)으로 연산
	>>(이항) - var1 = var2 >> var3; var2의 값을 var3 값 만큼 오른쪽으로 이동시킨후 var1에 배정
	<<(이항) - var1 = var2 << var3; var2의 값을 var3 값 만큼 왼쪽으로 이동시킨후 var1에 배정

	증감 연산자
	++(단항) ++var1; var1 = var1 + 1 이랑 같음
	--(단항) --var1; var1 = var1 - 1 이랑 같음
	후위 증감 연산자, 전위 증감 연산자
	int var1 = 1;
	int var2;
	var2 = var1++;			,	var2 = ++var1;
	-> var1 = 2, var2 = 1	,	var1 = var2 = 2
	뒤에 사용한 것은 var2에 값을 배정한 후 증가하고, 앞에 사용한 것은 값을 더한 후 배정하기 때문

	비교 연산자 (전부 이항)
	==	-	v1 = v2 == v3; v2와 v3가 같으면 true 아니면 false를 v1에 배정
	!=	-	v1 = v2 != v3; v2와 v3가 같으면 false 아니면 true를 v1에 배정
	<   -   v1 = v2 < v3;  v2가 v3보다 작으면 true, 크면 false를 v1에 배정
	<=   -   v1 = v2 <= v3;  v2가 v3보다 작거나 같으면 true, 크면 false를 v1에 배정

	논리 연산자
	&& (이항) - v2 && v3; v2가 true이고 v3가 true이면 true
	|| (이항) - v2 || v3; v2가 false이고 v3가 false이면 true
	!  (단항) - !v1; v1이 true이면 false, false 이면 true

*/
void OperatorTest()
{
	/*int x{}, y{};
	std::cin >> x >> y;*/

	//std::cout << "몫 : " << x / y << std::endl;
	//std::cout << "나머지 : " << x % y << std::endl;
	int x{ 3 }, y{ 4 };

	// x = 0000 0011
	// y = 0000 0100

	x = x ^ y;	// x = 0000 0111
	y = y ^ x;	// y = 0000 0011
	x = x ^ y;	// x = 0000 0100

	std::cout << "x = " << x << " y = " << y << std::endl;
}

int main()
{
	OperatorTest();
	/*std::cout << "이름과 나이를 입력하고 엔터를 누르세요." << '\n';
	std::string mName;
	int mAge;

	std::cin >> mName >> mAge;
	std::cout << "Hello, " << mName << "(" << mAge << ")" << std::endl;*/

	int alpha{ 255 }, red{ 255 }, blue{ 0 }, green{ 0 };
	unsigned int colour;

	colour = alpha << 24 | red << 16 | green << 8 | blue;
	/*colour = alpha << 24;				// 255는 FF 이걸 24비트(3바이트) 만큼 이동 - FF000000
	colour = colour | red << 16;		// 255는 FF 이걸 16비트(2바이트) 만큼 - FF0000 
	colour = colour | green << 8;		// 0은 00 이걸 8비트(1바이트) 만큼 - 0000 
	colour = colour | blue;*/			// 00			
										// 이걸 전부 OR 처리 -> FFFF0000
	std::cout << std::hex;
	std::cout << colour << std::endl;

	alpha = colour >> 24;		//
	red = colour >> 16 & 0xFF;	// Alpha를 제거하기 위한 비트 마스크
	green = colour >> 8 & 0xFF;
	blue = colour & 0xFF;
	// hex에서 rgb로

}