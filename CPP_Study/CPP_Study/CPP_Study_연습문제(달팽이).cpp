// CPP_Study.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴
// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
#include <iostream>
#include <format> //std::cout << std::format("i: {}, j: {}\n", i, j);
#include <vector>
#include "Function/obj_ori.h"
#include <iomanip>
using namespace std;

// 연습문제: 달팽이

// 이미 배열이 만들어져 있고 그 후, 값이 채워졌음을 간과
// 1바퀴 회전할 때마다 접근하는 수가 줄어듬
// 원래의 배열을 그대로 두고, 줄어드는 횟수를 따로 지정했어야함
// N / n의 차이


int N;
const int MAX = 100;
int board[MAX][MAX] = {};

void PrintBoard()
{
	for (int y = 0; y < N; ++y)
	{
		for (int x = 0; x < N; ++x)
		{
			cout << setfill('0') << setw(2) << board[y][x] << " ";
		}
		cout << endl;
	}
}

void SetBoard()
{
	// 1 2 3	
	// 8 9 4    
	// 7 6 5    
	int n = N;

	int num = 1;

	int x = 0, y = 0;
	int round = (2 * n) - 1;

	for (int i = 0; i < round; ++i) // 방향이 바뀜
		switch (i % 4)
		{
		case 0: // 우
			for (int k = 0; k < n; ++k)
			{
				board[y][x] = num;
				++num;
				++x;
			}
			--x;
			++y;
			--n;
			break;
		case 1: // 하
			for (int k = 0; k < n; ++k)
			{
				board[y][x] = num;
				++num;
				++y;
			}
			--y;
			--x;
			break;
		case 2: // 좌
			for (int k = 0; k < n; ++k)
			{
				board[y][x] = num;
				++num;
				--x;
			}
			++x;
			--y;
			--n;
			break;
		case 3: // 상
			for (int k = 0; k < n; ++k)
			{
				board[y][x] = num;
				++num;
				--y;
			}
			++y;
			++x;
			break;
		default:
			break;
		}
	}




int main()
{
	cin >> N;


	//PrintBoard();
	SetBoard();
	PrintBoard();

	return 0;
}


