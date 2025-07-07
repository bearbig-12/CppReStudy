#include <iostream>

void MakeAbsoluteNum();
void OddEven();
void ExchangeRate();
void SubwayCalculator();
void ExchangeRateAddvanced();

int main()
{
	ExchangeRateAddvanced();

	//MakeAbsoluteNum();
	//OddEven();
	//ExchangeRate();
	//SubwayCalculator();

}

void MakeAbsoluteNum()
{
	int input;
	std::cout << " ���ڸ� �Է��ϼ��� : ";
	std::cin >> input;
	std::cout << std::endl;

	int absoluteNum;
	if (input < 0)
	{
		absoluteNum = -input;
	}
	else {
		absoluteNum = input;
	}

	std::cout << "���밪 : " << absoluteNum << std::endl;
}

void OddEven()
{
	int number{};
	std::cout << "���ڸ� �Է��ϼ��� : ";
	std::cin >> number;
	std::cout << std::endl;

	std::cout << "�Է� �Ͻ� ���ڴ� ";
	if (number % 2 == 0) {
		std::cout << "¦�� �Դϴ�.";
	}
	else {
		std::cout << "Ȧ�� �Դϴ�.";
	}
}

void ExchangeRate()
{
	float money;
	char type;

	const float WonToUSD = 0.000731;
	const float WonToYEN = 0.1061;

	std::cout << "�����Ͻ� ��ȭ�� �Է��Ͽ� �ּ��� : ";
	std::cin >> money;
	std::cout << std::endl;

	std::cout << "��ȯ�ϰ� ���� ��ȭ Ÿ���� �Է��Ͽ� �ּ���(U �޷�, Y ��ȭ : ";
	std::cin >> type;

	if (type == 'Y' || type == 'y')
	{
		money = money * WonToYEN;
		std::cout << "�����Ͻ� ��ȭ�� ��ȭ�� ȯ���� ��� : " << money << "�Դϴ�.";
	}
	else if (type == 'U' || type == 'u')
	{
		money = money * WonToUSD;
		std::cout << "�����Ͻ� ��ȭ�� �޷��� ȯ���� ��� : " << money << "�Դϴ�.";
	}
	else {
		std::cout << "��ȿ���� ���� Ÿ�� �Դϴ�." << std::endl;
	}
}

void SubwayCalculator()
{
	// ����ī��, ����, �Ÿ��� ���� ����ö ��� ����
	int age;
	int paymentMethod;
	int distance;

	std::cout << "���̸� �Է��ϼ��� : ";
	std::cin >> age;

	std::cout << "���� ������ �Է��ϼ��� (����ī�� 0, ���� 1) : ";
	std::cin >> paymentMethod;

	std::cout << "�Ÿ��� �Է��ϼ��� : ";
	std::cin >> distance;

	if (paymentMethod == 0)	// ����ī��
	{
		if (age < 6)
		{
			std::cout << "���� �Դϴ�.";
			return;
		}
		if (distance < 10)
		{
			if (age >= 6 && age < 13)	// ���
			{
				std::cout << "350�� �Դϴ�." << std::endl;
			}
			else if (age >= 13 && age <= 18) // û�ҳ�
			{
				std::cout << "720�� �Դϴ�." << std::endl;
			}
			else // ����
			{
				std::cout << "1250�� �Դϴ�." << std::endl;
			}
		}
		else if (distance < 15)
		{
			if (age >= 6 && age < 13)	// ���
			{
				std::cout << "450�� �Դϴ�." << std::endl;
			}
			else if (age >= 13 && age <= 18) // û�ҳ�
			{
				std::cout << "800�� �Դϴ�." << std::endl;
			}
			else // ����
			{
				std::cout << "1350�� �Դϴ�." << std::endl;
			}
		}
		else if(distance < 20)
		{
			if (age >= 6 && age < 13)	// ���
			{
				std::cout << "550�� �Դϴ�." << std::endl;
			}
			else if (age >= 13 && age <= 18) // û�ҳ�
			{
				std::cout << "880�� �Դϴ�." << std::endl;
			}
			else // ����
			{
				std::cout << "1450�� �Դϴ�." << std::endl;
			}
		}
		else
		{
			std::cout << "�߸��� �Ÿ��Դϴ�." << std::endl;
		}
	}
	else if (paymentMethod == 1) // ����
	{
		if (age < 6)
		{
			std::cout << "���� �Դϴ�.";
			return;
		}
		if (distance < 10)
		{
			if (age >= 6 && age < 13)	// ���
			{
				std::cout << "550�� �Դϴ�." << std::endl;
			}
			else // ���� �� û�ҳ�
			{
				std::cout << "1350�� �Դϴ�." << std::endl;
			}
		}
		else if (distance < 15)
		{
			if (age >= 6 && age < 13)	// ���
			{
				std::cout << "450�� �Դϴ�." << std::endl;
			}
			else // ���� �� û�ҳ�
			{
				std::cout << "1450�� �Դϴ�." << std::endl;
			}
		}
		else if(distance < 20)
		{
			if (age >= 6 && age < 13)	// ���
			{
				std::cout << "550�� �Դϴ�." << std::endl;
			}
			else // ���� �� û�ҳ�
			{
				std::cout << "1550�� �Դϴ�." << std::endl;
			}
		}
		else
		{
			std::cout << "�߸��� �Ÿ� �Դϴ�.";
		}
	}
	else
	{
		std::cout << "�߸��� ���� ���� �Դϴ�.";
	}
}

void ExchangeRateAddvanced()
{
	float money;
	char type;

	const float USDToWON = 1369.83;
	const float YenToWon = 9.42;
	const float EuroToWon = 1606.52;
	const float PoundToWon = 1860.53;

	std::cout << "�����Ͻ� ��ȭ�� �Է��Ͽ� �ּ��� : ";
	std::cin >> money;
	std::cout << std::endl;

	std::cout << "��ȯ�ϰ� ���� ��ȭ Ÿ���� �Է��Ͽ� �ּ���(U �޷�, Y ��ȭ, E ����, F �Ŀ��) : ";
	std::cin >> type;
	// type = std::toupper(type); // �ҹ��ڸ� �빮�ڷ� ��ȯ ��� 

	switch (type)
	{
		// �ҹ��� �빮�� �Է��� ���� �ޱ⸦ ���Ѵٸ� �Ʒ��� ����
		// �빮�ڸ� �ޱ⸦ ���Ѵٸ� �Է¹޴� �ܰ迡�� �ҹ��� �Է½� �빮�ڷ� ��ȯ
		case 'U':
		case 'u':
		{
			std::cout << money << "USD�� ";
			std::cout << money * USDToWON << "�� �Դϴ�." << std::endl;
			break;
		}
		case 'Y':
		case 'y':
		{
			std::cout << money << "JPY�� ";
			std::cout << money * YenToWon << "�� �Դϴ�." << std::endl;
			break;
		}
		case 'E':
		case 'e':
		{
			std::cout << money << "EUR�� ";
			std::cout << money * EuroToWon << "�� �Դϴ�." << std::endl;
			break;
		}
		case 'P':
		case 'p':
		{
			std::cout << money << "GBP�� ";
			std::cout << money * PoundToWon << "�� �Դϴ�." << std::endl;
			break;
		}
	default:
		std::cout << "�������� ���� ȭ����� �Դϴ�." << std::endl;
		break;
	}
}