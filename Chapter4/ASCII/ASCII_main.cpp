#include <iostream>

void StartScreen();
char GetWord();
void PrintASCIITable(char start, char end);

int main()
{
	std::cout << "Please Type the Start word and End word : " << std::endl;


	char start{ GetWord() };
	char end{ GetWord() };

	StartScreen();


	PrintASCIITable(start, end);


}

void StartScreen()
{
	

	std::cout << std::endl;
	std::cout << "----------ASCII TABLE----------" << std::endl;
	std::cout << std::endl;
}

char GetWord()
{
	char word;
	std::cin >> word;
	return word;
}

void PrintASCIITable(char start, char end)
{
	int temp1 = (int)start;
	int temp2 = (int)end;


	for (int i = temp1; i <= temp2; ++i)
	{
		std::cout << i << '\t' << (char)i << std::endl;
	}

}