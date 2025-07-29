#include "Hanoi.h"

int UserInput()
{
	int n;
	std::cout << "<하노이 탑> " << std::endl;
	std::cout << "1. 한번에 하나의 원판만 옮길 수 있다." << std::endl;
	std::cout << "2. 큰 원판이 작은 원판 위에 있어서는 안된다." << std::endl;
	std::cout << "---------------------------------------------------------" << std::endl;
	std::cout << "원판의 갯수를 입력하세요.";
	std::cin >> n;
	return n;

}

void Move(char from, char to)
{
	std::cout << from << "에서 " << to << "으로 이동하였습니다." << std::endl;
}

void Hanoi(int n, char from, char temp, char to)
{
	// base case
	if (n == 1)
	{
		Move(from, to);
	}
	else 
	{
		Hanoi(n - 1, from, to, temp); // A->B , n-1개 원판 덩어리를 첫번째(A) 에서 두번째(B)으로 옮긴다 → 따라서 세번째 기둥(C)이 보조 기둥으로 활용된다 
		Move(from, to); // A->C , n번째 원판(가장 큰 원판)을 첫번째 기둥(A)에서 세번째 기둥(C)으로 옮긴다
		Hanoi(n - 1, temp, from, to); // B->C , n-1개 원판 덩어리를 두번째(B) 에서 세번째(C)으로 옮긴다 → 따라서 첫번째 기둥(A)이 보조 기둥으로 활용된다 
	}


}
