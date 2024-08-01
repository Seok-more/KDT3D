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

// 객체 지향 마무리

// 1. struct vs class
// struct는 기본 접근 지정자가 public, class는 private이다.
// struct는 구조체 : 데이터 묶음을 표현하는 용도
// class는 객체 지향 프로그래밍의 특징을 나타내는 용도


struct TestStruct
{

public:
	int _a;
	int _b;
};

class TestClass
{
private:
	int _a;
	int _b;
};

// 2. static 변수, static 함수 (static = 정적인)

class Marine
{
public:

	void TakeDamage(int damage)
	{
		_hp -= damage;
	}

	static void SetAtk()
	{
		//_hp = 100; 불가능, static은 클래스에서 벗어나서 전역적으로 선언한 느낌이라 그럼 
		s_atk = 100; // 가능, static 변수나 함수는 가능하죠잉
	}

public:
	int _hp; // 각 객체에 각각 종속적
	static int s_atk; // 모든 마린들이 공통적으로 갖는 변수, 설개도 상으로만 존재->선언해야함, 각 객체에 종속된 값이 아니라 전역적으로 됨
	// static은 .data영역에 메모리에 1개만 잡혀서 공용적으로 돌아가며 쓰는 느낌

};

int Marine::s_atk = 0; // 외부 선언(전역적으로 됨)

static int s_global = 1; // 정적 전역 객체
class Player
{
public:
	int _id;
};

int GenerateId()
{
	// static
	// 생명주기: 프로그램 시작/종료 (메모리에 항상 올라가 있음)
	// 가시범위: 함수 내부(외부선언이 아닌 이상 지역안에서만)

	static int s_id = 1; // 정적 지역 객체, 프로그램이 시작될 때, 처음만 초기화 됨

	return s_id++;
}



int main()
{
	TestStruct ts;
	ts._a = 1;

	TestClass tc;
	//tc._a = 1; // 이건 불가 아무것도 입력 안하면 class는 기본적으로 private, struct는 public이다.

	Marine m1;
	m1._hp = 40;
	m1.TakeDamage(3);

	Marine::s_atk = 6;
	// m1.s_atk = 6;

	Marine m2;
	m1._hp = 20;
	// m1.s_atk = 6;

	// 마린 공업 완료
	Marine::s_atk = 7;
	Marine::SetAtk();

	static int id = 10; // static은 스택 영역이 아닌 저 멀리 .data(/.bss초기화안하면) 있음
	int a = id;

	cout << GenerateId() << endl;
	cout << GenerateId() << endl;
	cout << GenerateId() << endl;	// 1, 2, 3

	return 0;

}