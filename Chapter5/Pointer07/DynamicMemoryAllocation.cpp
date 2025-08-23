#include <iostream>


int main()
{
	// C 스타일
	{
		int* buffer1;
		int* buffer2;

		// contiguous allocation : 배열과 같이 연속된 메모리 공간에 변수를 할당한다는 의미
		buffer1 = (int*)calloc(100, sizeof(int));

		// memory allocation : 지정한 크기 만큼 메모리를 할당한다는 의미
		buffer2 = (int*)malloc(100 * sizeof(int));

		// 성공적으로 할당 되었는지 체크
		if (buffer1 && buffer2)
		{
			//std::cout << buffer1[2] << ", " << *buffer2 << std::endl;

			free(buffer1);
			free(buffer2);
		}
	}

	// C++


	int* pNew{};
	// new 연산자는 주어진 타입으로 메모리 공간을 할당한 후 돌려주는 단항 연산자 이다.
	pNew = new int;
	*pNew = 4;
	// 주어진 메모리를 해제하는 연산자 이다.
	delete pNew;

	struct Student
	{
		int number;
		char name[16];
	};

	Student* pStudent = new Student;

	pStudent->number = 1;
	strcpy_s(pStudent->name, sizeof(pStudent->name), "Leo");

	std::cout << pStudent->number << " " << pStudent->name << '\n';

	delete pStudent;

	Student* pArray = new Student[5];

	pArray[0].number = 1;
	strcpy_s(pArray[0].name, sizeof(pArray[0].name), "Jack");

	std::cout << pArray[0].number << " " << pArray[0].name << '\n';

	delete[] pArray;

	// 주의 사항!

	/*
		메모리 누수 : 동적 할당을 사용한 후 꼭 delete를 사용하여 해제 하여야 한다. 그렇지 않으면 메모리가 부족하여 메모리가 부족하여 게임이 느려지거나 할 수 있다.

		new 도 실패가능 : 게임 개발을 하다보면, 메모리가 부족한 경우가 상당히 많다. 이러한 경우 윈도우 뻗지 않도록 항상 예외처리를 해줘야한다.
		if(buffer1)
		{

		}
		
		해제한 메모리 (Dangling Pointer) : 이미 해제한 메모리를 다시 해제하려고 시도하면 심각한 문제가 발생할 수 있다. 
		따라서 메모리를 해제한 후에는 최기값 nullptr로 할당해 두는 것이 좋다.
		delete allocated;
		allocated = nullptr;
	
	*/


}