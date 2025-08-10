#include <iostream>

void PrintValue(const int& x);

// Call by Value
// x,y 값을 인자로 넘겨 줄 때 값이 복사가 되면서 서로 다른 변수가 되기 때문에 함수 밖으로는 영향을 주지 않는다.
void Swap(int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}

// Call by Reference
// 포인터를 인자로 넘겨주기 때문에 함수 내부에서도 해당 변수를 제어하고, 함수 밖으로도 영향을 준다.
void Swap2(int* x, int* y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void Swap3(int& x, int& y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}

int main()
{
	int x{ 10 }, y{ 20 };

	//int& ref; // 선언만 사용할 수 없다. 반드시 초기화 값을 배정해줘야 한다.
	int& ref = x;
	x = 30;

	//Swap(x, y);
	//std::cout << x << " , " << y << std::endl;

	//Swap2(&x, &y);
	//std::cout << x << " , " << y << std::endl;

	//Swap3(x, y);
	//std::cout << x << " , " << y << std::endl;

	


	const int a{ 10 };

	const int& ref01 = a; // 상수형 참조 타입. 
	//ref01 = 1;		  // 참조가 상수 타입 이므로 값을 변경할 수 없다.

	int b = 20;
	const int& ref02 = b;
	//ref02 = 30;		  // 참조하고 있는 변수 y가 일반형이라도, ref02가 상수 참조 이므로 값을 수정할 수 없다.


	const int& ref03 = 10 + 20;		// 이 형식이 특이한 형식이다. 값을 참조하는 형태로, 우측값 참조라고 한다.
	//std::cout << ref03 << std::endl;


	// 아래와 같이 다양한 형태를 참조할 수 있게 된다.
	int q = 10;				// 일반 변수
	PrintValue(q);

	const int w{ 20 };		// 상수 변수
	PrintValue(w);

	PrintValue(30);			// 리터럴

	PrintValue(40 + 50);	// 우측값



}


void PrintValue(const int& x)
{
	std::cout << x << std::endl;
}