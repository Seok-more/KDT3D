#include "Player2.h"
#include "Monster2.h"

void Player2::KillMonster()
{
	//		monster2�� ù��°�ּ�, + 4, + 4
	// [ �ּ� ] -> [ [monsterID][hp][defence] ]
	_target2->_hp = 0; // �� .h���� ���漱���ߴµ� �ȵ���?
					   // ->_hp �κ��� ������, ���� �ִٰ� ����, �� ��� ������ ������� ��°�� -> ���赵�� �ʿ���


}

void Player2::KillMonster()
{
	_target2->KillMe();

}