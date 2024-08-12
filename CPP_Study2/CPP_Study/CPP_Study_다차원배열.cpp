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
using namespace std;

// 다차원 배열

#pragma region Struct

#pragma endregion

#pragma region Func



#pragma endregion


int main()
{
	int a[10] = { 1, 2, 3 };


	// [1] [1] [5] [2] [2] << 1층
	// [4] [2] [3] [4] [1] << 0층

	int first[5] = { 4,2,3,4,1 };
	int second[5] = { 1,1,5,2,2 };

	int apartment2D[2][5] = { {4,2,3,4,1}, {1,1,5,2,2} }; // 5개의 원소를가진 배열이 2개 있는 이차원배열이다.
	// apartment2D[0~1][0~4]

	int apartment1D[10] = { 4,2,3,4,1,1,1,5,2,2 };

	for (int floor = 0; floor < 2; floor++)
	{
		for (int room = 0; room < 5; room++)
		{
			int index = (floor * 5) + room; // apartment1D + (index * 4)를 한 주소, 4는 int 형이므로 
			int num = apartment1D[index];
			cout << num << " ";
		}
		cout << endl;
	}

	for (int floor = 0; floor < 2; floor++)
	{
		for (int room = 0; room < 5; room++)
		{
			int num = apartment2D[floor][room]; // apartment2D + (floor * 20) + (room * 4)
			cout << num << " ";
		}
		cout << endl;
	}

	// 2차 배열 예시 : 2D 로그라이크 맵
	int map[5][5] =
	{
		{1,1,1,1,1},
		{1,0,0,1,1},
		{0,0,0,0,1},
		{1,0,0,0,0},
		{1,1,1,1,1},

	};

	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			int info = map[y][x];
			cout << info;
		}
		cout << endl;
	}

	return 0;
}


