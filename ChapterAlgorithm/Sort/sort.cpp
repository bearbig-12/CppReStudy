#include <iostream>

void PrintArray(int input[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << input[i] << " ";
	}
}

void Swap(int& v1, int& v2)
{
	int temp = v1;
	v1 = v2;
	v2 = temp;
}

void Sort(int input[], int size)
{
	for (int i = 0; i < size-1; ++i)
	{
		for (int j = i+1; j < size; ++j)
		{
			if (input[i] > input[j])
			{
				Swap(input[i], input[j]);
			}
		}
	}
}

void SelectionSort(int input[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		int minIndex = i;
		for (int j = i; j < size; ++j)
		{
			if (input[minIndex] > input[j])
			{
				minIndex = j;
			}
		}
		if (minIndex != i)
		{
			Swap(input[i], input[minIndex]);
		}
	}
}

void BubbleSort(int input[], int size)
{
	for (int i = 0; i < size - 1; ++i)
	{
		for (int j = 0; j < size-1-i; ++j)
		{
			if (input[j] > input[j + 1])
			{
				Swap(input[j], input[j + 1]);
			}
		}
	}
}

int main()
{
	const int size = 5;
	int array[size]{ 8,7,2,3,1 };

	BubbleSort(array, size);

	PrintArray(array, size);
}