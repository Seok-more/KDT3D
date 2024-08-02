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

// 동적 할당

// 메모리 구조
// 코드 영역 : 실행할 코드
// 데이터 영역 : 전역, 정적 변수
// 스택 영역 : 지역, 매개 변수
// 힙 영역 : 동적 할당

// 상황 : 동접자 1~5만, 몬스터 1~500만
// 갑자기 몬스터 10배 소환하고 싶음

// 스택 : 함수가 끝나면 같이 정리되는 메모리, 함수에서 매개변수 전달 정도로 쓰임
// 메모리 : 프로그램이 실행되는 동안 무조건 사용됨

// 힙
// 필요할 때만 사용하고, 필요없으면 반납함
// 생성/소멸 시점을 관리 할 수 있음
// 관련 함수/연산자 : (malloc, free), (new, delete), (new[], delete[])

// malloc
// - 할당할 메모리 크기를 건네준다.
// - 메모리 할당 후, 시작 주소를 가리키는 포인터를 반환해줌, 메모리 부족하면 NULL 반환

// free
// - malloc (calloc, realloc...)이 할당한 영역 해제
// - 힙 관리자가 할당/미할당 여부를 구분해서 관리

// new / delete
// - malloc/free = 함수, new/delete = 연산자(operator)

// new[] / delete[]
// - new를 배열 처럼 N개의 데이터를 할당

// malloc/free vs new/delete
// - 사용 편의성 : new/delete
// - 타입에 상관없이 특정한 크기의 메모리 영역을 할당받기 : malloc/free
// new/delete는 (생성타입이 클래스라면) 생성자/소멸자를 호출한다.

// malloc-free안의 클래스는 일단 메모리를 할당받고, 그 메모리 범위를 클래스로 간주하겠다 -> 실제 생성아님, 생성자/소멸자 호출X
// new-delete안의 클래스는 객체 지향적으로 클래스를 생성하는 개념 - > 생성자/소멸자 호출


class Monster
{
public:
	Monster()
	{
		cout << "Monster()\n";
	}

	~Monster()
	{
		cout << "Delete Monster()\n";
	}
public:

public:
	int _hp;
	int _x;
	int _y;
};

// Monster monster[500 * 10000]; 메모리 낭비, 유동적으로 변경 불가

int main()
{
	// Monster monster[500 * 10000]; 스택 오버플로우



	// 유저 영역 (게임, 메모장 등)
	// ==================
	// 커널 영역 (Windows 등의 핵심 코드)

	// 유저 영역) 운영 체제에서 제공하는 API(함수) 호출
	// 커널 영역) 메모리 할당해서 건내줌
	// 유저 영역) 할당된 메모리 활용 -> 매번 커널 호출하기 번거롭

	// 처음에 큰 메모리 받음						[					]
	// 뭘 할려고 할때 마다 그 메모리를 쪼개서 씀	[		][			]
	// C++은 CRT(C런타임라이브러리)의 힙 관리자를 통해 힙을 사용함
	// 단, 우리가 직접 API를 통해 힙을 생성하고 관리도 할 수는 있음: MMORPG 서버 메모리 풀링

	// size_t : unsigned int
//#ifdef _WIN64
//	typedef unsigned __int64 size_t;
//
//#else
//	typedef unsigned int     size_t;
//	
// 
	void* pointer = malloc(sizeof(Monster));// void 형 포인터를 반환, size_t를 인자로 받음
	// void* : 포인터(주소를 담는 바구니), 
	// 타고가면 void -> 뭐가있는지 잘 모르겠으니까 적당히 변환해서 써라
	// 메모리 낭비를 막기 위해 Monster의 사이즈로 맞춰줌

	// Heap Overflow
	// - 유효한 힙 범위를 초과해서 사용하는 문제
	// void* pointer = malloc(4);

	Monster* m1 = (Monster*)pointer;
	m1->_hp = 100;
	m1->_x = 3;
	m1->_y = 3;


	free(pointer); // free를 안하면 메모리 누수가 발생
	// free(pointer); Double free는 그냥 크래시만 남
	pointer = nullptr;
	m1 = nullptr;	// free하면 메모리만 해체하고 안에 값이 남아있으니까 

	// Use-After-Free : 이미 프리했는데 사용할려고해?
	// - 프로그래머 입장 : 바로 못찾음, 개망함
	// - 해커 입장 : 침입할 빈틈 발견, 끼요옷
	// m1->_hp = 100;
	// m1->_x = 3;
	// m1->_y = 3;

	Monster* m2 = new Monster;
	m2->_hp = 200;
	m2->_x = 2;
	m2->_y = 2;

	delete m2;
	// Double free,  Use-After-Free...

	Monster* m3 = new Monster[5]; // 배열과 유사하게5마리 만큼의 메모리를 잡아줌
	m3->_hp = 300;
	m3->_x = 3;
	m3->_y = 3;

	Monster* m4 = (m3 + 1); // m3 몬스터들의 다음 주소 
	m4->_hp = 400;
	m4->_x = 4;
	m4->_y = 4;

	// delete m3 : 이렇게 delete의 짝이 안맞으면 크래쉬가 나긴함
	delete[] m3;




	return 0;
}