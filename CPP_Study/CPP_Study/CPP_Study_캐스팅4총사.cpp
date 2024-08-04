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

// 캐스팅(타입 변환) 4총사

// 1) static_cast
// 2) dynamaic_cast
// 3) const_cast
// 4) reinterpret_cast


class Player
{
public:


	virtual ~Player()
	{

	}

public:
};

class Knight : public Player
{
public:

public:
};

class Archer : public Player
{
public:

public:
};

class Dog
{

public:

public:
};

void PrintName(char* str)
{
	cout << str << endl;
}



int main()
{
	// (int) : C스타일 옛날 캐스팅

	//--------------------------------------------------------------------------------------------------------------------------

	// static_cast : 타입 원칙에 비춰볼 때, 상식적인 캐스팅만 허용해준다. 많이 씀
	// 1) int <-> float 
	// 2) Player* -> Knight* (다운캐스팅), 안정성은 보장 못함

	// 1) int <-> float 
	int hp = 100;
	int maxHp = 200;
	float ratio = (float)hp / maxHp; // 캐스팅 안하면 0이 나옴 int/int = int니까
	ratio = static_cast<float>(hp) / maxHp;


	// Player* p = new Player();
	// Knight* k1 = p; // 얌마 부모를 자식에 넣으면 어떠캬~~ 모든 플레이어가 기사냐~~~

	// 부모 -> 자식
	Player* p1 = new Knight(); // 나이트 클래스인디 포인터만 플레이어로 해놓음 : p 주소로 가면 Player가 있을거야~~ -> 근데 사실 나이트가 있음
	Knight* k1 = static_cast<Knight*>(p1); // Knight* k1 = (Knight*)p;  이러한 상황에서는 캐스팅 하면 괘안치
	// 오류 예시
	// Player* p2 = new Archer();
	// Knight* k2 = static_cast<Knight*>(p2); // *A 아처의 설계도와 나이트의 설계도가 완전히 다른 경우 메모리가 오염됨 


	// 자식 -> 부모				자식은 언젠가 부모가 되지만(캐스팅필요X), 부모가 다시 자식이 되는 것은 조~금 어렵지(캐스팅필요)
	Knight* k2 = new Knight();
	Player* p2 = k2;	// Player* p2 = (Player*)k;		Player* p2 = static_cast<Player*>(k);	둘 다 가능함


	//--------------------------------------------------------------------------------------------------------------------------

	// dynamic_cast : 상속 관계에서의 안전 형변환, 반드시 virtual함수가 하나라도 존재해야함, 조금 씀
	// RTTI (RunTime Type Information) : 실시간으로 코드가 동작 할때, 타입을 확인 할 수 있음
	// 다형성을 활용하는 방식
	// - virtual 함수를 하나라도 만들면, 객치의 메모리에 가상 함수 테이블(vftable) 주소가 기입된다.
	// - 만약 잘못된 타입으로 캐스팅을 했으면, nullptr을 반환한다*****!!!
	// 이를 이용해서 맞는 타입으로 캐스팅 했는지 확인하는데 쓰임-> 그래서 느림

	Player* p3 = new Archer();				// 일부러 아처임
	Knight* k3 = dynamic_cast<Knight*>(p3);	// *A 반면 얘는 nullptr을 반환해줌

	//--------------------------------------------------------------------------------------------------------------------------

	// const_cast : 거의 안씀
	// const를 붙이거나 떄거나
	// C++ 라이브러리나 다른 사람이 만든 라이브러리에서 함수를 고칠 수 없는 상황에 쓰임

	// PrintName("SSSS") PrintName은 Char*만 받는데 "SSSS"는 const char* 이므로, const를 때주면 됨
	PrintName(const_cast<char*>("SSSS")); // PrintName((char*)"SSSS"); 물론 이것도 됨

	//--------------------------------------------------------------------------------------------------------------------------

	// reinterpret_cast : 자주 안씀
	// 가장 위험하고 강력한 형태의 캐스팅
	// - 포인터랑 전혀 관계없는 다른 타입 변환 등등.. 그냥 비트열을 갑자기 포인터로 보겠다라던가..

	__int64 address = reinterpret_cast<__int64>(k2); // k2는 포인터인데 이 주소 숫자를 알고자 그냥 int64로 갖고 오겠다. __int64 address = (__int64)k2; 물론 이것도됨
	Dog* dog1 = reinterpret_cast<Dog*>(k2); // 아무 연관없는 기사를 개로 바꿔주겠다.
	void* p = malloc(1000);					// void* 처럼  뭔지 모르겠는데 일단 포인터로 메모리를 할당 받은 상태에서
	Dog* dog2 = reinterpret_cast<Dog*>(p);	// 그 포인터는 일단 개야 라고 해 두는 거임 Dog* dog2 = (Dog*) p; 물론 이것도 됨








	return 0;
}