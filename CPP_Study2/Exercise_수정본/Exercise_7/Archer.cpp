#include "Archer.h"
#include "Pet.h"

Archer::Archer()
{
	_pet = new Pet();
}

Archer::Archer(int hp) : Player(hp)
{
	_pet = new Pet();
}

Archer::~Archer()
{
	
	if (_pet != nullptr)
	{
		delete _pet;
		_pet = nullptr;
	}
		
}

