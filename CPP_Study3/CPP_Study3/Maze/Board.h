#pragma once
#include "pch.h"

class Player;

enum
{
	BOARD_MAX_SIZE = 100
};

enum class TileType
{
	NONE = 0,
	EMPTY,
	WALL
};


class Board
{
public:
	Board();
	~Board();

public:
	void			Init(int32 size, Player* player);	// 맵 초기화
	void			Render();			// 맵 시각화
	void			GenerateMap();
	TileType		GetTileType(Pos pos);
	ConsoleColor	GetTileColor(Pos pos);

	Pos				GetEnterPos() { return Pos{ 1,1 }; };
	Pos				GetExitPos() { return Pos{ _size-2, _size-2}; };
    int32           GetSize() { return _size; };

public:

protected:
	TileType _tile[BOARD_MAX_SIZE][BOARD_MAX_SIZE] = {};
	int32 _size = 0;
	Player* _player = nullptr;
};


#include "Board.hpp"