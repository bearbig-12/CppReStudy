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

	for (int i = 0; i <= end; ++i)
	{
		std::cout << input[i] << std::endl;
	}

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



void Merge2(int array[], int  start, int half, int end, int temp[])
{
	int left = start;
	int right = half+1;
	int tempIndex = 0;

	while (left <= start && right <= end)
	{
		if (array[left] < array[right])
		{
			temp[tempIndex++] = array[left++];
		}
		else
		{
			temp[tempIndex++] = array[right++];
		}
	}

	// 남은 인덱스 병합하기
	while (left <= half)
	{
		temp[tempIndex++] = array[left++];
	}

	while (right <= end)
	{
		temp[tempIndex++] = array[right++];
	}

	tempIndex = 0;
	// 기존 배열에 복사하기
	for (int i = start; i <= end; ++i)
	{
		array[i] = temp[tempIndex++];
	}

}


void MergetSort2(int array[], int start,  int end, int temp[])
{

	if (start == end)
	{
		return;
	}
	int half = (start + end + 1) / 2;

	MergetSort2(array, start, half, temp);
	MergetSort2(array, half+1, end, temp);
	Merge2(array, start, half, end, temp);
}



void QuickSort(int input[], int left, int right)
{
	int pl = left;
	int pr = right;
	int pivot = input[(left + right) / 2];

	do
	{
		while (input[pl] < pivot)
		{
			pl++;
		}
		while (input[pr] > pivot)
		{
			pr--;
		}
		if (pl <= pr)
		{
			Swap(input[pr], input[pl]);
			pl++;
			pr--;
		}
	} while (pl <= pr);

	if (left < pr)
	{
		QuickSort(input, left, pr);
	}
	if (pl < right)
	{
		QuickSort(input, pl, right);
	}

}

void QuickSort2(int input[], int left, int right)
{
	int pl = left;
	int pr = right;
	int pivot = input[(left + right) / 2];

	do
	{
		while (input[pl] < pivot)
		{
			pl++;
		}
		while (input[pr] > pivot)
		{
			pr--;
		}
		if (pl <= pr)
		{
			Swap(input[pl], input[pr]);
			pl++;
			pr--;
		}

	} while (pl <= pr);

	if (left < pr)
	{
		QuickSort2(input, left, pr);
	}
	if (pl < right)
	{
		QuickSort2(input, pl, right);
	}
}




int main()
{
	const int size = 5;
	int array[size]{ 8,7,2,3,1};
	int temp[100]{};


	//InsertionSort(array, size);

	//MergeSort(array, 0, 4, temp);

	QuickSort2(array, 0, size - 1);

	PrintArray(array, size);

}