#include <iostream>


int main()
{
	// 상수 변수를 포인터로 지정하려고 하면 컴파일 에러가 발생한다.
	/*const int myInt = 10;
	int* pInt = &myInt;
	*pInt = 9;*/

	const int x{ 9 };

	const int* ptr1 = &x; // 상수형 정수를 가르키는 포인터 표기법

	//*ptr1 = 10; // 역참조는 불가능 하다

	int y{ 10 };
	int* const ptr2{ &y };	// int* const는 int*가 상수라는 의미로 상수포인터가 된다. 상수포인터는 포인터를 변경할 수 없다.
	// 따라서 다음과 같이 선언과 정리를 분리할 수 없다.
	/*int* const ptr3;	
	ptr3 = &y;*/

	*ptr2 = 15;	// 상수포인터는 가르키고 있는 곳의 내용은 언제든지 역참조로 변경이 가능하다.  


	const int a{ 10 }, b{ 30 };

	const int* const ptr01 = &x; // 상수형 정수를 가르키는 상수 포인터

	//ptr01 = &y;				 // 상수 포인터 이므로 가르키는 대상 변경 불가능

	//*ptr01 = 25;				 // 상수형 정수를 가르키므로 역참조로 값 변경도 불가능.

}