#pragma once
#include "Creature.h" // header파일에는 include를 최소화하고 전방선언을 써야하지만, 상속관계일때는 include해줘야지


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


