#pragma once

// #include "Monster.h" // *A : ������ Mnoster2�� ����� ���� ��� ������ �ʿ���
// ���漱�� *B : �����ͷ� ����Ű�⸸ �Ҳ��� ���� �ִٴ� ���� ���ִ� ��
class Monster2;

class Player2
{
public:
	void KillMonster();

public:
	int _hp;
	int _attack;

	// Monster2 _target;// Player2�� �����Ʈ? : 8����Ʈ(_hp, _attack) + 12����Ʈ(_monsterID, _hp, _defence) *A
	Monster2* _target2; // Player2�� �����Ʈ? : 8����Ʈ(_hp, _attack) + 8����Ʈ(sizeof(Monster*));		   *B
	//Player2 _target3;	// Player2�� �����Ʈ? : 8����Ʈ(_hp, _attack) + Player�� ����Ʈ(8����Ʈ(_hp, _attack) + Player�� ����Ʈ(...))
	Player2* _target3;	// Player2�� �����Ʈ? : 8����Ʈ(_hp, _attack) + 8����Ʈ(sizeof(Player2*));
};
