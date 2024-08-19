#pragma once
#include "pch.h"


class Board;

class Player
{
	enum // 몇 밀리 sec마다 움직여야 할지 
	{
		MOVE_TICK = 100,
	};

public:
	void	Init(Board* board);
	void	Update(uint64 deltaTick);
	void	Setpos(Pos pos) { _pos = pos; };
	Pos		Getpos() { return _pos; };

	bool CanGo(Pos pos);


protected:
    void RightHand();
    void Bfs();

public:

protected:
	Pos _pos = {};
	int32 _dir = DIR_UP;
	Board* _board = nullptr;

	vector<Pos> _path; // 지금까지 건너온 정보들
	int32 _pathIndex = 0; //_path를 통해 내가 얼만큼 이동했는지 추적하는 변수, 이동 정보의 인덱스
	uint64 _sumTick = 0; // 현재까지의 tick을 다 더해주는

};

#include "Player.hpp"