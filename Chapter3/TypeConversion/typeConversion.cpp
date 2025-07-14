#include <iostream>




int main()
{
	// 4 바이트에서 1바이트로 축소 변환이 일어나는 경우, 값이 잘려나갈 수 밖에 없다 -> 에러의 주범이다.
	int myInt = 1024;
	char myChar = myInt;

	std::cout << "int : " << myInt << " , " << "char : " << myChar << std::endl;

	// 프로그래머가 직접 명시적 형변환 (Type Cast)를 해줘야 함
	// 다만 큰 형식에서 작은 형식으로 변환하면 저장 공간 크기 이슈로 값이 잘려나감
	// 명시적으로 표기해도 불가능한 캐스팅도 있음


	int myIntger = 1000;
	unsigned char myCharacter = myIntger;

	std::cout << "int : " << myIntger << " , " << "char : " << int(myCharacter) << std::endl;
	// 출력시 1000과 232가 나올 것이다.
	// 1000 = 0011 1110 1000
	//  232 =      1110 1000
	//  unsigned char는 8bit 표현 범위를 가지므로 8자리만 저장할 수 있음, 그렇기에 오른쪽 8개 비트만 저장된 것.



}