#include <iostream>

// 별칭 Alias 와 열거형 Enumeration Type


int main()
{
	{
		// unsinged int와 같은 타입은 타이핑 하기 너무 길다.
		typedef unsigned int uint;
		uint myUnit = 1;
		// 위와 같이 unsigned int 타입을 u_int로 별칭을 부여해서 사용가능

		using uint = unsigned int;
		uint Uint = 1;
		// using 은 C++11에서 추가된 별칭
	}

	{
		enum AttackType
		{
			Physical,
			Magical,
			Fixed
		};
		
		AttackType type = Physical;

		// 열거형은 내부적으로 정수형이다. 즉 Physical은 0, Magical은 1, Fixed는 2이다. 
		// 열거형은 명시적 형변환으로 정수로 변환도 가능하다. 반대로 정수에서 열거형으로 변환도 가능
		// 중요) 이러한 열거형은 상수이다.

		switch (type)
		{
		case Physical:
			std::cout << "물리형 공격 입니다." << std::endl;
			break;
		case Magical:
			std::cout << "마법형 공격 입니다." << std::endl;
			break;
		case Fixed:
			std::cout << "고정데미지 공격 입니다." << std::endl;
			break;
		default:
			break;
		}
	}


}