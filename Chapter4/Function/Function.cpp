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

// 함수 오버로딩, 매개변수만 다르고 반환 타입은 같아야 함. 반환 타입이 다르면 그냥 다른 함수로 인식
int print(int i);
int print(double d);
int print(float f);

void f(int x);
void g(int x);

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

	//{
	//	for (int i = 0; i < 10; ++i)
	//	{
	//		std::cout << GetOrderNumber() << std::endl;
	//	}
	//}

	// 함수 호출 스택
	int x = 10;
	f(x);
	// main 호출 -> f() 호출 -> g()가 호출된다.
	// 처리 순서는 g()가 처리되고 반환되면 f()로, f()가 처리되고 반환되면 main으로 돌아간다.
	// 결국 가장 마지막에 들어온 g()가 제일 먼저 처리되고 가장먼저 들어온 main이 제일 늦게 처리된다. (호출 스택)
	// 이 처리 순서를 잘 기억하는 것이 재귀함수 이해에 도움이 된다.


}

void f(int x)
{
	int y = 1;
	g(x);
}

void g(int x)
{
	int z = 1;
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

int print(int i)
{
	return  i;
}
int print(double d)
{
	return d;
}
int print(float f)
{
	return f;
}