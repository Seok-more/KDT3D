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


// 템플릿 기초2

// 템플릿 : 함수나 클래스를 찍어내는 틀
// 1) 함수 템플릿
// 2) 클래스 템플릿


template<typename T, int SIZE = 10> // typename T을 붙이면 '조커' (어떤 타입도 다 넣을 수 있음)
// 그런데 무조건 typename을 붙여야 하는 것은 아니다, int SIZE처럼 지정한 타입을 받아 줄 수 도 있음
// 심지어 = 10 처럼 초기값도 정해줄 수 있음
// 즉, template<  > 안에 들어가는건 [골라줘야 하는 목록]

class RandomBox
{
public:
    T GetRandomData()
    {
        int idx = rand() % SIZE;
        return _data[idx];
    }

public:
    T _data[SIZE];
};

// 템플릿 특수화
template<int SIZE>      // template 특수화에서는 = 10 같은 초기값을 넣어줄 수 없음 
class RandomBox<double, SIZE>
{
public:
    double GetRandomData()
    {
        cout << "RB Double\n";
        int idx = rand() % SIZE;
        return _data[idx];
    }

public:
    double _data[SIZE];
};


int main()
{
    srand(static_cast<unsigned int>(time(nullptr)));

    RandomBox<int, 10> rb1;
    for (int i = 0; i < 10; ++i)
    {
        rb1._data[i] = i;
    }
    int value1 = rb1.GetRandomData();
    cout << value1 << endl;


    RandomBox<int, 20> rb2;
    for (int i = 0; i < 20; ++i)
    {
        rb2._data[i] = i;
    }
    int value2 = rb2.GetRandomData();
    cout << value2 << endl;

    // 일반 함수는 RandomBox<int, 10>, RandomBox<int, 20> 인자값이 달라져도 하나의 함수에서 나오는 반면
    // 함수 템플릿은 RandomBox<int, 10>, RandomBox<int, 20> 아예 다른 클래스로 독립적으로 존재
    // rb1 = rb2; 불가능

    RandomBox<double, 10> rb3;
    for (int i = 0; i < 10; ++i)
    {
        rb3._data[i] = i;
    }
    int value3 = rb3.GetRandomData();
    cout << value3 << endl;

    return 0;
}