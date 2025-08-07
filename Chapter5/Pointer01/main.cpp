#include <iostream>

int main()
{
	int a{ 1 };
	int b{ 2 };
	int* p = &a;


	std::cout << &a << " : " << a << std::endl;
	std::cout << &b << " : " << b << std::endl;
	std::cout << p << " : " << *p << std::endl;

	std::cout << p + 1 << std::endl;	// p = p + sizeof(int) * 1
	std::cout << p + 2 << std::endl;	// p = p + sizeof(int) * 2

	//역참조를 하기 위해서는 타입이 중요하다. void 포인터는 타입이 없으므로 누구나 가르킬 수 있지만 역참조가 불가능하다.
	int n = 10;
	char c = 'a';
	void* v;

	v = &n;
	v = &c;

	//std::cout << *v; <- 불가		// 당연하게도 v+1 과 같은 포인터 연산도 안된다

	//역참조를 하기 위해서는 아래와 같은 절차가 필요하다
	std::cout << *(char*)v << std::endl;



	int num{ 1025 };
	int* pa = &num;

	char* p0 = (char*)pa;

	for (int i = 0; i < 4; ++i)
	{
		std::cout << (void*)p0 << " : " << (int)*p0 << std::endl;
		p0++;
	}


}