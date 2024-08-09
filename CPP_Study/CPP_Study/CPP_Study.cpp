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
#include <list>
#include <deque>
#include <map>
#include<set>
using namespace std;

// 람다 lambda

// 함수 객체(functor)를 빠르게 만드는 문법

enum class ItemType
{
    None,
    Armor,
    Weapon,
    Jewel,
    Consumable
};

enum class Rarity
{
    Common,
    Rare,
    Unique
};

class Item
{
public:
    Item(){}
    Item(int itemID, Rarity rarity, ItemType itemtype)
        : _itemID(itemID), _rarity(rarity), _itemtype(itemtype){}



public:
    int _itemID = 0;
    Rarity _rarity = Rarity::Common;
    ItemType _itemtype = ItemType::None;
};

int main()
{
    vector<Item> v;
    v.push_back(Item(1, Rarity::Common, ItemType::Weapon)); // 여기서 push_back이 오른값참조(move)로 임시객체Item을 v에 이동해주는중임
    v.push_back(Item(2, Rarity::Common, ItemType::Armor));
    v.push_back(Item(3, Rarity::Rare, ItemType::Jewel));
    v.push_back(Item(4, Rarity::Unique, ItemType::Weapon));

    // 람다 : 함수객체(functor)를 쉽게 만들기
    {
        struct IsUnique
        {
            bool operator()(Item& item)
            {
                return(item._rarity == Rarity::Unique);
            }
        };

        struct FindItemByitemID
        {
            FindItemByitemID(int itemid)
            {
                _itemid = itemid;
            }

            bool operator()(Item& item, int id)
            {
                return(item._itemID == id);
            }

            int _itemid;
        };

        // 클로저(Closure) : 람다에의해 만들어진 실행시점의 객체
        // 위의 IsUnique와 똑같은 것          아래의 방법으로 반환 형식을 고정 할 수 있다 근데 굳이여
        auto IsUniqueLambda = [](Item& item) /* -> int */ {return(item._rarity == Rarity::Unique); }; 


        // auto findit = std::find_if(v.begin(), v.end(), IsUniqueLambda); 아래처럼 덩어리로 넣어도 되고
        auto findit = std::find_if(v.begin(), v.end(), [](Item& item){return(item._rarity == Rarity::Unique); });
        if (findit != v.end())
        {
            cout << format("ItemID : {}", findit->_itemID) << endl;
        }

    }



    return 0;
}