#include <iostream>
#include <string>

void FindLongestName();
int main()
{

	//int inputSize{ };
	//
	//std::cout << "�迭�� ũ���? : ";
	//std::cin >> inputSize;

	//if (inputSize <= 0)
	//{
	//	std::cout << "�߸��� ũ�� �Դϴ�. " << '\n';

	//	return 0;

	//}

	//int* pArray = new int[inputSize];		// ���� �Ҵ� �̹Ƿ� ���� ��밡��
	//for (int i = 0; i < inputSize; ++i)
	//{
	//	pArray[i] = 1;
	//}

	//// ������ �ʱ�ȭ�� ����
	//int* pArray2{ new int[inputSize] {} };

	//delete[] pArray;

	//return 0;


	// ���� �迭�� ũ�⸦ �ٲٴ� ���
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


	// ���� 2���� �迭

	int (*array)[3] = new int[2][3]{};	// �̷��� �����ϳ� �̰� �����̶�� �� �� ����.

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

	// ������ ������ ����
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
	std::cout << "����� ģ���� �ֳ��� ? : ";
	std::cin >> size;

	if (size <= 0)
	{
		std::cout << "�߸��� ũ���Դϴ�." << '\n';
		return;
	}

	std::string* Friends{ new std::string[size]{} };

	int longest = 0;
	unsigned int maxlen = 0;

	for (int i = 0; i < size; ++i)
	{
		std::cout << "ģ�� �̸��� �Է��Ͽ� �ּ��� : " << '\n';
		std::cin >> Friends[i];

		if (Friends[i].size() > maxlen)
		{
			maxlen = Friends[i].size();
			longest = i;
		}
	}

	std::cout << std::endl;
	std::cout << "������ �̸��� �� ģ���� " << Friends[longest] << " �Դϴ�!" << std::endl;

	

}