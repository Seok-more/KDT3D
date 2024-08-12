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

// auto

// Modern C++ (C++11~)

class Knight
{
public:

public:
    int _hp;

};


template<typename T>
void Print(T t)
{
    cout << t << endl;
}


int main()
{
    // int a = 3;
    // float b = 3.14f;
    // double c = 1.23;
    // Knight d = Knight();
    // const char* e = "ssss";

    auto a = 3;
    auto b = 3.14f;
    auto c = 1.23;
    auto d = Knight();
    auto e = "ssss";

    // auto는 일종의 조커카드 == 형식 연역(type deduction)
    // template 처럼~
    Print(1); // Print<int>(1);
    Print("good"); // Print<const char*>("good");

    // 추론 규칙은 생각보다 복잡해질 수 있다.
    auto f = &d;
    const auto test1 = b;
    auto* test2 = e;
    // auto* test2 = a; 이건 에바여~

    // 주의!
    // 기본 auto는 const, & 무시!!!!!!!!!!!!!!!!!!
    int& refernce = a;
    const int cst = a;

    auto test1 = refernce; // int test1가 돼있네?
    auto test2 = cst;      // int test2가 돼있네?

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    // for (vector<int>::size_type i = 0; i < v.size(); ++i)
    // {
    //     int& data = v[i];
    // 
    //     data = 100;
    // }

    // for (vector<int>::size_type i = 0; i < v.size(); ++i)
    // {
    //     auto data = v[i]; // const,&무시 -> int data가 되있네 ->복사만해서 값이 안바뀌어있어
    // 
    //     data = 100;
    // }

    for (vector<int>::size_type i = 0; i < v.size(); ++i)
    {
        auto& data = v[i];

        data = 100;
    }
    // auto만 쓸래용~~~ -> 절대그러지마!
    // 타이핑이 길어지는 경우 쓰셈 -> 가독성을 위해서 여부를 잘 따지셈

    map<int, int> m;
    auto ok = m.insert(make_pair(1, 100)); // insert에 커서 대보면 반환값이 겁나 복잡

    // for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
    // {
    //     cout << *it << endl;
    // }

    for (auto it = v.begin(); it != v.end(); ++it)
    {
        cout << *it << endl;
    }



    return 0;
}