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


// 템플릿 기초

class Knight
{

public:

public:
    int _hp = 100;

};


// 기존 방법 : 함수 오버 로딩
void Print(int a)
{
    cout << a << endl;
}

void Print(float a)
{
    cout << a << endl;
}

void Print(const char* a)
{
    cout << *a << endl;
}


// 템플릿 문법
template<typename T> // 하나라도 쓰는 순간, 컴파일 순간 컴파일러가 모든 버전을 만들어 주는 것임, 버전마다 주소도 다름, 꼭 T일 필욘없음
// template<class T> // 이렇게 써도 되긴함 취향 문제임, 근데 이렇게 쓰면 class를 진짜 넣어줘야 할것 샅아서..뭔가 헷갈림 
void Print(T a)
{
    cout << a << endl;
}

// 템플릿 특수화
// - 템플릿의 특정 상황에서만 이렇게 쓰라고 특별히 명시하는 거
template<>
void Print(Knight a)
{
    cout << "Knight!!!!!\n";
    cout << a._hp << endl;
}


template<typename T> // 같은 인자가 여러개 들어가도 괜찮음
T Add(T a, T b)
{
    return a + b;
}

template<typename T1, typename T2> // 다른 인자가 여러개 들어가도 괜찮음
void Print(T1 a, T2 b)
{
    cout << a << "  " << b << endl;
}

// 연산자 오버로딩 (전역함수 버전) -> 이것도 가능하지만 템플릿을 활용하면? -> 템플릿 특수화
ostream& operator<<(ostream& os, const Knight& k)
{
    os << k._hp;
    return os;
}



int main()
{
    // 템플릿 : 함수나 클래스를 찍어내는 틀
    // 1) 함수 템플릿
    // 2) 클래스 템플릿

    Print(50);
    Print(50.1f);
    Print("a");     // 이걸 매번 반복.. -> 오버로딩된 함수의 '인자부분'만 조커 처럼 바꿀 수 있지 않을까? -> 템플릿

    Print(50);
    Print(50.1f);
    Print("a");

    Print<int>(50); // 명시적으로 지정도 해줄 수 있음
    Print<int>(50.1f); // 50

    int result1 = Add(1, 2);
    float result2 = Add(1.3f, 2.3f);

    Print("Hello", 100);
    Print("\"\'\\", "이렇게 애매한 애들은 앞에 \\ 붙이셈");

    Knight k1;
    // Print(k1); 오류 : 이항 '<<': 오른쪽 피연산자로 'T' 형식을 사용하는 연산자가 없거나 허용되는 변환이 없습니다. 
    //                           : Print 안에 기본적인 cout << 여기에 class를 못넣잖아 -> cout(ostrem)의 연산자를 오버로딩하자

    Print(k1);




    return 0;
}