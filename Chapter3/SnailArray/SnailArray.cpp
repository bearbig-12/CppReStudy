#include <iostream>

int snailArray[1000][1000]{ 0 };


int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);


	int size = 0;
	std::cin >> size;

	int count = 0; // 0 = 열 증가(col +), 1 = 행 증가(row +), 2 = 열 감소(col -), 3 = 행 감소(row -)
	int Cycle = 0;
	int value = size*size;
	int row = 0;
	int col = 0;

	while (value > 0)
	{
		if (value == 1)
		{
			snailArray[row][col++] = value;
			break;
		}
		
		if (count == 0)
		{
			for (int i = 0; i < size - 1 - 2 * Cycle; ++i)
			{
				
				snailArray[row][col++] = value;
				--value;
			}
		}

		else if (count == 1)
		{
			for (int i = 0; i < size - 1 - 2 * Cycle; ++i)
			{
				snailArray[row++][col] = value;
				--value;

			}
		}
		else if (count == 2)
		{
			for (int i = 0; i < size - 1 - 2 * Cycle; ++i)
			{
				snailArray[row][col--] = value;
				--value;


			}	

		}
		else
		{
			for (int i = 0; i < size - 1 - 2 * Cycle; ++i)
			{
				snailArray[row--][col] = value;
				--value;


			}
		}
		
		++count;
		// 한바퀴 돌았다
		if (count == 4)
		{
			count = 0;
			Cycle++;
			row++;
			col++;

		}
	
		
	}
	

	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			std::cout << snailArray[i][j] << "  ";

		}
		std::cout << std::endl;
	}

}