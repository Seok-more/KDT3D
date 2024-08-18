#include <iostream>
#include "pch.h"
#include "ConsoleHelper.h"
#include "Board.h"
#include "Player.h"

Board board;
Player player;

int main()
{
	srand(static_cast<unsigned int>(time(nullptr)));

	board.Init(25, &player);
	player.Init(&board);

	uint64 lastTick = 0;
	while (true)
	{
#pragma region 프레임 관리
		const uint64 currentTick = ::GetTickCount64();
		const uint64 deltaTick = currentTick - lastTick;
		lastTick = currentTick;

		// 고정 프레임 : 1초동안 30/60 프레임만 허락하겠다
		// 가변 프레임 : 컴퓨터 성능에 따라 막 프레임이 2~300되기도함
#pragma endregion

		// 입력


		
		// 로직
		player.Update(deltaTick);


		// 렌더링
		board.Render();
		
    }

}