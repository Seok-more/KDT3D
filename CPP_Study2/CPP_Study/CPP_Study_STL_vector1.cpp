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
using namespace std;

// vector


// STL(Standard Template Library
// 프로그래밍할 때 칠요한 자료구조/알고리즘을 템플릿으로 제공하는 라이브러리

// 컨테이너(Container) : 데이터를 저장하는 객체 (자료구조:Data Structure)

// vector (동적 배열) : 템플릿의 일종
// - vector의 동작 원리 (size/capacity)
// - 중간 삽입/삭제
// - 처음/끝 삽입/삭제
// - 임의 접근

int main()
{
    // 배열 : 메모리가 고정적이라 좀 곤란하쥬
    const int MAX_SIZE = 10;
    int arr[MAX_SIZE] = {};

    for (int i = 0; i < MAX_SIZE; ++i)
    {
        arr[i] = i;
    }

    for (int i = 0; i < MAX_SIZE; ++i)
    {
        // cout << arr[i] << endl;
    }

    //----------------------------------------------------------------------------------------------------------------------------------
    // 동적 배열

    // 1) (여유분을 두고) 메모리를 할당한다.
    // 2) 여유분까지 꽉 차면, 메모리를 증설한다.(한번만든 영역을 늘릴수는 없지만, 기존에 만든 영역을 삭제하고 그것을 포함한 더 큰 영역을 할당하면 증설임)

    // Q1) 여유분은 어느정도인가? 
    // Q2) 증설은 어느정도인가?
    // Q3) 기존의 데이터를 어떻게 처리하는가?
    // 
    // - 동적배열도 배열인지라, 연속적으로 메모리를 쓰는데, 증설하려고 하는 위치에 이미 다른 데이터가 있는 경우를 대비해서,
    // - 증설할때면, 기존의 데이터까지 다 복사해서 새로운 더 넓은 메모리(1.5배)를 잡아서 옮겨준다.


    vector<int> v(500, 0); // 사이즈가 유동적으로 바뀜, 처음부터 사이즈를 초기화 해줄 수 도 있음
    //           v(초기사이즈, 모든데이터의 초기값)

    vector<int> v2 = v;    // v의 초기값도 포함해서 v2로 복사

    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // v.push_back(5);

     // v.size()     : 실제 사용 데이터 개수
     // v.capacity   : 여유분을 포함한 용량 개수, c++에서 capacity는 한번 잡아두면 줄어들지 않는다. 지우면 지웠지

     // const int Size = v.size();  // 조건문 밖에 먼저 해두는게 좋다. 조건문 안에 해두면 매번 확인해야 하니까
     // for (int i = 0; i < Size; ++i)
     // {
     //     cout << v[i] << endl;
     // }

    v.resize(1000); // 처음부터 size를 1000개 잡고 시작, 그에따라 capacity도 1000개 잡힘
    cout << v.size() << " " << v.capacity() << endl;

    //v.reserve(1000); // 처음부터 capacity 용량을 1000개 잡고 시작 : 캐퍼시티를 안잡아두면 초반에 증설 할때마다 잦은 복사가 이뤄져서 낭비가 심함
    //                                                              1, 2, 3, 4, 6, 9 ... 초반에 너무 자주 복사남  

    for (int i = 0; i < 1001; ++i)
    {
        v.push_back(100);  // vector size 뒤에 데이터를 더해주는 느낌이라, 이 경우 1001부터 들어감           
        v[i] = 100; // 이렇게 해야 1000번까지 채워주는거
        cout << v.size() << " " << v.capacity() << endl;    // 실제 데이터는 1씩증가하지만, 여유분은 1.5배씩 증가함(컴파일러마다 다름)

    }

    v.front();// 맨 앞에 있는 데이터 확인
    v.back(); // 마지막에 있는 데이터 확인
    v.pop_back(); // 마지막에 있는 데이터 빼내기


    v.clear(); // vector의 내용 전부 삭제
    cout << v.size() << " " << v.capacity() << endl;    // size = 0, capacity = 2250
    vector<int>().swap(v);                              // size = 0, capacity = 0, 임시 벡터와 원래있던 벡터를 스왑해서
    // capacity를 0으로 만들고 임시벡터는 범위가 끝나면 소멸해서 메모리가 해제됨, 사실 잘 안씀








    return 0;
}