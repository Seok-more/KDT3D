#pragma once
#include "Player.h"
#include "DisjointSet.h"

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

    vector<CostEdge> edges;
    
    // edges 후보를 랜덤 cost로 등록한다
    for (int32 y = 0; y < _size; ++y)
    {
        for (int32 x = 0; x < _size; ++x)
        {
            if (x % 2 == 0 || y % 2 == 0) { continue; }

            // 우측 연결하는 간선 후보
            if (x < _size - 2)
            {
                // [노드][-][노드]
                // 노드와 노드 사이를 연결함
                const int32 randValue = ::rand() % 100;
                edges.push_back(CostEdge(randValue, Pos{ y,x }, Pos{ y,x + 2 }));
            }


            // 아래 연결하는 간선 후보
            if (y < _size - 2)
            {
                // [노드]
                // [ l  ]
                // [노드]
                // 노드와 노드 사이를 연결함
                const int32 randValue = ::rand() % 100;
                edges.push_back(CostEdge(randValue, Pos{ y,x }, Pos{ y + 2,x }));
            }     
        }
    }

    sort(edges.begin(), edges.end());

    DisjointSet sets(_size * _size);

    for (CostEdge& edge : edges)
    {
        // 2차원배열을 1차원으로 관리하는 공식
        // [0][1][2][3]
        // [4][5][6][7]
        int u = edge.u._y * _size + edge.u._x;
        int v = edge.v._y * _size + edge.v._x;

        // 같은 그룹이면 스킵 (안그러면 사이클 발생함)
        if (sets.Find(u) == sets.Find(v)) { continue; }

        // 두 그룹을 합친다
        sets.Merge(u, v);

        // 맵에 적용
        // [u][벽][v]
        int y = (edge.u._y + edge.v._y) / 2;
        int x = (edge.u._x + edge.v._x) / 2;

        _tile[y][x] = TileType::EMPTY;
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
