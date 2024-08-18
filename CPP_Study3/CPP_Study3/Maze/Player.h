#pragma once
#include "pch.h"


class Board;

class Player
{
	enum // �� �и� sec���� �������� ���� 
	{
		MOVE_TICK = 100,
	};

public:
	void	Init(Board* board);
	void	Update(uint64 deltaTick);
	void	Setpos(Pos pos) { _pos = pos; };
	Pos		Getpos() { return _pos; };

	bool CanGo(Pos pos);


public:

public:

protected:
	Pos _pos = {};
	int32 _dir = DIR_UP;
	Board* _board = nullptr;

	vector<Pos> _path; // ���ݱ��� �ǳʿ� ������
	int32 _pathIndex = 0; //_path�� ���� ���� ��ŭ �̵��ߴ��� �����ϴ� ����, �̵� ������ �ε���
	uint64 _sumTick = 0; // ��������� tick�� �� �����ִ�

};

#include "Player.hpp"