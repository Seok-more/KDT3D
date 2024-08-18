#pragma once
#include "Player.h"

const char* TILE = "■";


Board::Board()
{
}

Board::~Board()
{
}

void Board::Init(int32 size, Player* player)
{
	_size = size;
	_player = player;
	GenerateMap();

}

void Board::Render()
{
	ConsoleHelper::SetCursorPosition(0, 0);
	ConsoleHelper::ShowCosoleCursor(false);


	for (int32 y = 0; y < 25; ++y)
	{
		for (int32 x = 0; x < 25; ++x)
		{
			ConsoleColor color = GetTileColor(Pos{y, x});
			ConsoleHelper::SetCursorColor(color);
			cout << TILE;
		}
		cout << endl;
	}
}

// Binary Tree 미로 생성 알고리즘
// - Mazes for Programmers

inline void Board::GenerateMap()
{
	for (int32 y = 0; y < _size; ++y)
	{
		for (int32 x = 0; x < _size; ++x)
		{
			if (x % 2 == 0 || y % 2 == 0 )
			{
				_tile[y][x] = TileType::WALL;
			}
			else
			{
				_tile[y][x] = TileType::EMPTY;
			}
		}
	}

	// 랜덤으로 우측/아래로 길을 뚫는 작업
	for (int32 y = 0; y < _size; ++y)
	{
		for (int32 x = 0; x < _size; ++x)
		{	
			// 미리 만들어둔 격자무늬에서는 실행하지 않는다.
			if (x % 2 == 0 || y % 2 == 0)
			{
				continue;
			}


			// 출구가 뚫리는 것을 일단 막아둔다
			if (y == _size - 2 && x == _size - 2)
			{
				continue;
			}


			// 가장끝벽에서 한칸 떨어진 부분에서는 길을 터준다.
			if (y == _size - 2)
			{
				_tile[y][x + 1] = TileType::EMPTY;
				continue;
			}
			if (x == _size - 2)
			{
				_tile[y + 1][x] = TileType::EMPTY;
				continue;
			}


			// 격자무늬에서 랜덤으로 우측/아래를 뚫는다.
			const int32 randValue = ::rand() % 2;
			if (randValue == 0)
			{
				_tile[y][x + 1] = TileType::EMPTY;
			}
			else
			{
				_tile[y + 1][x] = TileType::EMPTY;
			}
		}
	}

}

inline TileType Board::GetTileType(Pos pos)
{
	// 범위체크
	if (pos._x < 0 || pos._x >= _size|| pos._y < 0 || pos._y >= _size)
	{
		return TileType::NONE;
	}
	
	return _tile[pos._y][pos._x];
}

inline ConsoleColor Board::GetTileColor(Pos pos)
{
	if (_player && _player->Getpos() == pos)
	{
		return ConsoleColor::YELLOW;
	}

	if (GetExitPos() == pos)
	{
		return ConsoleColor::BLUE;
	}

	TileType tileType = GetTileType(pos);

	switch (tileType)
	{
	case TileType::NONE:
		return ConsoleColor::WHITE;
	
	case TileType::WALL:
		return ConsoleColor::RED;
		
	case TileType::EMPTY:
		return ConsoleColor::GREEN;
	}
}
