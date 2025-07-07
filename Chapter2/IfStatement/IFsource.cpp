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
	std::cout << " 숫자를 입력하세요 : ";
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

	std::cout << "절대값 : " << absoluteNum << std::endl;
}

void OddEven()
{
	int number{};
	std::cout << "숫자를 입력하세요 : ";
	std::cin >> number;
	std::cout << std::endl;

	std::cout << "입력 하신 숫자는 ";
	if (number % 2 == 0) {
		std::cout << "짝수 입니다.";
	}
	else {
		std::cout << "홀수 입니다.";
	}
}

void ExchangeRate()
{
	float money;
	char type;

	const float WonToUSD = 0.000731;
	const float WonToYEN = 0.1061;

	std::cout << "소유하신 원화를 입력하여 주세요 : ";
	std::cin >> money;
	std::cout << std::endl;

	std::cout << "변환하고 싶은 통화 타입을 입력하여 주세요(U 달러, Y 엔화 : ";
	std::cin >> type;

	if (type == 'Y' || type == 'y')
	{
		money = money * WonToYEN;
		std::cout << "보유하신 원화를 엔화로 환전할 경우 : " << money << "입니다.";
	}
	else if (type == 'U' || type == 'u')
	{
		money = money * WonToUSD;
		std::cout << "보유하신 원화를 달러로 환전할 경우 : " << money << "입니다.";
	}
	else {
		std::cout << "유효하지 않은 타입 입니다." << std::endl;
	}
}

void SubwayCalculator()
{
	// 교통카드, 나이, 거리에 따른 지하철 요금 계산기
	int age;
	int paymentMethod;
	int distance;

	std::cout << "나이를 입력하세요 : ";
	std::cin >> age;

	std::cout << "결제 수단을 입력하세요 (교통카드 0, 현금 1) : ";
	std::cin >> paymentMethod;

	std::cout << "거리를 입력하세요 : ";
	std::cin >> distance;

	if (paymentMethod == 0)	// 교통카드
	{
		if (age < 6)
		{
			std::cout << "무료 입니다.";
			return;
		}
		if (distance < 10)
		{
			if (age >= 6 && age < 13)	// 어린이
			{
				std::cout << "350원 입니다." << std::endl;
			}
			else if (age >= 13 && age <= 18) // 청소년
			{
				std::cout << "720원 입니다." << std::endl;
			}
			else // 으른
			{
				std::cout << "1250원 입니다." << std::endl;
			}
		}
		else if (distance < 15)
		{
			if (age >= 6 && age < 13)	// 어린이
			{
				std::cout << "450원 입니다." << std::endl;
			}
			else if (age >= 13 && age <= 18) // 청소년
			{
				std::cout << "800원 입니다." << std::endl;
			}
			else // 으른
			{
				std::cout << "1350원 입니다." << std::endl;
			}
		}
		else if(distance < 20)
		{
			if (age >= 6 && age < 13)	// 어린이
			{
				std::cout << "550원 입니다." << std::endl;
			}
			else if (age >= 13 && age <= 18) // 청소년
			{
				std::cout << "880원 입니다." << std::endl;
			}
			else // 으른
			{
				std::cout << "1450원 입니다." << std::endl;
			}
		}
		else
		{
			std::cout << "잘못된 거리입니다." << std::endl;
		}
	}
	else if (paymentMethod == 1) // 현금
	{
		if (age < 6)
		{
			std::cout << "무료 입니다.";
			return;
		}
		if (distance < 10)
		{
			if (age >= 6 && age < 13)	// 어린이
			{
				std::cout << "550원 입니다." << std::endl;
			}
			else // 으른 및 청소년
			{
				std::cout << "1350원 입니다." << std::endl;
			}
		}
		else if (distance < 15)
		{
			if (age >= 6 && age < 13)	// 어린이
			{
				std::cout << "450원 입니다." << std::endl;
			}
			else // 으른 및 청소년
			{
				std::cout << "1450원 입니다." << std::endl;
			}
		}
		else if(distance < 20)
		{
			if (age >= 6 && age < 13)	// 어린이
			{
				std::cout << "550원 입니다." << std::endl;
			}
			else // 으른 및 청소년
			{
				std::cout << "1550원 입니다." << std::endl;
			}
		}
		else
		{
			std::cout << "잘못된 거리 입니다.";
		}
	}
	else
	{
		std::cout << "잘못된 결제 수단 입니다.";
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

	std::cout << "소유하신 원화를 입력하여 주세요 : ";
	std::cin >> money;
	std::cout << std::endl;

	std::cout << "변환하고 싶은 통화 타입을 입력하여 주세요(U 달러, Y 엔화, E 유로, F 파운드) : ";
	std::cin >> type;
	// type = std::toupper(type); // 소문자를 대문자로 변환 사용 

	switch (type)
	{
		// 소문자 대문자 입력을 같이 받기를 원한다면 아래와 같이
		// 대문자만 받기를 원한다면 입력받는 단계에서 소문자 입력시 대문자로 변환
		case 'U':
		case 'u':
		{
			std::cout << money << "USD는 ";
			std::cout << money * USDToWON << "원 입니다." << std::endl;
			break;
		}
		case 'Y':
		case 'y':
		{
			std::cout << money << "JPY는 ";
			std::cout << money * YenToWon << "원 입니다." << std::endl;
			break;
		}
		case 'E':
		case 'e':
		{
			std::cout << money << "EUR는 ";
			std::cout << money * EuroToWon << "원 입니다." << std::endl;
			break;
		}
		case 'P':
		case 'p':
		{
			std::cout << money << "GBP는 ";
			std::cout << money * PoundToWon << "원 입니다." << std::endl;
			break;
		}
	default:
		std::cout << "유요하지 않은 화폐단위 입니다." << std::endl;
		break;
	}
}