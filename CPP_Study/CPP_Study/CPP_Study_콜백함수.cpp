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
#include <string>
#include <cmath>
using namespace std;

// 콜백 함수

class Item
{
public:

public:
    int _itemID = 0;
    int _rarity = 0;
    int _ownerID = 0;
};

class FindByOwnerID // 함수 객체(functor)
{
public:
    bool operator()(const Item* item) // 값을 비교만 하지 수정할 것은 아니니까 const붙여줌
    {
        return (item->_ownerID == _ownerID);
    }

public:
    int _ownerID;
};

class FindByRarity
{
public:
    bool operator()(const Item* item) // 값을 비교만 하지 수정할 것은 아니니까 const붙여줌
    {
        return (item->_rarity >= _rarity);
    }

public:
    int _rarity;
};

//Item* Finditem(Item items[], int itemCount, bool(*func)(const Item*)) // Finditem은 ()을 인자로 Item 타입의 포인터를 반환한다.
//                                                                      // bool(*func)(const Item*) : 인자(const Item*) / 반환 bool
//                                                                      // 위의 인자/반환을 받으면 모두 func이라는 함수 포인터로 하겠다. 
//{
//    for (int i = 0; i < itemCount; ++i)
//    {
//        Item* item = &items[i];
//
//        // TODO : 조건체크
//
//        return item;
//    }
//
//    return nullptr;
//}

template<typename T>
Item* FindItem(Item items[], int itemCount, T selector) // 함수객체(functor) 템플릿 해버리기
{
    for (int i = 0; i < itemCount; ++i)
    {
        Item* item = &items[i];

        // TODO : 조건체크
        if (selector(item) /* 함수 객체이므로 함수처럼 씀*/)
        {
            return item;
        }
    }

    return nullptr;
}



int main()
{
    // 함수 포인터 + 함수 객체 + 템플릿
    // 콜백 (Callback) : 다시 / 역으로 호출

    // 어떤 상황이 일어나면, 이 기능을 호출해줘
    // ex) UI 스킬 버튼을 누르면 -> 스킬을 쓰는 함수를 호출

    Item items[10];
    items[3]._ownerID = 100;
    items[9]._rarity = 2;

    FindByOwnerID functor1; // 함수 객체 생성
    functor1._ownerID = 100;

    FindByRarity functor2;
    functor2._rarity = 1;

    Item* item1 = FindItem(items, 10, functor1);
    Item* item2 = FindItem(items, 10, functor2);




    return 0;
}