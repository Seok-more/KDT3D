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

	~Item()
	{
		cout << "~Item()\n";
	}

public:
	int _itemType = 0;
	int _itemDbId = 0;

	char _dummy[4096] = {}; // 정보들로 비대해짐

};

void TestItem(Item item)
{

}

void TestPtr(Item* item)
{

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



	

	return 0;
}