#include <stdio.h>
#include <string.h>

// ����ü
// ���� �������ִ� Data�� �ϳ��� ������ ����մϴ�.

typedef struct tagCar
{
	// ����� ���� ����Ÿ Ÿ��
	char modelName[40]; // ����ü ���
	int maxSpeed;
	int wheelCount;

	struct tagCar* Next;
} Car;

int main() {

	struct tagCar car = { "QM6", 150, 4, NULL };


	Car car1 = { "BMW", 200, 4, NULL };
	Car car2 = { "���׽ý�", 200, 4, NULL };
	Car car3 = { "����", 150, 6, NULL };
	Car car4 = { "�������", 200, 2, NULL };

	car1.Next = &car2;
	car2.Next = &car3;
	car3.Next = &car4;

	printf("car4.name = %s\n", car1.Next->Next->Next->modelName);
	printf("car4.maxSpeed = %d\n", car1.Next->Next->Next->maxSpeed);
	printf("car4.wheelCount = %d\n", car1.Next->Next->Next->wheelCount);
	printf("\n\n");
	// car1���� car3�� �����ؼ�
	// name ������� EV6 , MaxSpeed : 200, Wheelcount : 4 �� ���� �����ϰ�
	// Car3�� ����� ���� ����غ�����..

	strcpy_s(car1.Next->Next->modelName, sizeof(car1.Next->Next->modelName), "EV6");
	car1.Next->Next->maxSpeed = 200;
	car1.Next->Next->wheelCount = 4;

	printf("car3 name = %s\n", car1.Next->Next->modelName);
	printf("car3 maxSpeed = %d\n", car1.Next->Next->maxSpeed);
	printf("car3 wheelCount = %d\n", car1.Next->Next->wheelCount);

	return 0;
}