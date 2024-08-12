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


// 함수 객체


void HelloWorld()
{
    cout << "Hello World" << endl;
}

void HelloNumber(int Number)
{
    cout << "Hello Number" << Number << endl;
}

class Knight
{
public:
    void AddHp(int addHP)
    {
        _hp += addHP;
    }

private:
    int _hp = 100; // 이게 상태라고 볼 수 있음
};


class Functor
{
public:
    void operator()()
    {
        cout << "Functor Test" << endl;
        cout << _value << endl;
    }

    bool operator()(int num)
    {
        cout << "Functor Test2" << endl;
        _value += num;
        cout << _value << endl;

        return 1;
    }


private:
    int _value = 0;
};

class MoveTask
{
public:
    void operator()()
    {
        //TODO
        cout << "해당 좌표로 플레이어 이동" << endl;
    }

public:
    int _ID;
    int _posX;
    int _posY;
};


int main()
{
    // 함수 객체 (Functor) : 함수처럼 동작하는 객체

    // 함수 포인터 선언 

    void (*pfunc)(void);

    pfunc = &HelloWorld;
    (*pfunc)(); // HelloWorld();

    // 함수 포인터의 단점
    // 1) 동일한 시그니처가 아니면 사용할 수 없다. : pfunc = &HelloNumber; 불가능
    // 2) 상태를 가질 수 없다. 상태 : 함수에 저장되는 값(멤버 변수)

    // [함수처럼 동작]하는 객체
    // () 연산자 오버로딩
    HelloWorld();

    Functor functor; // 클래스를 사용해서 상태(_value)도 갖고 있으면서, 함수처럼 호출할 수 있음
    functor();
    functor(40);
    bool ret = functor(30);

    // MMO에서 함수 객체를 사용하는 예시
    // 클라 <-> 서버
    // 서버 : 클라가 보내준 네트워크 패킷을 받아서 처리
    // ex) 클라 : 나 (5, 0) 좌표로 이동시켜줘!

    MoveTask task;
    task._ID = 100;
    task._posX = 5;
    task._posY = 3;

    // 나중에 여유 될 대 일감을 실행한다
    task();

    return 0;
}