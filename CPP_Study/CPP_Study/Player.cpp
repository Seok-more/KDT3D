#include "Player.h"
#include <iostream>
#include <format>
using namespace std;

Player::Player(int playerType) : Creature(CT_PLAYER), _playerType(playerType)
// 이런 식으로 creature의 기본생성자(안만듬)이 아니라 만든 생성자를 호출하도록 해줘야함
{

}

void Player::PrintInfo()
{
	cout << "-----------------------------------------------" << endl;
	cout << format("플레이어정보/ HP : {}, ATK : {}, DEF : {}", _hp, _attack, _defence);
	cout << "-----------------------------------------------" << endl;
}
