#include <iostream>

void FindMaxAndMinScore();
void descendingOder();
int main()
{
	{
		/*

	// 1차원 배열을 아래와 같이 2차원으로 표현
	int myArr[15] = {
		0, 0, 1, 0, 0,			//	0,	1,	2,	3,	4
		0, 1, 1, 1, 0,			//  5,	6,	7,	8,	9,
		1, 1, 1, 1, 1			//	10, 11, 12, 13, 14
	};

	//for (int i = 0; i < 15; ++i)
	//{
	//	std::cout << myArr[i];
	//	if ((i + 1) % 5 == 0)
	//	{
	//		// 위 배열은 5 열로 되어 있으니 5배수 마다 줄바꿈
	//		std::cout << std::endl;
	//	}
	//}


	int myArray2[3][5] = {
		{0, 0, 1, 0, 0 },
		{0, 1, 1, 1, 0 },
		{1, 1, 1, 1, 1 }
	};

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			std::cout << myArray2[i][j];
		}
		std::cout << std::endl;
	}

	*/

	}
	
	//FindMaxAndMinScore();
	descendingOder();


}

void FindMaxAndMinScore()
{
	int scores[5]{ 0 };
	int maxScore{};
	int minScore{};

	for (int i = 0; i < 5; ++i)
	{
		std::cout << "Put the score : ";
		std::cin >> scores[i];
	}

	for (int i = 0; i < 5; ++i)
	{
		if (scores[i] > maxScore)
		{
			maxScore = scores[i];
		}
	}
	minScore = scores[0];
	for (int i = 1; i < 5; ++i)
	{
		if (minScore > scores[i])
		{
			minScore = scores[i];
		}
	}

	std::cout << " Max Score : " << maxScore << " , " << "Min Score : " << minScore << std::endl;

}

void descendingOder()
{
	const int arr_size = 5;
	int scores[arr_size]{ 0 };
	int maxScore{};
	int minScore{};

	for (int i = 0; i < 5; ++i)
	{
		std::cout << "Put the score : ";
		std::cin >> scores[i];
	}
	// 버블 정렬
	//for (int i = 0; i < arr_size; ++i)
	//{
	//	int temp{};
	//	for (int j = 0; j < arr_size-i-1; ++j)
	//	{
	//		if (scores[j] < scores[j+1])
	//		{
	//			temp = scores[j];
	//			scores[j] = scores[j + 1];
	//			scores[j + 1] = temp;
	//		}
	//	}
	//}
	// 선택 정렬
	for (int i = 0; i < arr_size; ++i)
	{
		int temp{};
		for (int j = i+1; j < arr_size; ++j)
		{
			if (scores[i] < scores[j])
			{
				temp = scores[i];
				scores[i] = scores[j];
				scores[j] = temp;
			}
		}
	}

	for (int i = 0; i < arr_size; ++i)
	{
		std::cout << scores[i] << std::endl;
	}
}

