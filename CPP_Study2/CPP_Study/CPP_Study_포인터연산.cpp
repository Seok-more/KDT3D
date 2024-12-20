﻿// CPP_Study.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
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

// 포인터 연산

// 1) 주소 연산자 : & 해당 변수의 주소를 알려줘
// 2) 산술 연산자 : +, - 
// 3) 간접 연산자 : *
// 4) 간접 멤버 연산자 : ->

struct Player // 구조체, 새로운 타입 선언
{
	int hp; // Player 주소에 + 0 위치에 존재
	int damage; // Player 주소에 + 4 위치에 존재
};



int main()
{
	int num = 1;

	// 1) 주소 연산자 &
	// 해당 변수 타입(TYPE)에 따라서 TYPE* 반환(주소)
	int* pointer = &num;

	// 2) 산술 연산자 +-
	// num += 1; // num = num + 1; num++; / num = 2 : 1증가함
													 // int* : 포인터에 int(4바이트 정수형 바구니)가 있다고 가정

	// [!] 포인터에서의 산술 연산 + 1 은 한번에 'TYPE' 크기만큼 주소를 이동해라 라는 뜻이다. 다음/이전 바구니로 이동해라
	// 즉, int형이므로 1 바구니(4바이트) 만큼 이동한 것.

	// 3) 간접 연산자 *
	// 포탈을 타고 해당 주소로 이동
	*pointer = 3; // pointer에 있는 주소로 가서 그 값을 3으로 바꿔라 == num = 3;

	Player player;
	player.hp = 100;
	player.damage = 10;

	Player* playerPtr = &player; // playerPtr은 포인터이고 주소에 따라가면 TYPE이 Player일 것이다.

	(*playerPtr).hp = 200;
	(*playerPtr).damage = 20;

	// 4) 간접 멤버 연산자 ->
	// *(포탈 타고 해당 주소로 이동) . (어셈블리로 까보면 그냥 덧셈임, 변수 타입(바구니 크기)만큼 주소를 이동하라는))
	playerPtr->hp = 200; // == (*playerPtr).hp = 200;
	playerPtr->damage = 20; // == (*playerPtr).damage = 20;





	return 0;
}

