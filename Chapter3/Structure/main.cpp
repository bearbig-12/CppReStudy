#include <iostream>


int main()
{
	struct Ability
	{
		int Hp;
		int Mp;
		int str;
		int magic;
		int defense;
	} ;

	struct Ability warriorAbility;

	warriorAbility.Hp = 1000;
	warriorAbility.Mp = 200;
	warriorAbility.str = 100;
	warriorAbility.magic = 1;
	warriorAbility.defense = 30;

	struct Ability2
	{
		int Hp;
		int Mp;
		int str;
		int magic;
		int defense;
	} warrior, magician, thief;
	// 선언과 동시에 정의도 가능
	magician.Hp = 50;

	typedef struct _status
	{
		int Hp;
		int Mp;
		int str;
		int magic;
		int defense;
	} Status;
	
	Status warriorStatus;

	// 위 방식은 C 방식

	struct CharacterAbility
	{
		int Hp{100};
		int Mp{10};
		int str;
		int magic;
		int defense;
	};

	CharacterAbility thiefAbility;

	std::cout << thiefAbility.Hp << std::endl;

}