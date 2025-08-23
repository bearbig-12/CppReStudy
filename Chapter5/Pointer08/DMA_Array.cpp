#include <iostream>
#include <string>

void FindLongestName();
int main()
{

	//int inputSize{ };
	//
	//std::cout << "배열의 크기는? : ";
	//std::cin >> inputSize;

	//if (inputSize <= 0)
	//{
	//	std::cout << "잘못된 크기 입니다. " << '\n';

	//	return 0;

	//}

	//int* pArray = new int[inputSize];		// 동적 할당 이므로 변수 사용가능
	//for (int i = 0; i < inputSize; ++i)
	//{
	//	pArray[i] = 1;
	//}

	//// 유니폼 초기화도 가능
	//int* pArray2{ new int[inputSize] {} };

	//delete[] pArray;

	//return 0;


	// 동적 배열의 크기를 바꾸는 방법
	int* pNumbers { new int[5] {4, 8, 5, 3, 1} };
	int* pTemp{ new int[3] {} };

	for (int i = 0; i < 3; ++i)
	{
		pTemp[i] = pNumbers[i];
	}

	for (int i = 0; i < 3; ++i)
	{
		std::cout << pTemp[i] << '\n';
	}

	delete[] pNumbers;

	pNumbers = pTemp;

	delete[] pTemp;

	//FindLongestName();


	// 동적 2차원 배열

	int (*array)[3] = new int[2][3]{};	// 이렇게 가능하나 이건 동적이라고 할 수 없다.

	int** array2 = new int* [2];

	for (int i = 0; i < 2; ++i)
	{
		array2[i] = new int[3];
	}

	array2[0][0] = 1;
	array2[0][1] = 2;
	array2[0][2] = 3;

	array2[1][0] = 4;
	array2[1][1] = 5;
	array2[1][2] = 6;

	// 해제는 생성의 역순
	for (int i = 0; i < 2; ++i)
	{
		delete[] array2[i];
		array2[i] = nullptr;
	}

	delete[] array2;
	array2[] = nullptr;




}

void FindLongestName()
{
	int size;
	std::cout << "몇명의 친구가 있나요 ? : ";
	std::cin >> size;

	if (size <= 0)
	{
		std::cout << "잘못된 크기입니다." << '\n';
		return;
	}

	std::string* Friends{ new std::string[size]{} };

	int longest = 0;
	unsigned int maxlen = 0;

	for (int i = 0; i < size; ++i)
	{
		std::cout << "친구 이름을 입력하여 주세요 : " << '\n';
		std::cin >> Friends[i];

		if (Friends[i].size() > maxlen)
		{
			maxlen = Friends[i].size();
			longest = i;
		}
	}

	std::cout << std::endl;
	std::cout << "가장이 이름이 긴 친구는 " << Friends[longest] << " 입니다!" << std::endl;

	

}