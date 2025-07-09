#include <iostream>

void ForLoop();
void ForLoop2();
void ForLoop3();
void Dice();
void UpandDown();
void MakeQuardangle();
void MakeTriangle();

int main()
{
	//MakeTriangle();

}


void ForLoop()
{
	for (int i = 1; i < 6; ++i)
	{
		std::cout << i << std::endl;
	}
}

void ForLoop2()
{
	for (int i = 1; i <= 10; ++i)
	{
		if (i % 2)
		{
			std::cout << i << std::endl;
		}
	}
}

void ForLoop3()
{
	for (int i = 0; i <= 25; ++i)
	{
		std::cout << char('a' + i) << std::endl;
	}
}

void Dice()
{
	for (int i = 1; i <= 6; ++i)
	{
		for (int j = 1; j <= 6; ++j)
		{
			if (i + j == 6)
			{
				std::cout << "i = " << i << " , " << "j = " << j << std::endl;
			}
		}
	}
}

void UpandDown()
{
	unsigned int answer = 9;
	unsigned int input;
	while (1)
	{
		std::cout << "Please type ur answer : ";
		std::cin >> input;
		if (answer == input)
		{
			std::cout << "U GOT IT!! " << std::endl;
			break;
		}
		else if (answer > input)
		{
			std::cout << "The answer is bigger than ur input " << std::endl;

		}
		else
		{
			std::cout << "The answer is smaller than ur input " << std::endl;

		}
	}
}

void MakeQuardangle()
{
	unsigned int width;
	unsigned int height;

	std::cout << "너비를 입력하여 주세요 : ";
	std::cin >> width;
	std::cout << std::endl;
	std::cout << "높이를 입력하여 주세요 : ";
	std::cin >> height;

	for (int i = 0; i < height; ++i)
	{
		for (int j = 0; j < width;  ++j)
		{
			std::cout << '*';
		}
		std::cout << std::endl;
	}
}

void MakeTriangle()
{
/*
        *					
       * *					
      * * *					
     * * * *				
    * * * * *				
*/
	int n = 5; // 피라미드 높이

	for (int i = 0; i < n; ++i) {
		// 공백 출력 (오른쪽 정렬을 위한)
		for (int j = 0; j < n - i; ++j) {
			std::cout << " ";
		}

		// 별 출력 (별 뒤에 공백 포함)
		for (int k = 0; k < i; ++k) {
			std::cout << "* ";
		}

		std::cout << std::endl;
	}
}
