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

// 타입 변환_포인터

// 살면서 참조 타입 변환은 써본적이 없음
// 근데 포인터 타입 변환은 개많이 씀

class Knight
{
public:
	int _hp = 0;
};


class Item
{
public:
	Item()
	{
		cout << "Item()\n";
	}

	Item(const Item& Item) // 자신의 클래스를 참조해서 받는 복사 생성자
	{
		cout << "Item(const Item&)\n";
	}

	Item(int itemType) : _itemType(itemType)
	{
		cout << "Item(int itemType)\n";
	}

	virtual ~Item()	// 상속 관계에서 최상위 부모의 소멸자에는 꼭 virtual을 붙여서 자식들을 부모로 캐스팅하더라도 각자 소멸자를 잘 부르도록 하자
	{
		cout << "~Item()\n";
	}

	virtual void Test()
	{
		cout << "Test Item\n";
	}

public:
	int _itemType = 0;
	int _itemDbId = 0;

	char _dummy[4096] = {}; // 정보들로 비대해짐

};

enum ItemType
{
	IT_WEAPON = 1,
	IT_ARMOR = 2
};

class Weapon : public Item
{
public:

	Weapon() : Item(IT_WEAPON)
	{

		cout << "Weapon\n";
		_damage = rand() & 100;
	}

	virtual ~Weapon()
	{
		cout << "~Weapon\n";
	}

	virtual void Test() // 함수 재정의 한거죠
	{
		cout << "Test Weapon\n";
	}

public:
	int _damage = 0;
};

class Armor : public Item
{
public:
	Armor() : Item(IT_ARMOR)
	{

		cout << "Armor\n";
	}

	virtual ~Armor()
	{
		cout << "~Armor\n";
	}

public:
	int _defence = 0;

};


void TestItem(Item item)
{

}

void TestPtr(Item* item)
{
	item->Test();	// 이 경우, 원본은 모르겠고 니가 보내준게 Item*타입이니까, Test()도 Item꺼 쓸께~ / 근데  Item의 Test()가 virtual이면 자식꺼 찾아서 해주겠지
}

int main()
{
	// 복습
	{
		// stack [ type(4) dbid(4) dummy(4096)	]
		// 포인터의 지역 변수 안에서 item이 실제로 생성
		Item item;

		// stack [  주소(8) ] -> Heap 주소 [ type(4) dbid(4) dummy(4096)	]
		Item* item2 = new Item();

		// item은 범위를 벗어나는 순간 소멸자를 호출하지만
		// item2는 범위를 벗어나도 Heap에 있는 실제 item2은 소멸자를 호출하지 않는다


		TestItem(item);	// 복사 생성자 호출(원본을 복사해서 넘겨줬슴)
		TestItem(*item2); // 복사 생성자 호출(원본을 복사해서 넘겨줬슴)
		TestPtr(&item); // 생성자 호출X : 그냥 주소값만 갖고오는거니께
		TestPtr(item2);

		// - 메모리 누수 발생 : 점점 가용 메모리가 줄어들어서 크래시가 남
		delete item2;

	}

	// 배열
	{
		cout << "---------------------------------" << endl;

		// 진짜 아이템 100개가 스택메모리에 올라가있음, item생성자 100번호출
		Item item3[100] = {};

		cout << "---------------------------------" << endl;

		// 진짜 아이템이 1개도 없을 수 있음, item생성자 호출 안함
		// 아이템을 가리키는 바구니가 100개 있는거
		Item* item4[100] = {};

		// 이제야 Heap 주소에 아이템을 만듬
		for (int i = 0; i < 100; ++i)
		{
			item4[i] = new Item();
		}
		cout << "---------------------------------" << endl;

		// Heap은 수동으로 해제해줘야지
		for (int i = 0; i < 100; ++i)
		{
			delete item4[i];
		}
		cout << "---------------------------------" << endl;

	}

	// 연관성이 없는 클래스 사이의 포인터 변환 테스트
	{
		// Stack[ 주소 ] -> Heap[ _hp(4) ]
		Knight* knight = new Knight();


		// Stack[ 주소 ] -> Heap[ _hp(4) ] 
		// Item* item = (Item*)knight; // 암시적으로는 오류지만, 명시적으로는 통과 : item포인터의 주소를 타고 가면 Item이 있을꺼야! 라고 주장중임
		// item->_itemType = 2;		// 여기까지는 Knight도 4바이트를 갖고 있어서 값이 들어가지만
		// item->_itemDbId = 3;		// 여기부터는 Knight의 범위를 넘어섰으므로 메모리를 오염시킴, 근데 크래쉬도 안남;;
		// delete knight;				// heap에 뭔가 잘못됨을 느끼고 에러를 내주지만 안내줄수도있음;;

	}

	// 부모 -> 자식 변환 테스트
	{
		Item* item = new Item();

		// Weapon* weapon = item; 오류남: 모든 아이템은 무기다 x : 아이템을 무기로 변환하는 것은 무리무리(메모리가 작은것에서 큰거로 변환)
		Weapon* weapon = (Weapon*)item; // 명시적으로 땡깡 부리면 가능
		// weapon->damage = 10; 메모리를 초과해서 오염 중
		delete item;

	}

	// 자식 -> 부모 변환 테스트
	{
		Weapon* weapon = new Weapon();

		Item* item = weapon; // 암시적으로도 가능, 모든 무기는 아이템이다 o : 무기를 아이템으로 변환하는 것은 가능

		delete weapon;
	}

	// 명시적으로 타입 변환할 때는 항상 조심해야함
	// 암시적으로 될 때는 안전한가?
	// -> 평생 명시적으로 캐스팅(타입변환) 안하면 되는거 아님?

	Item* inventory[20] = {};

	srand((size_t)time(nullptr));

	for (int i = 0; i < 20; ++i)
	{
		int randValue = rand() % 2; // 0 ~ 1

		switch (randValue)
		{
		case 0:
			inventory[i] = new Weapon();	// !
			break;
		case 1:
			inventory[i] = new Armor();
			break;
		}
	}

	for (int i = 0; i < 20; ++i)
	{
		Item* item = inventory[i];
		if (item == nullptr)
		{
			continue;
		}

		if (item->_itemType == IT_WEAPON)
		{
			Weapon* weapon = (Weapon*)item; // 지금 이 경우는 원래 원본이 Weapon이였으니까(!부분 참고) 안전하지만, 다른 경우에는 위험한 캐스팅
			// cout << format("Weapon Damage : {}", weapon->_damage) << endl;
			cout << "Weapon Damage : " << weapon->_damage << endl;
		}

	}

	//	--------------------------------------매우 중요------------------------------------------------
	for (int i = 0; i < 20; ++i)
	{
		Item* item = inventory[i];
		if (item == nullptr)
		{
			continue;
		}
		// delete item; // 모든 애들을 Item의 소멸자로만 호출하고 있음, 근데 원본이 Weapon이였으니까 사실 Weapon의 소멸자가 먼저 호출되었어야 함


		// if (item->_itemType == IT_WEAPON)
		// {
		// 	Weapon* weapon = (Weapon*)item; // !
		// 	delete weapon;
		// }
		// else
		// {
		// 	Armor* armor = (Armor*)item;	// ! 두 경우, 원본을 item으로 캐스팅한 후, 삭제하여 메모리 누수를 막음, 근데 번거롭
		// 	delete armor;
		// }

		delete item; // 소멸자들이 virtual이 되어서 먼저 각 자식들(weapon, armor)의 소멸자를 알아서 불러오고 부모(item) 소멸자도 잘 부름

		// [결론]
		// - 포인터 vs 일반 타입 : 차이를 이해
		// - 포인터 사이의 타입 변환(캐스팅)을 할 때는 매우 조심하자. 특히 명시적으로 할 때는 조심하자 
		// -- 여러 클래스를 최상위 타입으로 바꿔서 저장하고 싶을 때(자식을 부모로 바꾸고, 그 바뀐 애를 다시 자식으로 돌려보내는 과정)
		// - 부모/자식 관계에서 부모 클래스의 소멸자에는 반드시 virtual을 붙이자!! 
		// -- 왜냐면 자식을 부모로 캐스팅한 상태에서 소멸자를 부르면, 원본과는 상관없이 부모의 소멸자만 호출되서 사라지고, 자식의 메모리는 아직 살아있기 때문에
		// --- 부모 클래스 소멸자가 virtual이 되면 자식들의 소멸자를 virtual table에서 잘 골라서 불러주기 때문이다.


	}





	return 0;
}