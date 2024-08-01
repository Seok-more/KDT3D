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


// 객체지향
// - 상속성
// - 은닉성
// - 다형성

// 다형성(Polymorphism) : 겉은 똑같지만 기능이 다르게 동작한다.
// - 오버로딩: 함수 중복 정의, 함수 이름의 재사용, 인자만 달라지는 등
// - 오버라이딩: 재정의, 부모 클래스의 함수를 자식 클래스에서 재정의

// 바인딩(Binding)
// - 정적 바인딩(Static binding) : 컴파일 시점에서 결정
// - 동적 바인딩(Dynamic binding) : 실행 시점에서 결정

// 일반 함수는 정적 바인딩을 사용
// 동적 바인딩 : 가상 함수(virtual function)

// 실제 객체가 어떤 타입인지 어떻게 알고 알아서 가상 함수를 호출하는가
// - 가상 함수 테이블(vftable)

// .vftable[] 4바이트(32), 8바이트(64) ; 포인터처럼 주소임
// [VMove의 주소] [VDie의 주소]

// 순수 가상 함수 : 구현은 없고, '인터페이스'만 전달하는 용도
// 추상 클래스 : 순수 가상 함수가 1개라도 포함되면 추상 클래스로 간주
// - 직접적으로 객체를 만들 수 없음 -> 반드시 상속을 받아서 순수 가상 함수가 재정의되서 구현해야만 함

class Player // 추상 클래스가 되어서 이 자체로는 존재 못함
{
public:
	Player()
	{
		_hp = 100;
	}


	void Move()
	{
		cout << "Move Player\n";
	}

	virtual void VMove()
	{
		cout << "VMove Player\n";
	}
	virtual void VDie()
	{
		cout << "VDie Player\n";
	}

	virtual void VAttack() = 0; // 순수 가상 함수 : 자식들이 반드시 재정의 하도록 하는겨


	//void Move(int a) // 오버로딩
	//{
	//	cout << "Move Player(int)\n";
	//}


public:
	int _hp;
};

class Knight : public Player
{
public:
	Knight()
	{
		_stamina = 100;
	}

	void Move()
	{
		cout << "Move Knight\n";
	}

	virtual void VMove() // 가상 함수는 재정의를 하더라도 가상 함수이다.
	{
		cout << "VMove Knight\n";
	}

	virtual void VDie()
	{
		cout << "VDie Knight\n";
	}

	virtual void VAttack()
	{
		cout << "VAttack Knight\n";
	}

public:
	int _stamina;
};

class Mage : public Player
{
public:
	int _mp;
};

void MovePlayer(Player* player)
{
	player->VMove(); //
}

void MoveKnight(Knight* knight)
{
	knight->Move();
}

class Animal
{

};

class Cat : public Animal
{

};

class Dog : public Animal
{

};

int main()
{
	// Player p; 추상 클래스가 되어서 존재 불가
	//p.Move(100);
	//MovePlayer(&p);
	// MoveKnight(&p); 당연히 안됨

	Knight k;
	//MoveKnight(&k);
	MovePlayer(&k); // 됨유 



	return 0;
}