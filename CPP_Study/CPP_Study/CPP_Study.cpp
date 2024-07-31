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
// - 오버로딩: 함수 중복 정의, 함수 이름의 재사용
// - 오버라이딩: 재정의, 부모 클래스의 함수를 자식 클래스에서 재정의

class Player
{
public:
	void Move()
	{
		cout << "Move Player\n";
	}

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
	void Move()
	{
		cout << "Move Knight\n";
	}

public:
	int _stamina;
};

class Mage : public Player
{
public:
	int _mp;
};


int main()
{
	Player p;
	
	p.Move();
	//p.Move(100);

	Knight k;
	k.Move();
	
	return 0;
}