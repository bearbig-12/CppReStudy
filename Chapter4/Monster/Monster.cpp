#include <iostream>
#include <string>

enum MonsterType
{
	Wolf,
	Demon,
	Slime
};

struct Monster
{
	MonsterType Type;
	std::string Name;
	int HP;
};

std::string GetMonsterType(MonsterType type);
void PrintMonster(Monster monster);


int main()
{
	Monster wolf;
	Monster demon {Demon, "주니어 발록", 1000}; 

	wolf.Type = Wolf;
	wolf.Name = "늑늑대대";
	wolf.HP = 50;

	PrintMonster(wolf);
	PrintMonster(demon);



}

std::string GetMonsterType(MonsterType type)
{
	std::string monsterType;
	switch (type)
	{
	case Wolf:
		monsterType = "Wolf";
		break;
	case Demon:
		monsterType = "Demon";
		break;
	case Slime:
		monsterType = "Slime";
		break;
	default:
		monsterType = "UnKnown";
		break;
	}
	return monsterType;
}

void PrintMonster(Monster monster)
{
	std::cout << "Type : " << GetMonsterType(monster.Type) << " , HP : " << monster.HP << " , Name : " << monster.Name << std::endl;
}