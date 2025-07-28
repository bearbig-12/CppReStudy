#include <iostream>

void RecursiveLoop(int n);
int RecursiveSum(int array[5], int start, int end);


int main()
{
	RecursiveLoop(10);


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
		return;
	}
	return array[start] + RecursiveSum(array, start + 1, end);
}