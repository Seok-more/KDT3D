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
using namespace std;

// map

class Player
{
public:
    Player() : _playerID(0)
    {

    }

    Player(int playerID) : _playerID(playerID)
    {

    }

public:
    int _playerID;
};

// vector, list의 치명적인 단점
    // -> 원하는 조건에 해당하는 데이터를 빠르게 찾을 수 없다.


    // vector<Player*> v;
    // 
    // // 10만명 입장
    // for (int i = 0; i < 100000; ++i)
    // {
    //     Player* p = new Player[i];
    //     v.push_back(p);
    // }
    // 
    // // 5만명 퇴장
    // for (int i = 0; i < 50000; ++i)
    // {
    //     int randIndex = rand() % v.size();
    // 
    //     Player* p = v[randIndex];
    //     delete p;
    // 
    //     v.erase(v.begin() + randIndex);
    // }
    // 
    // // Q) ID = 1만인 Player를 찾아주시오
    // // A)  0 1 2 5 12 .... 다 찾아봐야함
    // 
    // bool found = false;
    // 
    // for (int i = 0; i < v.size(); ++i)
    // {
    //     if (v[i]->_playerID == 10000)
    //     {
    //         found = true;
    //         break;              // 와 진짜 비효율
    //     }
    // }

    // vector, list의 치명적인 단점
    // -> 원하는 조건에 해당하는 데이터를 빠르게 찾을 수 없다.

// template<typename T1, typename T2>
// struct Pair  뭐 이런식으로 구현할 수 있다~
// {
// public:
// 
// public:
//     T1 _T1;
//     T2 _T2;
// 
// };



int main()
{
    // 연관 컨테이너
    // map : 균형 이진 트리(AVL)
    // - 노드 기반
    // 

    class Node
    {
    public:

    public:
        // 탐색을 위한 노드
        Node* _left;
        Node* _right;

        // 실질적인 데이터
        pair<int, Player*>_data;
        // int _key;
        // Player* _value;
    };


    // 대충 _key, _value가 int 형이라 가정
    // (key: 트리에서 어떤 노드에 저장되는지 결정하는 키 , value: 실질적으로 사용하는 값)
    map<int, int> m;

    // 10만명
    for (int i = 0; i < 100000; ++i)
    {
        // pair : 어떤 데이터 두개를 쌍으로 묶어줌

        m.insert(pair<int, int>(i, i * 100));
    }

    // 5만명쯤 퇴장
    for (int i = 0; i < 50000; ++i)
    {
        int randomValue = rand() % 50000;

        // Erase By key : 뭐 범위삭제도 iterator삭제도 있음 다양함
        m.erase(randomValue);
    }

    // Q) ID = 1만인 Player를 찾겠다.
    // A) 빠르죠
    srand(static_cast<unsigned int>(time(nullptr)));

    // map.erase()는 삭제 여부를 1/0으로 반환한다.
    // unsigned int count = 0;
    // count = m.erase(10000); // 삭제하면 1을 반환
    // count = m.erase(10000); // 삭제할게 없어서 0을 반환

    // map.insert()는 이미 값을 가진 key에는 insert할 수 없다.(버전은 여러개있음), 이것도 삽입에 성공하면 1, 아니면 0
    pair<map<int, int>::iterator, bool> ok;
    ok = m.insert(make_pair(1, 100)); // key:1에 value:100을 넣어라
    ok = m.insert(make_pair(1, 200)); // 이미 key:1에 값이 있으므로, 무시당함



    // map<int, int>::iterator findit = m.find(10000);
    // if (findit != m.end())
    // {
    //     cout << "찾음" << endl;
    // }
    // else
    // {
    //     cout << "못찾음" << endl;
    // }

    // map 순회
    for (map<int, int>::iterator it = m.begin(); it != m.end(); ++it)
    {
        pair<const int, int>& p = (*it); // 데이터 꺼내쓰기: key값이 안바뀌므로 const를 붙여야함

        int key = p.first;
        int value = p.second;
        // int key = it->first;
        // int key = it->second; 똑같은거

        // cout << key << " " << value << endl;
    }

    // 없으면 추가, 있으면 수정
    map<int, int>::iterator findit = m.find(10000);
    if (findit != m.end())
    {
        findit->second = 666;
    }
    else
    {
        m.insert(make_pair(10000, 100000));
    }

    // 없으면 추가, 있으면 수정2 
    m[5] = 500; // 5라는 key가 없으면 추가하고, 그 key의 value를 500으로 해라. key 5가 있다면, value를 500으로 수정해라

    // [] 연산자 주의점
    // 대입을 하지 않더라도(확인만 하더라도) (key/value)형태의 데이터(기본값으로)가 추가된다.
    // 그래서 확인은 .find()로 하자구
    m.clear();
    for (int i = 0; i < 10; ++i)
    {
        cout << m[i] << endl;
    }

    // 넣기(insert, [])
    // 빼기(erase)
    // 찾기(find, [])
    // 반복자( (map::iterator) (*it) (pair<key, value>) ) 


    return 0;
}