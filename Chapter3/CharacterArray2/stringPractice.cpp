#include <iostream>

void ReversString();
void MakeOne();

int main()
{

	//ReversString();
	MakeOne();
}

void ReversString()
{
	char myString1[100] {};

	std::cout << "Type ur world : ";
	std::cin >> myString1;

	for (int i = sizeof(myString1); i >= 0; --i)
	{
		std::cout << myString1[i];
	}
}

void MakeOne()
{
	char myString1[10]{};
	char myString2[10]{};
	char resultString[20]{};

	std::cout << "Type ur Words : ";
	std::cin >> myString1 >> myString2;
	std::cout << std::endl;


	for (int i = 0; i < 10; ++i)
	{
		if (myString1[i] == '\0')
		{
			break;
		}
		resultString[i] = myString1[i];
	}

	for (int i = 10; i < 20; ++i)
	{
		if (myString2[i] == '\0')
		{
			break;
		}
		resultString[i] = myString2[i - 10];
	}

	for (int i = 0; i < 20; ++i)
	{
		std::cout << resultString[i];
	}

}