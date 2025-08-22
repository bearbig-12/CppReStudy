#include <iostream>


int GetLength(char* pChar)
{
	int count = 0;

	// null 문자가 들어오면 끝
	while (*pChar != '\0')
	{
		count++;
		pChar++;
	}
	return count;
}

int main()
{
	// pc는 문자열을 다루는 포인터 이지만 시작 지점만 존재한다. pc가 문자열을 의미 하려면 어디가 끝인지를 반드시 알아야 한다. 
	// 그렇지 않으면 메모리의 남은 공간도 전부 문자열로 처리하기 때문이다. 그렇기에 null 문자가 필요하다(c[5] = 0;)
	char c[6];
	char* pc;

	c[0] = 'd';
	c[1] = 'o';
	c[2] = 'g';
	c[3] = 'g';
	c[4] = 'y';
	//c[5] = 0;

	std::cout << c << std::endl;

	pc = &c[0];
	std::cout << pc << std::endl;

	char myString[] = "Doggy";
	char* p = myString;

	std::cout << p << std::endl;


	int myInt = 5;
	char myString2[]{ " = is integer value." };

	std::cout << myInt + myString2 << std::endl;
	// 5 is int value가 아닌 ntger value가 출력이 된다. 메모리 상에서는 영문자 하나가 ASCII 코드 표의 값으로 변환되어
	// 한 바이트에 한글자씩 저장이 된다. 5를 더한다는 의미는 5칸(byte)를 건너뛴다는 의미가 되어 버려서 그렇다.

	// 추가로 한글은 기본적으로 메모리상에서 2바이트를 차지한다. 그래서 5 + "는 정수입니다."를 해버릴 경우 "수 입니다"만 출력된다.

	wchar_t myString3[] = { L"는 정수입니다." };
	std::locale myLocale("kor");
	std::wcout.imbue(myLocale);

	std::wcout << myString3 + myInt << std::endl;	// 이렇게 사용하면 5글자를 건너뛰어 "니다." 만 출력된다.
	// 일반 문자와의 구분을 위하여 유니코드 문자는 wchar_t라는 형식을 사용하며, 유니코드 문자는 2바이트로 되어 있다.
	// 일반 문자열 리터럴과 구분을 위하여 유니코드 문자열을 접두어 L로 표기한다.



	char myString4[1000];
	std::cin >> myString4;
	std::cout << GetLength(myString4) << std::endl;
}

