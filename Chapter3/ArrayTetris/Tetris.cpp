#include <iostream>



int main()
{
	enum Option
	{
		Left,
		Right,
		Stop
	};

	int baseBlock[3][3] = {
		{0, 1, 0},
		{0, 1, 1},
		{0, 1, 0}
	};

	int option;
	bool isStop = false;

	int rotatedBlock[3][3] = {};



	/*{
		0,0, 0,1, 0,2				2,0, 1,0, 0,0						
		1,0, 1,1, 1,2		>		2,1, 1,1, 0,1		오른쪽  
		2,0, 2,1, 2,2				2,2, 1,2, 0,2


		(-1, 1), (0,-1), (1, 1)				(-1, -1), (-1,0), (-1,  1)
		(-1, 0), (0, 0), (1, 0)		>		( 0, -1), (0, 0), ( 0, -1)		xy 좌표계로 표현
		(-1,-1), (0,-1), (1,-1)				(1,  -1), (1, 0), ( 1,  1)

								
	}*/

	// 오른쪽으로 90도 돌리게 될 경우, 기존의 행이 열이 된다. 기존의 위가 오른쪽으로 간다.
	// 위가 오른쪽으로 간다는 의미는, 원래 위쪽 줄 행 (0,0), (0,1), (0,2) 가 오른쪽 열로 이동 한다
	// 즉	(0, 0) → (0, 2)
	//		(0, 1) → (1, 2)
	// 		(0, 2) → (2, 2)
	// 위 식에서 규칙은 -> 회전 후 열 번호 = N - 1 - i (N은 배열의 크기 i 원래 행 번호)		
	// 오른쪽 →(i, j) →(j, N−1−i)	행이 열로 가고, 행 번호는 반대로 뒤집혀 열이 됨			// rotatedBlock[j][3 - 1 - i] = baseBlock[i][j];
	//  왼 쪽 ←(i, j) →(N−1−j, i)	열이 행으로 가고, 열 번호는 반대로 뒤집혀 행이 됨		// rotatedBlock[3 - 1 - j][i] = baseBlock[i][j];

	

	while (!isStop)
	{
		for (int i = 0; i < 3; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				std::cout << baseBlock[i][j];
			}
			std::cout << std::endl;
		}
		std::cout << "Please choose option [Right - 0, Left - 1, Quit - 2] : ";
		std::cin >> option;

		switch (option)
		{
		case Right:
		{
			for (int i = 0; i < 3; ++i)
			{
				for (int j = 0; j < 3; ++j)
				{
					rotatedBlock[j][3 - 1 - i] = baseBlock[i][j];
				}
			}
			break;
		}

		case Left:
		{
			for (int i = 0; i < 3; ++i)
			{
				for (int j = 0; j < 3; ++j)
				{
					 rotatedBlock[3 - 1 - j][i] = baseBlock[i][j];
				}
			}
			break;
		}
		case Stop:
			isStop = true;
			break;
		}

		for (int i = 0; i < 3; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				baseBlock[i][j] = rotatedBlock[i][j];
			}
		}
	}
}

