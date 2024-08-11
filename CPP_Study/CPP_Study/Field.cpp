#include "Field.h"
#include <stdlib.h>
#include "Monster.h"
#include "Player.h"

Field::Field()
	: _monster(nullptr)
{

}

Field::~Field()
{
	if (_monster)
	{
		delete _monster;
		_monster = nullptr;
	}
}

void Field::Update(Player* player)
{
	if (_monster == nullptr)
	{
		CreateMonster();
	}

	StartBattle(player);

}

void Field::CreateMonster()
{
	int randValue = 1 + rand() % 3;

	switch (randValue)
	{
	case 1:
		_monster = new Slime();
		break;
	case 2:
		_monster = new Orc();
		break;
	case 3:
		_monster = new Skeleton();
		break;
	default:
		break;
	}

}

void Field::StartBattle(Player* player)
{
	while (1)
	{
		player->PrintInfo();
		_monster->PrintInfo();

		// 플레이어 -> 몬스터 공격
		_monster->onAttacked(player);

		if (_monster->IsDead())
		{
			_monster->PrintInfo();
			delete _monster;
			_monster = nullptr;
			break;
		}

		// 몬스터 -> 플레이어 공격
		player->onAttacked(_monster);

		if (player->IsDead())
		{
			player->PrintInfo();
			break;
		}
	}
}
