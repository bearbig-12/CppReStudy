// 자주 사용되는 타입들

/*
	리터럴 : 변수에 대입하는 변하지 않는 데이터

	int(integer - 정수) 크기 - 4 bytes
	리터럴 : -1,0,1,2,3 ... -2,147,483,648 ~ 2,147,483,648 (대략 20억 정도)

	unsigned int (부호 없는 정수) 크기 - 4 bytes
	리터럴 : 1,2,3 ... 부호가 없기 때문에(1bit) 저장할 수 있는 공간도 2배
	0 ~ 4,294,967,295 (대충 40억)

	bool (boolean - 불리언) 크기 - 1 byte
	리터럴 : true, false 참, 거짓 
	ex) bool mFact = true;

	float (floating-point - 부동 소수점) - 4 bytes
	리터럴 : 0.1f, 0.2f... (리터럴 뒤에 f를 붙인다.) 소수 방식
	double이 정확도가 더 높지만 게임에서는 속도가 중요하기 때문에 float를 사용

	double (double precision floating-point - 배정밀도 부동 소수점) - 8 bytes
	리터럴 : 0.1,0,2.... 정밀도가 2배이기에 float보다 더 많은 표현 가능 대신 크기도 2배

	char (character - 문자) - 1 byte
	리터럴 : 'a','b','c'... 문자는 작은 따옴표('')로 둘러싼다 
	내부적으로 숫자 -128~127까지 이고 자세한건 ASCII로..
	
	추가)

	void (아무런 값이 없다) - ? byte

	short (short int) - 2 bytes
	int의 절반이라고 생각하면 된다.

	long (long int) - 4 bytes
	예전엔 int의 2배였지만 지금은 동일

	long long (long long int) - 8 bytes
	long int의 2배이다
	
*/