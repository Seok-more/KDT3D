#include "Game.h"
#include "Player.h"
#include "Field.h"
#include <iostream>
using namespace std;


Game::Game() : _player(nullptr), _field(nullptr)// ������ �� ��������� �ƹ��͵� ���� ���´ϱ�
{

}

Game::~Game()
{
	if (_player)
	{
		delete _player;
		_player = nullptr;
	}

	if (_field)
	{
		delete _field;
		_field = nullptr;
	}
}

void Game::Init()
{
	_field = new Field();
}

void Game::Update()
{
	if (_player == nullptr)
	{
		CreatePlayer();
	}

	if (_player->IsDead())
	{
		delete _player;
		_player = nullptr;
		CreatePlayer();
	}

	_field->Update(_player);

}

void Game::CreatePlayer()
{
	while (_player == nullptr)
	{
		cout << "----------------------------------" << endl;
		cout << "ĳ���͸� ���ÿ�" << endl;
		cout << "1) ��� 2) �ü� 3) ����" << endl;
		cout << "----------------------------------" << endl;
		cout << ">";

		int input = 0;
		cin >> input;

		 switch (input)
		 {
		 case PlayerType::PT_Knight :
		 	_player = new Knight();
		 	break;
		 
		 case PlayerType::PT_Archer :
		 	_player = new Archer();
		 	break;
		 
		 case PlayerType::PT_Mage :
		 	_player = new Mage();
		 default:
		 	break;
		 }

		// if (input == PT_Knight)
		// {
		// 	_player = new Knight();
		// }
		// else if (input == PT_Archer)
		// {
		// 	_player = new Archer();
		// }
		// else if (input == PT_Mage)
		// {
		// 	_player = new Mage();
		// }
		

	}
}



