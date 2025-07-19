#include <iostream>

int mGlobalInt = 100;	// 전역 변수, 소스 파일 어디에서도 사용 가능
						// 단 프로그램 분석을 힘들게 하기 때문에 가급적 사용을 지양하자

extern int myExternValue; // 서로 다른 파일에 존재하는 변수를 사용하기 위한 extern 전역변수와 마찬가지로 사용을 지양하자

double FindBigger(double x, double y); // 함수를 main 함수보다 아래에 작성한 경우, 
									   // 전방 선언을 통하여 미리 컴파일러에게 사용할 함수가 존재함을 알려야 한다.

int Square(int x) 
{
	x = 5;				// 함수 안에서 아무리 x(매개변수) 값을 변경하여도 x인자에는 영향을 주지 않는다
	return x * x;
}

int GetOrderNumber();

int main()
{

	{
		/*int x = 4;

		std::cout << Square(x) << std::endl;
		std::cout << x << std::endl;*/
	}

	{
		//int x, y{};		// {} 안에 정의된 변수는 지역 변수 이다.

		//std::cin >> x >> y;

		//std::cout << FindBigger(x, y) << std::endl;
		//std::cout << "Global value : " << mGlobalInt << std::endl;
	}

	{
		//myExternValue = 9999;

		//std::cout << "extern value : " << myExternValue << std::endl;
	}

	{
		for (int i = 0; i < 10; ++i)
		{
			std::cout << GetOrderNumber() << std::endl;
		}
	}
	


}

double FindBigger(double x, double y)
{
	return (x > y) ? x : y;
}

int GetOrderNumber()
{
	static int number = 0;		// static이 아닌 기존 int였으면 지역변수 범위로 인하여 매번 초기화 되었을 것.
								// static은 오직 한 번만 생성되어 프로그램 종룔까지 살아 남는 정적변수
	return number++;
}