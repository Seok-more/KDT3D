#pragma once



class Player
{
public:
	Player();
	Player(int hp);

	virtual ~Player();
	
	// ������ ����ϴ� �Լ��Դϴ�.
	// �߰� ������ �ִٸ� override�ؼ� ����ϼ���~
	virtual void PrintInfo();

	virtual void AddHp(int value);
	bool IsDead();

	int GetAttackDamage();

	void OnDamaged(Player* attacker);

public:

	int _hp;
	int _maxHp;
	int _attack;
};

