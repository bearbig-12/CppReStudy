#include <iostream>


int main()
{
	{
		// 배열을 선언할 때 크기는 상수만 가능하다.
		int scores[10]{ };
		//int scores2[10]{100, 200, 50, 250, 330, 220, 800, 10000, 200}; // 유니폼 초기화도 가능하다
		int total_Score = 0;

		//int array_Size = 5;
		//int scores2[array_Size];		<- 배열의 크기가 상수가 아니므로 에러난다

		for (int i = 0; i < 10; ++i)
		{
			std::cout << "Input Score : ";
			std::cin >> scores[i];

		}

		for (int i = 0; i < 10; ++i)
		{
			total_Score += scores[i];
		}

		std::cout << "Score Average : " << total_Score / 10 << std::endl;
	}

	{
		// 구조체도 배열로 가능하다
		struct Point2D
		{
			double x;
			double y;
		};

		Point2D pts[3];
		pts[0].x = 1;
		pts[0].y = 2;

	}


}