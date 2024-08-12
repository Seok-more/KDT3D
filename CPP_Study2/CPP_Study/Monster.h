#pragma once
#include "Creature.h" // header���Ͽ��� include�� �ּ�ȭ�ϰ� ���漱���� ���������, ��Ӱ����϶��� include�������


enum MonsterType
{
	MT_Slime = 1,
	MT_Orc,
	MT_Skeleton
};


class Monster : public Creature
{
public:
	Monster(int monsterType);

public:
	virtual void PrintInfo();

protected:
	int _monsterType;

};

class Slime : public Monster
{
public:
	Slime();
};

class Orc : public Monster
{
public:
	Orc();
};


class Skeleton : public Monster
{
public:
	Skeleton();
};


