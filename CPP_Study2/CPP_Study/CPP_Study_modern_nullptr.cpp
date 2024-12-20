﻿// CPP_Study.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
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

// nullptr

// Modern C++ (C++11~)

class Knight
{
public:
    void Test()
    {

    }
};

Knight* FindKnight()
{

    return nullptr;
}

void Test(int a)
{
    cout << "Test(int)" << endl;
}

void Test(void* ptr)
{
    cout << "Test(*)" << endl;
}

// NullPtr 구현

const // 맨 아랫줄에 _NullPtr에 대한 const임
class NullPtr // <-이 NullPtr도 생략해도 됨
{
public:
    // 그 어떤 타입의 포인터와도 치환 가능
    template<typename T>
    operator T* () const
    {
        return 0;
    }

    // 그 어떤 타입의 멤버 포인터와도 치환 가능
    template<typename C, typename T>
    operator T C::* () const
    {
        return 0;
    }

private:
    void operator&() const; // 주소값 &을 막는다. &nullptr는 안되잖아 

} _NullPtr; // 클래스 선언하자마자 객체 1개를 만드는 방법

int main()
{
    int* ptr = _NullPtr;

    // 1) 오동작
    Test(0);    // 정수로봄
    Test(NULL); // 예도 정수임
    Test(nullptr);

    // 2) 가독성
    auto knight = FindKnight();
    if (knight == _NullPtr)
    {

    }

    void (Knight:: * memFunc)();
    memFunc = &Knight::Test;

    if (memFunc == _NullPtr)
    {

    }

    // nullptr_t whoami = nullptr;





    return 0;
}