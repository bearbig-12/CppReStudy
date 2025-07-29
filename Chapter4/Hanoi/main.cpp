#include <iostream>
#include "Hanoi.h"
#include <string>
#include <cmath>

int main()
{
	int n = UserInput();

	// 첫째 줄에 첫 번째 장대에 쌓인 원판의 개수 N (1 ≤ N ≤ 100)이 주어진다.
	// 첫째 줄에 옮긴 횟수 K를 출력한다. N이 20 이하인 입력에 대해서는 두 번째 줄부터 수행 과정을 출력한다.
	// 두 번째 줄부터 K개의 줄에 걸쳐 두 정수 A B를 빈칸을 사이에 두고 출력하는데, 이는 A번째 탑의 가장 위에 있는 원판을 B번째 탑의 가장 위로 옮긴다는 뜻이다.N이 20보다 큰 경우에는 과정은 출력할 필요가 없다.
	// N이20이면 

	// 하노이 탑의 최소 이동 횟수인 2 ^ n - 1을 출력하려는 목적임 (1 ≤ N ≤ 100) 이므로 2^100을 int나 double에 담을 수가 없음

	std::string s = std::to_string(pow(2, n));
	int finddot = s.find('.');
	s = s.substr(0, finddot);
	s[s.length() - 1] -= 1;
	std::cout << s << '\n';
	
	Hanoi(n, 'A', 'B', 'C');
}