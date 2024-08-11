#pragma once

// #include "Monster.h" // *A : 온전한 Mnoster2를 만들기 위해 모든 내용이 필요함
// 전방선언 *B : 포인터로 가리키기만 할꺼라 저게 있다는 선언만 해주는 것
class Monster2;

class Player2
{
public:
	void KillMonster();

public:
	int _hp;
	int _attack;

	// Monster2 _target;// Player2는 몇바이트? : 8바이트(_hp, _attack) + 12바이트(_monsterID, _hp, _defence) *A
	Monster2* _target2; // Player2는 몇바이트? : 8바이트(_hp, _attack) + 8바이트(sizeof(Monster*));		   *B
	//Player2 _target3;	// Player2는 몇바이트? : 8바이트(_hp, _attack) + Player의 바이트(8바이트(_hp, _attack) + Player의 바이트(...))
	Player2* _target3;	// Player2는 몇바이트? : 8바이트(_hp, _attack) + 8바이트(sizeof(Player2*));
};
