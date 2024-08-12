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
// 
// 상속(Inheritance)


// 메모리
// [	[ Player ]		]
// [	  Knight		]


// 생성자 / 소멸자
// 생성자 : knight 생성 시, Player의 생성자? Knight의 생성자?
// -> 둘 다 호출하자 : 부모 생성자 -> 자식 생성자 -> 자식 소멸자 -> 부모 소멸자

class GameObject
{
public:
	int _objectId;
};



class Player : public GameObject
{
public:
	Player() // 기본 생성자
	{
		_hp = 0;
		_attack = 0;
		_defence = 0;
		cout << "Player 기본 생성자 호출" << endl;
	}

	Player(int hp) // 타입 변환 생성자
	{
		_hp = hp;
		_attack = 0;
		_defence = 0;
		cout << "Player(int hp) 생성자 호출" << endl;
	}


	~Player()
	{
		cout << "Player 소멸자 호출" << endl;
	}

	void Move() { cout << "Player Move 호출" << endl; }
	void Attack() { cout << "Player Attack 호출" << endl; }
	void Die() { cout << "Player Die 호출" << endl; }

public:
	int _hp;
	int _attack;
	int _defence;

};

class Knight : public Player
{
public:
	Knight()
		/*
		* 선처리 영역
		* - 여기서 Player()생성자를 호출
		* -
		*/
	{
		_stamina = 100;
		cout << "Knight 기본 생성자 호출" << endl;
	}

	Knight(int stamina) : Player(100) // Player(int hp) 호출
		// 이 버전에서는 부모의 기본생성자 호출을 받는 것이 아닌 , Player(int hp)생성자를 호출하고 싶은 경우
	{
		_stamina = stamina;
		cout << "Knight(int stamina) 생성자 호출" << endl;
	}

	~Knight()
	{
		cout << "Knight 소멸자 호출" << endl;
	}
	/*
	* 후처리 영역
	* - 여기서 Player()소멸자를 호출
	* -
	*/
	void Move() { cout << "Player K_Move 호출" << endl; } // 재정의 가능
public:
	int _stamina;

};

class Mage : public Player
{
public:

public:
	int _mp;

};

int main()
{
	Knight k(100);

	k._hp = 100;
	k._attack = 10;
	k._defence = 5;
	//k._stamina = 50;

	//k.Move(); // 재정의 된 것
	//k.Player::Move(); // 상속 받은 것 불러오기, 근데 잘 안씀

	//k.Attack();
	//k.Die();

	return 0;
}