#include "Creature.h"
#include <iostream>
#include <format>
using namespace std;

void Creature::onAttacked(Creature* attacker)
{
	int damage = attacker->_attack - this->_defence;

	if (damage < 0)
	{
		damage = 0;
	}

	_hp -= damage;

	if (_hp < 0)
	{
		_hp = 0;
	}


}
