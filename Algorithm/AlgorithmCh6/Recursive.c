#include <stdio.h>


// ���ȣ��(recursive call)
// Ż�� ������ ��Ȯ�ؾ� ��.
// stack overflow
// �Լ��� �ڱ��ڽ��� �ڽ��� ���ο��� ȣ��


int factorial(int n)
{
	if (n == 1)
	{
		return 1;
	}

	return n * factorial(n - 1);
}
int main()
{
	int ret = factorial(5);
	printf("5! = %d\n", ret);
	
}