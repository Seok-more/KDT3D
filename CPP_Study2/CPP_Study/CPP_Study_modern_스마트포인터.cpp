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

// 스마트 포인터

// class Knight // shared ptr 직접 구현 버전
// {
// public:
//     Knight()
//     {
//         cout << "Knight 생성\n";
//     }
// 
//     ~Knight()
//     {
//         cout << "Knight 소멸\n";
//     }
// 
// public:
//     void Attack()
//     {
//         if (_target)
//         {
//             _target->_hp -= _damage;
//             cout << "타켓HP : " << _target->_hp << endl;
//         }
// 
//     }
// 
// 
// public:
//     int _hp = 100;
//     int _damage = 10;
//     Knight* _target = nullptr;
// };

class Knight
{
public:
    Knight()
    {
        cout << "Knight 생성\n";
    }

    ~Knight()
    {
        cout << "Knight 소멸\n";
    }

public:
    void Attack()
    {
        if (_target.expired() == false)
        {
            shared_ptr<Knight> sptr = _target.lock(); // weak ptr로 정의된 Knight _target을 shard ptr로 변환해 뱉어줌
            sptr->_hp -= _damage;
            cout << "타켓HP : " << sptr->_hp << endl;
        }

    }


public:
    int _hp = 100;
    int _damage = 10;
    // shared_ptr<Knight> _target = nullptr;
    weak_ptr<Knight> _target;
};


class RefCountBlock
{
public:
    int _refCount = 1;
    int _weakCount = 1;
};



template<typename T>
class SharedPtr
{
public:
    SharedPtr() {}
    SharedPtr(T* ptr) : _ptr(ptr)
    {
        if (_ptr != nullptr)
        {
            _block = new RefCountBlock;
            cout << "RefCount : " << _block->_refCount << endl;

        }
    }
    SharedPtr(const SharedPtr& sptr) : _ptr(sptr._ptr), _block(sptr._block)
    {
        if (_ptr != nullptr)
        {
            ++_block->_refCount;
            cout << "RefCount : " << _block->_refCount << endl;

        }
    }

    ~SharedPtr()
    {
        if (_ptr != nullptr)
        {
            --_block->_refCount;
            cout << "RefCount : " << _block->_refCount << endl;

            if (_block->_refCount == 0)
            {
                delete _ptr;
                // delete _block;

                cout << "Delete Data" << endl;

            }
        }
    }

    void operator=(const SharedPtr& sptr)
    {
        _ptr = sptr._ptr;
        _block = sptr._block;

        if (_ptr != nullptr)
        {
            ++_block->_refCount;
            cout << "RefCount : " << _block->_refCount << endl;

        }
    }

public:
    T* _ptr = nullptr;
    RefCountBlock* _block = nullptr;
};


int main()
{
    // Knight* k1 = new Knight();
    // Knight* k2 = new Knight();
    // 
    // k1->_target = k2;
    // 
    // //delete k2;
    // 
    // k1->Attack();   // 에러!
//----------------------------------------------------------------------------------------------------------------

    // 스마트 포인터 : 포인터를 알맞는 정책에 따라 관리하는 객체 (포인터를 래핑해서 사용)
    // shared_ptr, weak_ptr, unique_ptr

    // SharedPtr<Knight>k3; // shared ptr 직접 구현 버전
    // 
    // {
    //     SharedPtr<Knight>k1(new Knight()); // sharedPtr이 Knight를 관리하는 주체가 됨
    //     k3 = k1;
    //     cout << "----------------------------------------------------------------------------------" << endl;
    // }

//----------------------------------------------------------------------------------------------------------------

    // k1 [ ref_count  = 1  ]
    // k2 [ ref_count  = 1  ]
    shared_ptr<Knight> k1 = make_shared<Knight>();
    shared_ptr<Knight> k2 = make_shared<Knight>();

    {
        // k1 [ ref_count  = 2  ]                                                              // k1 [ ref_count  = 1  ]
        // k2 [ ref_count  = 2  ] 서로가 주시하고 있기에 + 1 씩 ref됨 *A target을 weak로 하면     // k2 [ ref_count  = 1  ] 
        k1->_target = k2;
        k2->_target = k1;
    }
    k1->Attack();

    // k1 [ ref_count  = 1  ]                                                       // k1 [ ref_count  = 0  ]
    // k2 [ ref_count  = 1  ] 아직 소멸이 되지않음        *A target을 weak로 하면     // k2 [ ref_count  = 0  ]


    // // k1 [ ref_count  = 0  ]
    // // k2 [ ref_count  = 0  ] 밀어주는 과정
    // k1->_target = nullptr;
    // k2->_target = nullptr;

//----------------------------------------------------------------------------------------------------------------
    unique_ptr<Knight> uptr = make_unique<Knight>();
    // unique_ptr<Knight> uptr2 = uptr; 불가능 : Unique는 오직 한개만 존재
    unique_ptr<Knight> uptr2 = move(uptr); // 옮길꺼면 이렇게 아예 이동 시켜야함





    return 0;
}