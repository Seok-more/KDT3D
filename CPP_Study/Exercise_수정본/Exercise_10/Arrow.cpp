#include "Arrow.h"
#include "Player.h"
#include <iostream>
using namespace std;

Arrow::Arrow(Player* target, int damage) 
	: _target(target), _damage(damage)
{

}

Arrow::~Arrow()
{

}

void Arrow::AttackTarget()
{
	 if (_target->IsDead())
	 {
	 	return;
	 }
	cout << "ȭ���� ���� �ǰ��մϴ�!" << endl;
	
	// ���� ����� �ִٸ�
	if (_target != nullptr)
	{
		// �������� ������
		_target->AddHp(-_damage);
		_target->PrintInfo();
	}
}