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
    Item() {}
    Item(int itemID, Rarity rarity, ItemType itemtype)
        : _itemID(itemID), _rarity(rarity), _itemtype(itemtype) {}



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

        struct FindItemUlti
        {
        public:
            FindItemUlti(int itemID, Rarity rarity, ItemType type)
                : _itemID(itemID), _rarity(rarity), _itemtype(type)
            {

            }

        public:
            bool operator()(Item& item)
            {
                return(item._itemID == _itemID && item._rarity == _rarity && item._itemtype == _itemtype);
            }

        public:
            int _itemID;
            Rarity _rarity;
            ItemType _itemtype;
        };

        // 클로저(Closure) : 람다에의해 만들어진 실행시점의 객체
        // []캡쳐 : 함수 객체 내부에 변수를 저장하는 개념과 유사
        // 기본 캡처 모드 : 모든 값(복사) 방식(=) 
        // 다른 캡처 모드 : 참조(&) 방식 : 함수 객체 안, 모든 멤버 변수, 변수들에 참조값을 붙였다고 생각
        // 명시 캡처 모드** : 캡처할 변수들을 명시

        auto IsUniqueLambda = [](Item& item) /* -> int */ {return(item._rarity == Rarity::Unique); };
        int itemID = 4;
        auto finditID = std::find_if(v.begin(), v.end(), [itemID](Item& item) {return (item._itemID == itemID); });
        if (finditID != v.end())
        {
            cout << format("ItemID : {}", finditID->_itemID) << endl;
        }



        // auto findit = std::find_if(v.begin(), v.end(), IsUniqueLambda); 아래처럼 덩어리로 넣어도 되고
        auto findit_Uni = std::find_if(v.begin(), v.end(), [](Item& item) {return(item._rarity == Rarity::Unique); });
        if (findit_Uni != v.end())
        {
            cout << format("Unique_ItemID : {}", findit_Uni->_itemID) << endl;
        }



        auto findByItemIDLambdaV = [=](Item& item) {return (item._itemID == itemID); };
        auto findByItemIDLambdaR = [&](Item& item) {return (item._itemID == itemID); };
        auto findByItemIDLambdaS = [/*&*/itemID](Item& item) {return (item._itemID == itemID); };
        //  이렇게 명시할때도, 그냥 하면 복사, &붙이면 참조가 된다.

        itemID = 10;

        auto finditV = std::find_if(v.begin(), v.end(), findByItemIDLambdaV); // 캡처 할 당시는 itemID = 4이라고 복사를 해둠
        auto finditR = std::find_if(v.begin(), v.end(), findByItemIDLambdaR); // 참조 값(실제 주소값)을 받아서, itemID = 10이라고 봄
        auto finditS = std::find_if(v.begin(), v.end(), findByItemIDLambdaS); // 참조 값(실제 주소값)을 받아서, itemID = 10이라고 봄


        if (finditV != v.end())
        {
            cout << format("IDV_ItemID : {}", finditV->_itemID) << endl;

        }

        if (finditR != v.end())
        {
            cout << format("IDR_ItemID : {}", finditR->_itemID) << endl;

        }

        if (finditS != v.end())
        {
            cout << format("IDR_ItemID : {}", finditS->_itemID) << endl;

        }

        itemID = 4;
        Rarity rarity = Rarity::Unique;
        ItemType itemtype = ItemType::Weapon;

        auto finditU = std::find_if(v.begin(), v.end(), FindItemUlti(4, Rarity::Unique, ItemType::Weapon));

        if (finditU != v.end())
        {
            cout << format("IDU_ItemID : {}", finditU->_itemID) << endl;

        }

        auto findByItemIDLambdaU = [itemID, &rarity, &itemtype](Item& item)
            {
                return(item._itemID == itemID && item._rarity == rarity && item._itemtype == itemtype);
            };


        auto finditU2 = std::find_if(v.begin(), v.end(), findByItemIDLambdaU);

        if (finditU2 != v.end())
        {
            cout << format("IDU2_ItemID : {}", finditU2->_itemID) << endl;

        }


    }



    return 0;
}