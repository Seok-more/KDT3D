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

// 객체 지향: 생성자와 소멸자

// 생성자(Constructir)와 소멸자(Destructor)
// 클래스에 소속된 함수들을 멤버 함수라고 함
// 그중 시작과 끝을 알리는 함수

// [암시적(implicit) 생성자]
// 생성자를 명시적으로 만들지 않으면,
// 아무 인자도 받지않는 [기본생성자]가 컴파일러에 의해 자동으로 만들어짐
// -> 그러나 우리가 명시적(Explicit)으로 아무 생성자 하나 만들면
// 자동으로 만들어지는 [기본생성자]가 만들어 지지 않음


// Knight
// - 속성(데이터): hp, atk, position(x, y)...
// - 기능(동작): move, attack, die...


class Knight
{
public:
	// [1] 기본 생성자(인자가 없음)
	Knight()
	{
		cout << "Knight 기본 생성자 호출\n";

		_hp = 100;
		_attack = 10;
		_posY = 0;
		_posX = 0;
	}

	// [2] 복사 생성자(자기 자신의 클래스 참조 타입을 인자로 받음)
	// 일반적으로 똑같은 데이터를 지닌 객체가 생성되길 기대함
	Knight(const Knight& knight) // <- 거의 100퍼센트로 const를 붙임
	{
		cout << "Knight 복사 생성자 호출\n";

		_hp = knight._hp;
		_attack = knight._attack;
		_posY = knight._posY;
		_posX = knight._posX;
	}


	// [3] 기타 생성자(인자 있음)
	// 이 중에서 인자를 1개만 받는 [기타 생성자]를
	// [타입 변환 생성자]라고 부르기도 함


	// 명시적인 용도로만 사용할 것!
	explicit Knight(int hp) // 타입 변환 생성자 ->  explicit이 들어가는 순간 암시적 형변환이 안됨, 명시적으로만 가능해짐
	{
		cout << "Knight(int) 생성자 호출\n";

		_hp = hp;
		_attack = 10;
		_posY = 0;
		_posX = 0;
	}

	Knight(int hp, int attack, int posX, int posY)
	{

		_hp = hp;
		_attack = attack;
		_posY = posY;
		_posX = posX;
	}



	// 소멸자
	~Knight()
	{
		cout << "Knight 소멸자 호출\n";
	}



	// 멤버 함수 선언
	void Move(int y, int x);
	void Attack();
	void Die()
	{
		// this; 멤버 변수에 접근하기 위해 객체 자기 자신의 주소를 갖는 포인터
		_hp = 0; // this->_hp = 0;이 생략되어있는 것
		this->_hp = 1;
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

	Knight k2(k1); // 똑같은 Knight를 복사해서 만듬, 복사생성자
	Knight k3 = k1; // 똑같은 Knight를 복사해서 만듬, 위와 동일한 복사생성자

	Knight k4;
	k4 = k1; // 이건 의미가 좀 다른데, 기본생성자로 만들고, 그후에 값을 복사해옴

	k1.Move(2, 2);
	k1.Attack();
	k1.Die();

	// 암시적 형변환 -> 컴파일러가 알아서 바꿔줌
	int num = 1;

	float f = (float)num; // 명시적 변환
	double d = num; // 암시적 변환

	Knight k5;
	//k5 = 1; // 이게 되네? / 타입 변화 생성자때문에 가능함 -> explicit을 붙여서 명시적이 되었음
	k5 = (Knight)1; // 명시적으로 변환

	return 0;
}


