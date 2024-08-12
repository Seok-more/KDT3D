#include "Monster.h"
#include <iostream>
#include <format>
using namespace std;

Monster::Monster(int monsterType)
	: Creature(CT_MONSTER), _monsterType(monsterType)
{
	
}

void Monster::PrintInfo()
{
	cout << "-----------------------------------------------" << endl;
	cout << format("몬스터정보/ HP : {}, ATK : {}, DEF : {}", _hp, _attack, _defence);
	cout << "-----------------------------------------------" << endl;
}

Slime::Slime()
	: Monster(MT_Slime)
{
	_hp = 50;
	_attack = 5;
	_defence = 2;
}

Orc::Orc()
	: Monster(MT_Orc)
{
	_hp = 80;
	_attack = 8;
	_defence = 3;
	
}

Skeleton::Skeleton()
	: Monster(MT_Skeleton)
{
	
	_hp = 100;
	_attack = 15;
	_defence = 4;
	
}
