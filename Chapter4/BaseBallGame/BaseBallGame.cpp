#include <iostream>
#include <ctime>
void CreateAnswer(int answer[3]);
void StartGame();
void InputNumber(int player_answer[3]);
bool CheckAnswer(int player_answer[3], int answer[3]);

int main()
{
	// 스트라이크는 자리수가 같고 숫자도 같은 경우 ex) (1, 3, 2) (1, 3, 2)
	// 볼은 숫자는 같지만 자리수가 다른 경우

	

	int answer[3]{};
	int player_answer[3]{};
	bool isOver = true;
	int result;
	CreateAnswer(answer);

	StartGame();

	while (isOver)
	{
		InputNumber(player_answer);
		isOver = CheckAnswer(player_answer, answer);
		
	}

	

}

void StartGame()
{
	std::cout << "Welcome to the Baseball Game !! " << std::endl;
	std::cout << "You need put 3 digits number :" ;
}

void CreateAnswer(int answer[3])
{
	bool isDuplicated = true;
	std::srand(std::time(nullptr));

		while (isDuplicated)
		{
			for (int i = 0; i < 3; ++i)
			{
				int number = rand() % 10;
				answer[i] = number;
			}
			if (answer[0] != answer[1] && answer[1] != answer[2] && answer[0] != answer[2])
			{
				isDuplicated = false;
			}

		}
	
		std::cout << answer[0] << answer[1] << answer[2] << std::endl;
}



void InputNumber(int player_answer[3])
{
	int player_Input;
 	std::cin >> player_Input;

	player_answer[0] = player_Input / 100;
	player_answer[1] = (player_Input / 10) % 10;
	player_answer[2] = player_Input % 10;

}

bool CheckAnswer(int player_answer[3], int answer[3])
{

	int strike{ 0 };
	int ball{ 0 };
	int out{ 0 };

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			if (player_answer[i] == answer[j] && i == j)
			{
				strike++;
			}
			else if (player_answer[i] == answer[j] && i != j)
			{
				ball++;
			}
			
		}
	}
	if (strike == 0 && ball == 0)
	{
		out = 3;
	}
	std::cout << "Strike : " << strike << " , Ball : " << ball << ", Out : " << out << std::endl;
	if(strike == 3)
	return false;
}