#include <iostream>

int Sum(int x, int y)
{
	return x + y;
}

int Sigma(int (*f)(int), int m, int n)		// int Sigma(int f(int x), int m, int n) 로 사용시 함수를 복사해서 넘기는 것이다. (정확히는 함수를 지정하는 변수) 그러므로 포인터를 활용하자
{
	std::cout << "Sigma-> f : " << f << '\n';

	int sum = 0;
	for (int k = m; k <= n; ++k)
	{
		sum += f(k);
	}
	return sum;
}

int NormalFunction(int x)
{
	return x;
}

int SquareFunction(int x)
{
	return x * x;
}

using Comparison = bool(*)(int, int);

bool Asscending(int x, int y)
{
	return x > y;
}

bool Descending(int x, int y)
{
	return x < y;
}

void Sort(int array[], int count, Comparison f)
{
	int temp;

	for (int i = 0; i < count; ++i)
	{
		for (int j = 0; j < count - 1 - i; ++j)
		{
			if (f(array[j], array[j + 1]))
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}

}


int main()
{
	int x{ 1 }, y{ 2 };

	//std::cout << &x << " , " << &y << '\n';
	//std::cout << Sum << " , " << main << '\n';
	//std::cout << &Sum << " , " << &main << '\n';
	// 함수의 주소나 함수의 값 자체는 값은 주소를 가지고 있다 마치 배열과 같다.


	Sum(x, y);
	// 함수를 사용하는 코드이고, 이 기능은 () 연산자에 의해 결정된다. () 연산자는 함수 호출 연사자로
	// 해당 식별장가 가지고 있는 주소로 점프하여 실행 순서가 변경되는 기능을 가지고 있다.
	// 함수는 컴퓨터 내부에서 변수와 마찬가지로 L-Value의 성질을 가지고 있으며, 오브젝트의 특성을 나타내는 특성 역시 가지고 있다.

	std::cout << "NormalFunction : " << &NormalFunction << '\n';

	//std::cout << Sigma(NormalFunction, 1, 10) <<  '\n';
	//std::cout << Sigma(SquareFunction, 1, 10) << '\n';


	const int ArraySize = 10;

	int scores[ArraySize]{30, 10, 20, 20, 50, 60, 100, 90, 40, 25};

	Sort(scores, ArraySize, Asscending);

	for (int i = 0; i < ArraySize; ++i)
	{
		std::cout << scores[i] << '\n';
	}
}

