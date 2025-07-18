#include <iostream>

double FindBigger(double x, double y); // 함수를 main 함수보다 아래에 작성한 경우, 
									   // 전방 선언을 통하여 미리 컴파일러에게 사용할 함수가 존재함을 알려야 한다.

int Square(int x) 
{
	x = 5;				// 함수 안에서 아무리 x(매개변수) 값을 변경하여도 x인자에는 영향을 주지 않는다
	return x * x;
}



int main()
{
	/*int x = 4;

	std::cout << Square(x) << std::endl;
	std::cout << x << std::endl;*/

	int x, y{};

	std::cin >> x >> y;

	std::cout << FindBigger(x, y) << std::endl;
}

double FindBigger(double x, double y)
{
	return (x > y) ? x : y;
}