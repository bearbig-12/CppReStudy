#include <iostream>

void RecursiveLoop(int n);
int RecursiveSum(int array[5], int start, int end);
int Factorial(int n);
int Fibonacci(int n);

int main()
{
	//int array[]{1,2,3,4,5};

	//int result1, result2{};
	//result1 = RecursiveSum(array,0,4);
	//std::cout << result1 << std::endl;
	//
	//result2 = Factorial(5);
	//std::cout << result2 << std::endl;

	
	std::cout << Fibonacci(10);

}

void RecursiveLoop(int n)
{
	// base case
	if (n == 0)
	{
		return;
	}
	// 이렇게 하면 1,2,3,4..... 순으로 출력된다
	RecursiveLoop(n - 1);
	std::cout << n << std::endl;

	// 반대로 하면 1,2,3,4..... 순으로 출력된다
	/*std::cout << n << std::endl;
	RecursiveLoop(n - 1);*/

	// 함수 호출 스택으로 인하여 이러한 결과가 산출된다. 
}

int RecursiveSum(int array[5], int start, int end)
{
	if (start == end)
	{
		return array[start];
	}
	return array[start] + RecursiveSum(array, start + 1, end);
}

int Factorial(int n)
{
	if (n == 1)
	{
		return 1;
	}
	return n * Factorial(n - 1);
}

int Fibonacci(int n)
{
	if (n == 1 || n == 0)
	{
		return 1;
	}
	return Fibonacci(n - 1) + Fibonacci(n - 2);
}