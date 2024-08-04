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

// 얕은 복사 vs 깊은 복사

class Pet
{
public:
	Pet()
	{
		cout << "Pet()\n";
	}

	Pet(const Pet& Inpet) // 복사 생성자, Inpet에게 다른 이름을 붙여주는 참조~
	{
		cout << "Pet(const Pet& Inpet)\n";
	}

	~Pet()
	{
		cout << "~Pet()\n";
	}

public:

public:

};

class RabbitPet : public Pet
{

};


class Knight
{
public:
	Knight()
	{
		_pet = new Pet(); // 생성자안에서 동적 할당하는 것은 안좋은 습관이지만, 일단 생명 주기 확인할라코
	}

	Knight(const Knight& Inknight) // 자기 자신의 참조값을 받으면 복사생성자~
	{
		_hp = Inknight._hp; // 그냥 데이터 값은 복사해주고
		// _pet = Inknight._pet // 얕은 복사
		_pet = new Pet(*(Inknight._pet)); // 깊은 복사, Pet의 복사생성자가 참조값을 받으므로, 객체(Inknight._pet)의 값을 인자로 줘야함
	}

	Knight& operator=(const Knight& Inknight) // 자기 자신의 참조값을 대입해주는 복사 대입 연산자~
	{
		_hp = Inknight._hp; // 그냥 데이터 값은 복사해주고
		// _pet = Inknight._pet // 얕은 복사
		_pet = new Pet(*(Inknight._pet)); // 깊은 복사

		return *this;	// 이 객체의 포인터의 값
	}

	~Knight()
	{
		delete _pet;
	}


public:

public:
	int _hp = 100;
	// Pet _pet; 이렇게 포인터가 아닌 그 자체를 갖고있으면, knigth가 만들어지면 pet도 만들어지고, knight가 소멸하면 pet도 소멸한다. 
	//			 생명주기 관리가 어렵다, pet의 내용이 크면 knight도 덩달아 커짐, pet의 자식클래스들을 knight가 쓸 수 없게됨(모든 펫이 토끼는 아니잖아)
	//							 
	Pet* _pet;	// 이렇게 하면 캐스팅을 통해 자식 클래스들을 다 넣을 수 있음
};



int main()
{
	Pet* pet1 = new Pet();

	Knight knight; // 기본 생성자
	knight._hp = 200;
	knight._pet = pet1; // 원래 이렇게 멤버 변수에 바로 접근하는 것은 안좋고, 보통 생성자나 SetPet()같은 멤버 함수로 접근하는 것이 옳다

	// ----------------------------------------------------------------------------------------------------------------------------
	// [1] 얕은 복사(Shallow Copy) 
	// 멤버 데이터를 비트열 단위로 '똑같이' 복사 (메모리 영역 값을 그대로 복사) -> 멤버 변수에 포인터가 있다면 곤란

	// [복사 생성자], [복사 대입 연산자]
	// 둘 다 안 만들어주면 컴파일러가 '암시적으로' 만들어준다
	// 경우에 따라 직접적으로 만들어 줘야한다. 

	Knight knight2 = knight;	// 복사 생성자, Knight knight3(knight); 위에랑 똑같은 의미
	// 같은 pet1의 주소를 공유함

	Knight knight3;		// 기본 생성자
	knight3 = knight;	// 복사 대입 연산자
	// 같은 pet1의 주소를 공유함

// 포인터는 주소값 바구니 -> 주소값을 똑같이 복사 -> 동일한 객체를 가리킴

// Stack : Knight	[ _hp(200_, 0x1000(pet1의 주소) ] ---> Heap : (0x1000) [	Pet(pet1) ]
// Stack : Knight2	[ _hp(200_, 0x1000(pet1의 주소) ] ---> Heap : (0x1000) [	Pet(pet1) ]
// Stack : Knight3	[ _hp(200_, 0x1000(pet1의 주소) ] ---> Heap : (0x1000) [	Pet(pet1) ]

// Knight의 생성자와 소멸자에 _pet의 new와 delete를 넣어서 둘의 생명 주기를 똑같이 한 경우, 크래쉬가 발생함
// knight가 소멸하면서 pet1을 소멸시켰는데, knight2, knight3가 소멸하면서 이미 소멸한 pet1을 소멸시키려고 해서 더블 프리 문제 발생


// ----------------------------------------------------------------------------------------------------------------------------
// [2] 깊은 복사(Deep Copy)
// 멤버 데이터가 참조(주소) 값이라면, 데이터를 새로 만들어 준다. 즉, 원본 객체가 참조하는 대상까지 새로 만들어서 복사한다.
// 포인터는 주소값 바구니 -> 새로운 객체를 생성 -> 서로 다른 객체를 가리킴

// Stack : Knight	[ _hp(200_, 0x1000(pet1의 주소) ] ---> Heap : (0x1000) [	Pet(pet1) ]
// Stack : Knight2	[ _hp(200_, 0x2000(pet2의 주소) ] ---> Heap : (0x1000) [	Pet(pet2) ]
// Stack : Knight3	[ _hp(200_, 0x3000(pet3의 주소) ] ---> Heap : (0x1000) [	Pet(pet3) ]

// 실험) 
// - 암시적 복사 생성자의 과정
// 1) 부모 클래스의 복사 생성자 호출
// 2) 멤버 클래스( Pet _pet; O, Pet* _pet; X : 멤버 변수에서 직접 클래스를 만드는 것 )의 복사 생성자 호출
// 3) 멤버가 기본 타입일 경우 메모리 복사(얕은 복사)
// 
// - 명시적 복사 생성자의 과정 : (대부분 멤버 변수에 포인터가 있어서 얕은/깊은 복사를 고려해야 하는 경우)
// 1) 부모 클래스의 기본 생성자 호출 
// 2) 멤버 클래스의 기본 생성자 호출
// 
// - 암시적 복사 대입 연산자 과정
// - 명시적 복사 대입 연산자 과정



	return 0;
}