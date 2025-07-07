#include <iostream>

float add(int, int);
float divide(int, int);
float threeMul(int, int, int);
float Calculator(float(*)(int, int), int, int);
float Calculator2(float(*)(int, int, int), int, int, int);


int main()
{

	int a = 20;
	int b = 30;
	int c = 10;
	float d = 0.0;


	// Add
	d = Calculator(add, a, b);
	std::cout << "Add : a + b = " << d << std::endl;
	// Div
	d = Calculator(divide, a, c);
	std::cout << "div : a / c = " << d << std::endl;
	// ThreeMul
	d = Calculator2(threeMul, a, b, c);
	std::cout << "ThreeMul : a * b * c = " << d << std::endl;


	float(*pFunptr1)(int, int); // 함수 포인터

	pFunptr1 = add;
	d = pFunptr1(a, b);
	//std::cout << d << std::endl;


	pFunptr1 = divide;
	d = pFunptr1(a, c);
	//std::cout << d << std::endl;


	float(*pFunptr)(int, int, int);
	pFunptr = threeMul;
	d = pFunptr(a, b, c);
	//std::cout << d << std::endl;

}

float add(int a, int b)
{
	return a + b;
}

float divide(int a, int b)
{
	return a / b;
}

float threeMul(int a, int b, int c)
{
	return a * b * c;
}

float Calculator(float(*pFuncPtr)(int, int), int a, int b)
{
	return pFuncPtr(a, b);
}

float Calculator2(float(*pFuncPtr)(int, int, int), int a, int b, int c)
{
	return pFuncPtr(a, b, c);
}

