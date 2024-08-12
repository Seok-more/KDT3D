#include "Player.h"
#include <iostream>
#include <format>
using namespace std;

Player::Player(int playerType) : Creature(CT_PLAYER), _playerType(playerType)
// �̷� ������ creature�� �⺻������(�ȸ���)�� �ƴ϶� ���� �����ڸ� ȣ���ϵ��� �������
{

}

void Player::PrintInfo()
{
	cout << "-----------------------------------------------" << endl;
	cout << format("�÷��̾�����/ HP : {}, ATK : {}, DEF : {}", _hp, _attack, _defence);
	cout << "-----------------------------------------------" << endl;
}
