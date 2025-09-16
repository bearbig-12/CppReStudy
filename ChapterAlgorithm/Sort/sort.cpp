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

void  InsertionSort(int input[], int size)
{
	for (int i = 1; i < size; ++i)
	{
		int key = input[i];
		int j = i - 1;
		while (j >= 0 && input[j] > key)
		{
			input[j + 1] = input[j];
			--j;
		}
		input[j + 1] = key;
	}
}

void Merge(int input[], int start, int half , int end, int temp[])
{
	int i = start;
	int j = half + 1;
	int tempIndex = 0;

	// 왼쪽과 오른쪽 블럭 병합하기
	while (i <= half && j <= end)
	{
		if (input[i] < input[j])
		{
			temp[tempIndex++] = input[i++];
		}
		else
		{
			temp[tempIndex++] = input[j++];
		}
	}


	// 남은 인덱스 병합하기
	while (i <= half)
	{
		temp[tempIndex++] = input[i++];
	}

	while (j <= end)
	{
		temp[tempIndex++] = input[j++];
	}

	tempIndex = 0;
	// 기존 배열에 복사하기
	for (int i = start; i <= end; ++i)
	{
		input[i] = temp[tempIndex++];
	}


}

void MergeSort(int input[], int start, int end, int temp[])
{
	if (start == end)
	{
		return;
	}

	int half = (start + end) / 2;

	MergeSort(input, start, half, temp);
	MergeSort(input, half + 1, end, temp);
	Merge(input, start, half, end, temp);
}

int main()
{
	const int size = 6;
	int array[size]{ 8,7,2,3,1, 10 };
	int temp[100]{};


	//InsertionSort(array, size);

	MergeSort(array, 0, 5, temp);

	PrintArray(array, size);

}