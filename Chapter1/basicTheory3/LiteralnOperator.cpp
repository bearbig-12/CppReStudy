#include <iostream>
// Liter - ���ͷ�
/*
	���� �ƴ� ���ڵ�

	bool - �Ҹ� - ���� - true or false
	int	 - ���� - ���� - 100,200,...
	unsigned int - ���� - U,u - 100u, 200u
	long int - ���� - L,l - 100l,200l
	unsinged long - ���� - UL, ul - 100UL, 200UL
	float - �Ǽ� - f,F - 100.0f
	doule - �Ǽ� - ���� - 200.0
	char - ���� - ���� - 'a'
	std::string - �ƽ�Ű ���ڿ� - ���� - "aa"
*/

// Escape Sequence - ���� ����
/*
	\' - ���� ����ǥ
	\" - ū ����ǥ
	\\ - �� ������
	\0 - null ����
	\r - ĳ���� ���� - �� ó������ ����
	\n - �� ��(New Line)
	\t - ���� ��
	\v - ���� ��
*/

// ��� - Constant ������ �ʴ� ��
/*
	const double pi = 3.141592;
	pi = 3.141592653;	// error - ����� ������ ���� �ʴ´�
	double are = w * pi * r;
*/

// ������ 
/*
	myInt	 =		1;
	(�ǿ�),(����),(�ǿ�)
	���� ������ - �ϳ��� �ǿ����ڿ� ���� ���
	���� ������ - �ΰ��� �ǿ����ڿ� ���� ��� -> =�� ����
	���� ������ - ������ �ǿ����ڿ� ���� ���

	��� ������
	+,-,*,/,%(������),+=,-=

	��Ʈ ������
	!(����) - var1 != var2; var2�� ���� �� �����Ͽ� var1�� ����
	&(����) - var1 = var2 & var3; var2��3�� �� ��Ʈ�� ����(AND)���� ����
	|(����) - var1 = var2 | var3; var2��3�� �� ��Ʈ�� ����(OR)���� ����
	^(����) - var1 = var2 ^ var3; var2��3�� �� ��Ʈ�� ��Ÿ�� ����(XOR)���� ����
	>>(����) - var1 = var2 >> var3; var2�� ���� var3 �� ��ŭ ���������� �̵���Ų�� var1�� ����
	<<(����) - var1 = var2 << var3; var2�� ���� var3 �� ��ŭ �������� �̵���Ų�� var1�� ����

	���� ������
	++(����) ++var1; var1 = var1 + 1 �̶� ����
	--(����) --var1; var1 = var1 - 1 �̶� ����
	���� ���� ������, ���� ���� ������
	int var1 = 1;
	int var2;
	var2 = var1++;			,	var2 = ++var1;
	-> var1 = 2, var2 = 1	,	var1 = var2 = 2
	�ڿ� ����� ���� var2�� ���� ������ �� �����ϰ�, �տ� ����� ���� ���� ���� �� �����ϱ� ����

	�� ������ (���� ����)
	==	-	v1 = v2 == v3; v2�� v3�� ������ true �ƴϸ� false�� v1�� ����
	!=	-	v1 = v2 != v3; v2�� v3�� ������ false �ƴϸ� true�� v1�� ����
	<   -   v1 = v2 < v3;  v2�� v3���� ������ true, ũ�� false�� v1�� ����
	<=   -   v1 = v2 <= v3;  v2�� v3���� �۰ų� ������ true, ũ�� false�� v1�� ����

	�� ������
	&& (����) - v2 && v3; v2�� true�̰� v3�� true�̸� true
	|| (����) - v2 || v3; v2�� false�̰� v3�� false�̸� true
	!  (����) - !v1; v1�� true�̸� false, false �̸� true

*/
void OperatorTest()
{
	/*int x{}, y{};
	std::cin >> x >> y;*/

	//std::cout << "�� : " << x / y << std::endl;
	//std::cout << "������ : " << x % y << std::endl;
	int x{ 3 }, y{ 4 };

	// x = 0000 0011
	// y = 0000 0100

	x = x ^ y;	// x = 0000 0111
	y = y ^ x;	// y = 0000 0011
	x = x ^ y;	// x = 0000 0100

	std::cout << "x = " << x << " y = " << y << std::endl;
}

int main()
{
	OperatorTest();
	/*std::cout << "�̸��� ���̸� �Է��ϰ� ���͸� ��������." << '\n';
	std::string mName;
	int mAge;

	std::cin >> mName >> mAge;
	std::cout << "Hello, " << mName << "(" << mAge << ")" << std::endl;*/

	int alpha{ 255 }, red{ 255 }, blue{ 0 }, green{ 0 };
	unsigned int colour;

	colour = alpha << 24 | red << 16 | green << 8 | blue;
	/*colour = alpha << 24;				// 255�� FF �̰� 24��Ʈ(3����Ʈ) ��ŭ �̵� - FF000000
	colour = colour | red << 16;		// 255�� FF �̰� 16��Ʈ(2����Ʈ) ��ŭ - FF0000 
	colour = colour | green << 8;		// 0�� 00 �̰� 8��Ʈ(1����Ʈ) ��ŭ - 0000 
	colour = colour | blue;*/			// 00			
										// �̰� ���� OR ó�� -> FFFF0000
	std::cout << std::hex;
	std::cout << colour << std::endl;

	alpha = colour >> 24;		//
	red = colour >> 16 & 0xFF;	// Alpha�� �����ϱ� ���� ��Ʈ ����ũ
	green = colour >> 8 & 0xFF;
	blue = colour & 0xFF;
	// hex���� rgb��

}