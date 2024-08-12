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

// 은닉성(Data Hiding) = 캡슐화(Encapsulation)
// 몰라도 되는 것은 숨긴다.
// 숨기는 이유
// -1. 위험하고 건드리면 안됨
// -2. 다른 경로로 접근하길 원함

// 자동차
// - 핸들
// - 페달
// - 엔진
// - 문
// - 각종 전선

// 일반 구매자 입장에서 사용하는 것?
// - 핸들,페달,문
// 몰라도 됨 (오히려 건드리면 큰일남)
// - 엔진, 각종 전선...


// public, protected, private
// - public : 외부 어디에서나 접근 가능
// - protected : 자식들에서만 접근 가능
// - private : class 내부에서만 접근 가능

// 상속 접근 지정자 : 다음 세대한테 부모의 유산을 물려줄지
// -> 부모한테 받은 유산을 꼭 자식한테 똑같이 줄 필요는 없음
// - public : 부모의 유산을 그대로 줌 -> (public -> publoc, protected -> protected)
// - protected : 거의 안씀, 자식에게만 유산을 줌 -> (public -> protected, protected -> protected)
// - private : 거의 안씀, 유산 안줌, 나만 씀 ->(public -> private, protected -> private)


class Car
{
public: // (멤버) 접근 지정자
	void MoveHandle() {}
	void PushPedal() {}
	void OpenDoor() {}

	void TurnKey()
	{
		RunEngine();
	}

private:
	void DisassembleCar() {}
	void RunEngine() {}
	void ConnectCircuit() {}

protected:
	void RunEngine2() {}

public:


};

class SuperCar : private Car // 상속 접근 지정자, 거의 public을 씀 
{
public:
	void PushRemoteController()
	{
		// RunEngine(); private이라 접근 불가
		RunEngine2(); // protected라 자식에서 접근 가능
	}
};

class TestSuperCar : SuperCar // 이렇게 앞에 상속 접근을 지정 안하면 private이 기본적으로 들어간다.
{
	// RunEngine2(); protected임에도 상속 못받음 -> 부모인 SuperCar가 private 상속이라 
};

// 캡슐화
// 연관된 데이터와 함수를 논리적으로 묶어 놓은 것

class Berserker
{
public:

	int GetHp() { return _hp; }

	void SetHp(int hp)
	{
		_hp = hp;
		if (_hp < 50)
		{
			SetBerserkerMode();
		}
	}
private:
	// 체력이 50 이하로 떨어지면 버서커 모드 발동
	void SetBerserkerMode()
	{
		cout << "매우 쎄짐!" << endl;
	}

private:
	int _hp = 100;
};

int main()
{
	// Car car;
	// RunEngine(); private이라 외부에서 접근 불가
	// RunEngine2(); // protected라 외부에서 접근 불가

	Berserker b;

	b.SetHp(20);



	return 0;
}