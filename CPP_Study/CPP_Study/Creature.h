#pragma once


enum CreatureType
{
	CT_PLAYER,
	CT_MONSTER
};


class Creature
{
public:
	Creature(int creatureType) // �̰͸� ����� �⺻�����ڰ� ����, �׷��� �̿� ���� ���ڸ� �޴� �ڽĻ����ڿ��� �̰� ���ٰ� �ʱ�ȭ ����� ��
		: _creatureType(creatureType)
	{
		
	}

	virtual ~Creature()
	{

	}

public:
	virtual void PrintInfo() = 0; // �߻� �����Լ�, �ڽĵ��� ���� �������ؾ���
	void onAttacked(Creature* attacker);
	bool IsDead() { return _hp <= 0; }


protected:
	int _creatureType = 0;
	int _hp = 0;
	int _attack = 0;
	int _defence = 0;

};

