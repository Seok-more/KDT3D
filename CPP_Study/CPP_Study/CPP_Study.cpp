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

// r-value reference, std::move

class Knight
{
public:

    void PrintInfo() const // read-only
    {
    }

public:
    int _hp = 100;
};

void TestKnight_Copy(Knight knight) // 임시 객체를 만들어서 값을 복사하기만 한거라 범위 넘어가면 임시 객체 사라지고 실제로 바뀌는건 아무것도 없죠
{

}

void TestKnight_LValueRef(Knight& knight) // 참조해서 실제 값을 바꿀 수 있음, 불필요한 복사 없음
{

}

void TestKnight_ConstLValueRef(const Knight& knight) // const는 값을 고치는 것이 아닌 '읽기' 위해서 갖다 쓰는거임
{
    knight.PrintInfo(); // 인자에 const가 붙으면, 이 함수는 '읽기' 전용이므로, const가 붙은 함수만 가져올 수 있다.
}

void TestKnight_RValueRef(Knight&& knight) // r-value를 받는 참조(&&가 한 문법표현임)
{
    
}

int main()
{
    // l-value vs r-value
    // - l-value : 단일식을 넘어서 계속 지속되는 개체, 주소를 갖을 수 있음
    // - r-value : l-value가 아닌 나머지 (임시 값, 열거형, 람다, i++ ...)

    int a = 3;
    a = 4;
    // 3 = a; 이거 안되잖아
    // (a++) = 5; 

    Knight k1;

    TestKnight_Copy(k1);
    TestKnight_LValueRef(k1); 
    // TestKnight_LValueRef(Knight()); // 이 안에있는 Knight()는 함수 호출이 끝남과 동시에 사라지는 임시 객체(r-value)라서 쓸데 없는 참조해서 값 고치게 막아둠
    TestKnight_ConstLValueRef(Knight()); // 이렇게 const가 붙으면 값을 읽기만 하므로 r-value라도 받아줌
    // TestKnight_RValueRef(k1); 왼값 못넣게 함
    TestKnight_RValueRef(Knight());  // 임시 객체는 넣어줌
    
    return 0;
}