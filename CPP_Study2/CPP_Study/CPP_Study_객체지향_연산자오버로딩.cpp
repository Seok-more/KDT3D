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

// 연산자 오버로딩(Operatir Overloading)

// 연산자 vs 함수
// - 연산자는 피연산자의 개수/타입이 고정되어 있음

// 연산자 오버로딩
// 일단 [연산자 함수]를 정의해야 함
// 함수도 멤버함수 vs 전역함수가 존재하는 것처럼, 연산자 함수도 두 가지 방식으로 만들 수 있음

// - 멤버 연산자 함수 version
// -- a op b 형태에서 왼쪽을 기준으로 실행됨 (a가 클래스여야만 가능, a = '기준 피연산자')
// -- 한계) a가 클래스가 아니면 사용 못 함

// - 전역 연산자 함수 version
// -- a op b 형태하면, a,b 모두를 연산자 함수의 피연산자로 만들어준다.

// 둘 중 하나만 지원하는 경우도 있음, 둘 다 할줄 알아야함.
// - 대표적으로 대입 연산자( a = b )는 전역 연산자로 만들 수 없음

// 복사 대입 연산자 
// - 대입 연산자 중, 자기 자신의 참조 타입을 인자로 받는 것
// - 복사 생성자와 복사 대입 연산자는 객체가 '복사'되기 때문에 중요

// 기타
// - 모든 연산자를 다 오버로딩 할 수는 없다(::, . , * 이런건 안됨)
// - 모든 연산자가 다 2개 항이 있는 것은 아니다. 증감 연산자(++ -- )등이 단항 연산자
// - 증감 연산자
// -- 전위형 (++a) operator++()
// -- 후위형 (a++) operator++(int)


class Position
{
public:

	//Position(const Position& arg) // 자신의 참조타입을 인자로 받는 복사 생성자, 인자에 const가 붙는 이유는 이 값을 안바꾸겠다는 의미도 내포*
	//{

	//}

	Position operator+ (const Position& arg) // 멤버 함수로 만든 버전
	{
		Position pos;
		pos._x = _x + arg._x;
		pos._y = _y + arg._y;

		return pos;
	}

	Position operator+ (int arg)
	{
		Position pos;
		pos._x = _x + arg;
		pos._y = _y + arg;

		return pos;
	}

	bool operator== (const Position& arg) const // 이 뒤에 const를 붙임으로써 함수가 객체의 멤버 변수를 변환하지 않음을 명시하고, 모호성을 방지 한다.
	{
		return _x == arg._x && _y == arg._y;
	}

	/*void operator= (int arg)
	{
		_x = arg;
		_y = arg;
	}*/

	Position& operator=(int arg) // operator를 만들때는 자기자신의 참조값으로 만드는 경우가 종종있다.
	{
		_x = arg;
		_y = arg;

		//Position* this = 내자신의주소;
		return *this; // 내 자신의 참조값을 갖고오고 싶다
	}

	Position& operator=(const Position& arg) // 복사 대입 연산자, 컴파일러가 자동으로 만들기도 함, const를 붙여야 값을 안바꾸고 복제만 하겠다는 의미 내포
	{
		_x = arg._x;
		_y = arg._y;

		//Position* this = 내자신의주소;
		return *this; // 내 자신의 참조값을 갖고오고 싶다
	}

	Position& operator++() // 연이어서 사용 할 수 있도록
	{
		_x++;
		_y++;
		return *this;
	}

	Position operator++(int) // 복사해서 전달해 주는 방법
	{
		Position ret = *this;
		_x++;
		_y++;
		return ret; // 기존값은 영향을 주지 않기 위해 리턴 반환
	}



public:
	int _x;
	int _y;

};

Position operator+(int a, const Position& b)
{
	Position ret;

	ret._x = b._x + a;
	ret._y = b._y + a;

	return ret;
}

//void operator= (const Position& a, int b)
//{
//	a._x = b;
//	a._y = b;
//} 이건 안됨. 이게 되면 오른쪽의 애를 왼쪽에 넣는 문법을 해침, 막 왼쪽애를 오른쪽에 넣을 수 도 있자나


int main()
{

	Position pos1;
	pos1._x = 0;
	pos1._y = 0;

	Position pos2;
	pos2._x = 1;
	pos2._y = 1;

	Position pos3 = pos1 + pos2;
	// = pos3 = pos1.operator+(pos2);

	Position pos4 = pos3 + 1;
	// = pos4 = pos.operator+(1);

	// Position pos4 = 1 + pos3; 이건 오류남, 순서를 못바꿈 -> 멤버 연산자에서 지정하면 순서를 못바꿈
	// Position pos4 = 1 + pos3; // 지금 이게 되는 이유는 전역 연산자에서 지정해서

	bool isSame = (pos3 == pos4); // 멤버 연산자에서 지정

	// Position pos5 = 5; 이거는 대입 연산자가 아니라 생성자를 호출하는 거임
	Position pos5; // 이게 대입이지
	pos5 = 5;
	// pos3 = (pos5 = 5) : (pos5 = 5)이 부분이 void 를 반환 하므로 안되야

	pos3 = (pos5 = 5); // Position* 로 바꾸니 가능해짐

	pos3++; // 통과는 되는데 후위형은 연속해서 안됨
	++(++pos3); // 통과는 되는데 전위형이 연속해서 되므로 이를 구현하기 위해 Position&로 자기참조값을 리턴하도록 수정



	// Position temp = pos3++; 임시 복사본을 만들고 증가시킴
	// pos5 = temp; (복사대입연산자) 복사본의 참조 값을 pos5에 대입시켜줌

	pos5 = pos3++; // 이게 안되는 이유는
	// pos5.operator=()					=			pos3.operator++(1)
	// (Pos&)을 줘(복사대입연산자)					난 (Pos)의 복사값 인대용?
	// (const Pos&)이면 통과가 되는데, const가 없으면 값을 수정하겠다는 의미를 내포하기 때문
	// const를 붙여도 타입이 같지는 않지만 그냥 뭐 됨
	return 0;

}