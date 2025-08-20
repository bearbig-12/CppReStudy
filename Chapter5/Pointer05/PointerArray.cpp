#include <iostream>

int Sum(int array[], int size);
int Sum2(int (*input)[3]);




int main()
{
	int array[10]{ 1,2,3,4,5,6,7,8,9,10 };


	{
	/*	for (int i = 0; i < 10; ++i)
		{
			std::cout << &array[i] << " " << std::endl;
		}

		int sum = 0;
		for (int i = 0; i < 10; ++i)
		{
			sum += array[i];
		}
		std::cout << sum << "\n";

		int sum2 = 0;
		for (int i = 0; i < 10; ++i)
		{
			sum2 += *(array + i);
		}
		std::cout << sum2 << "\n";

		int sum3 = 0;
		int* p = array;
		for (int i = 0, *p = array; i < 10; ++i, ++p)
		{
			sum3 += *p;
		}
		std::cout << sum3 << "\n";*/
	}


	// 2차원 배열

	int array2[2][3] = {
		{1,2,3,},
		{4,5,6,}
	};
	{
	

		int (*p)[3] = array2;

		for (int i = 0; i < 2; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				std::cout << *((*p) + j) << "  ";
			}
			++p;
			std::cout << "\n";
		}

		int* k = &array2[0][0];
		for (int i = 0; i < 2; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				std::cout << *k++ << "  ";
			}
			std::cout << "\n";
		}
	}

	std::cout << Sum(array, 10) << std::endl;
	std::cout << Sum2(array2) << std::endl;


}

int Sum(int array[], int size)
{
	int sum = 0;
	for (int i = 0; i < 10; ++i)
	{
		sum += array[i];
	}
	return sum;
}

int Sum2(int (*input)[3])
{
	int sum = 0;

	int (*p)[3] = input;

	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			sum += *((*p) + j);
		}
		++p;
	}
	return sum;
}