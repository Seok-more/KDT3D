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


// 함수 포인터


int Add(int a, int b)
{
    return a + b;
}

int Sub(int a, int b)
{
    return a - b;
}

class Item
{
public:
    Item() : _itemID(0), _rarity(0), _ownerID(0) // 기본생성자에 초기화 시키는 방법
    {

    }

public:
    int _itemID;
    int _rarity;
    int _ownerID;
};

//Item* FindItemByItemID(Item items[], int itemCount, int itemID) // int itemID 찾고자 하는 아이템의 ID
//{
//    for (int i = 0; i < itemCount; i++)
//    {
//        Item* item = &items[i];
//        // TODO by int itemID
//        if (item->_itemID == itemID)
//        {
//            return item;
//        }
//
//
//    }
//
//    return nullptr;
//}
//
//Item* FindItemByItemRarity(Item items[], int itemCount, int itemrarity) // int rarity로 찾고자... 너무 많이 반복된다~
//{
//    for (int i = 0; i < itemCount; i++)
//    {
//        Item* item = &items[i];
//        // TODO by itemrarity
//        if (item->_rarity == itemrarity)
//        {
//            return item;
//        }
//
//
//    }
//
//    return nullptr;
//}  너무 비효율적인 방법

// typedef bool(ITEM_SELECTOR)(Item* item); 인자: (Item* item), 반환 bool은 모두 ITEM_SELECTOR 라고 하겠다.  *A
//                                        , ITEM_SELECTOR* selector)    *A : 두 과정을 한번에 한 것이 bool(*selector)(Item* item)임  
Item* FindItem(Item items[], int itemCount, bool(*selector)(Item* item)) // bool()(Item* item) <- 시그니처 : 함수의 타입, (*selector) <- 포인터 표시와 인자로써의 함수 이름
{
    for (int i = 0; i < itemCount; i++)
    {
        Item* item = &items[i];

        // TODO 동작
        if (selector(item))
        {
            return item;
        }
        // TODO 동작
    }
    return nullptr;
}

bool IsRareItem(Item* item)
{
    // 인자 : Item* / 반환 : bool
    return item->_rarity >= 2;
}

bool IsOwnerItem(Item* item, int ownerID) // -> 이건 지금 시그니처가 달라서 FindItem과 호환이 안됨
{
    // 인자 : Item*, int / 반환 : bool
    return item->_ownerID == ownerID;
}


int main()
{
    int a = 10;

    // 바구니 주소
    // pointer [ 주소 ] -> 주소[    ]

    typedef int DATA; // int를 DATA라고 부르겠다. using DATA = int; 와 같은 의미

    // 1) 포인터           *
    // 2) 변수 이름        pointer
    // 3) 데이터 타입      int
    DATA* pointer = &a;

    // 함수
    //      [반환][함수타입][인자]
    typedef int(FUNC_TYPE)(int, int);
    // 시그니처 [반환]()[인자]

    // 1) 포인터           *
    // 2) 변수 이름        fn
    // 3) 데이터 타입      FUNC_TYPE(함수 : 인자는 int, int / 반환은 int)
    FUNC_TYPE* fn;

    // 함수 포인터
    fn = Add; // 시그니처(인자와 반환)이 같은 함수를 불러 올 수 있다.
    fn = Sub; // 이러면 아래에 있는애들 전부 한번에 바꿀 수 있지롱~

    // 함수의 이름은 함수의 시작 주소(배열과 유사)
    int result2 = fn(1, 2); // 기본 문법
    cout << result2 << endl;

    int result3 = (*fn)(1, 2); // 함수 포인터는 *(접근 연산자)가 붙어도 함수 주소! 즉, 위와 똑같음
    cout << result3 << endl;

    Item items[10] = {};
    items[3]._rarity = 2;
    Item* rareItem = FindItem(items, 10, IsRareItem);

    return 0;
}