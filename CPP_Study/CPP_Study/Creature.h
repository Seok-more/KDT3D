#pragma once


enum CreatureType
{
	CT_PLAYER,
	CT_MONSTER
};


class Creature
{
public:
	Creature(int creatureType) // 이것만 만들면 기본생성자가 없어, 그래서 이와 같은 인자를 받는 자식생성자에서 이걸 쓴다고 초기화 해줘야 해
		: _creatureType(creatureType)
	{
		
	}

	virtual ~Creature()
	{

	}

public:
	virtual void PrintInfo() = 0; // 추상 가상함수, 자식들이 각각 재정의해야함
	void onAttacked(Creature* attacker);
	bool IsDead() { return _hp <= 0; }


protected:
	int _creatureType = 0;
	int _hp = 0;
	int _attack = 0;
	int _defence = 0;

};

