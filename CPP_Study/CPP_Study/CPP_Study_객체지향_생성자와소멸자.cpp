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

using namespace std;

// 객체 지향의 시작

// 절차지향 프로그래밍: procedure(함수)지향, 함수의 순서가 중요했었음

// 객체지향 프로그래밍 : 객체(플레이어, 몬스터, GameRoom...)

//struct A // struct와 class는 정말 유사하다.
//{
//	int hp;
//	int attack;
//	int posY;
//	int posX;
//};

// Knight
// - 속성(데이터): hp, atk, position(x, y)...
// - 기능(동작): move, attack, die...


class Knight
{
public:
	// 멤버 함수 선언
	void Move(int y, int x);
	void Attack();
	void Die()
	{
		_hp = 0;
		cout << "Die\n";
	}

public:
	// 멤버 변수
	int _hp;
	int _attack;
	int _posY;
	int _posX;
};

void Knight::Move(int y, int x)
{
	_posY = y;
	_posX = x;
	cout << "Move\n";
}

void Knight::Attack()
{
	cout << std::format("ATTACK: {}\n", _attack);
}



int main()
{
	Knight k1; // Instantiate 객체를 만든다
	k1._hp = 100;
	k1._attack = 10; 
	k1._posY = 0;
	k1._posX = 0;

	Knight k2;
	k1._hp = 80;
	k1._attack = 5;
	k1._posY = 1;
	k1._posX = 1;

	k1.Move(2, 2);
	k1.Attack();
	k1.Die();

	return 0;
}


