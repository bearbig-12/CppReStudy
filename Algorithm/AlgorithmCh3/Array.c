#include <stdio.h>
void SetArray(int*, int);
void PrintArray(int*, int);

int main()
{
	int array[100];
	// �迭�� ĭ�� �ּҰ��̸�, Int�� �迭�̹Ƿ� �� ĭ�� 4byte�̴�.
	// �� array�� ������ Ÿ���� int* �̴�.
	// �迭���� �ּһ�� �̹Ƿ� array = 10; �� ���� ���� ���� �� ����.
	SetArray(array, 100);

	PrintArray(array, 100);


}

void SetArray(int* parray, int size) {
	for (int i = 0; i < size; i++) {
		parray[i] = i;
	}
}


void PrintArray(int* parray, int size) {
	for (int i = 0; i < size; i++) {
		printf("parray[%d] = %d\n", i, parray[i]);
	}
}