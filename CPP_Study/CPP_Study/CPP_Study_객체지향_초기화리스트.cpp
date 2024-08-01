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

// 초기화 리스트

// 멤버 변수 초기화
// - why? : 버그 예방, 포인터등의 주소값이 연루되어 있는 경우

// 초기화 방법
// - 1. 생성자 내에서 초기화
// - 2. 초기화 리스트
// - 3. C++11 문법 


// 초기화 리스트
// - 상속 관계에서 원하는 부모 생성자 호출할 때 필요함
// - 생성자 내에서 초기화 vs 초기화 리스트 
// -- 일반 변수는 별 차이 없음 
// -- 멤버 타입이 클래스인 경우 차이가 난다.
// -- 정의함과 동시에 초기화가 필요한 경우 (참조 타입, const 타입)

class Inventory
{
public:
	Inventory() { cout << "Inventory()\n"; }
	Inventory(int size) { cout << "Inventory(int size)\n"; _size = size; }

	~Inventory() { cout << "~Inventory()\n"; }

public:
	int _size = 10;
};

class Monster
{

};


class Player
{
public:
	Player() {}
	Player(int id) {}

};

// Is-A (Knight Is-A Player?) 기사는 플레이어다.-> 상속 관계
// Has-A (Knight Has-A Inventory?) 기사는 인벤을 갖고있는가 -> 포함 관계 

class Knight : public Player
{
public:
	Knight() : Player(1), _hp(100), _inventory(20), _hpRef(_hp), _hpConst() // 2. 초기화 리스트, 아무 것도 없으면 부모의 기본 생성자를 호출
		/*
		* 선처리 영역
		* _inventory = Inventory() 생성됨
		*/

	{
		_hp = 100; // 1. 생성자 내에서 초기화
		//_inventory = Inventory(20); // 선처리 영역에서 인벤이 만들어지는데 여기서 또 만들어져서 중복됨
		// _hpRef = _hp; 참조는 처음에 초기화가 되어있어야 해서 처리안함
		// _hpConst = 100; 얘는 절대 바뀔 수 없으니까 처리 안함
	}


public:
	int _hp = 200;
	Inventory _inventory; // 포함 관계

	// int* _hpPtr; 얘는 nullPtr로 아무 값이 없어도 괜찮지만
	int& _hpRef;
	const int _hpConst;
};

int main()
{
	Knight k;

	cout << k._hp << endl;

	if (k._hp < 0)
	{
		cout << "Knight Dead\n";
	}

	return 0;
}