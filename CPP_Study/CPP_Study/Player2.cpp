#include "Player2.h"
#include "Monster2.h"

void Player2::KillMonster()
{
	//		monster2의 첫번째주소, + 4, + 4
	// [ 주소 ] -> [ [monsterID][hp][defence] ]
	_target2->_hp = 0; // 왜 .h에서 전방선언했는데 안되지?
					   // ->_hp 부분이 문제임, 저게 있다고만 했지, 이 멤버 변수가 어딨는지 우째암 -> 설계도가 필요함


}

void Player2::KillMonster()
{
	_target2->KillMe();

}