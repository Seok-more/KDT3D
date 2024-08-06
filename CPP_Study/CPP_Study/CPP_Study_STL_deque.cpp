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
using namespace std;


// vector : 동적 배열, 캐퍼시티, 메모리 증설...
// list : 이중 연결 리스트, 노드...

// deque : double-ended queue 데크
// [            ] : vector와 비슷한 배열인데
// [            ] : 확장할 때, 메모리 상 떨어진 위치에 새로운 메모리를 확장함


int main()
{
    // 시퀀스 컨테이너(Sequence Container) : vector, list, deque
    // 데이터가 삽입 순서대로 나열되는 형태

    // deque<int> dq;
    // 
    // dq.push_back(1);
    // // dq.capacity(); 없죠잉
    // dq.push_front(2);
    // cout << dq[0] << endl;

    // vector와 마찬가지로 배열 기반 동작
    // 메모리 할당 정책이 다름

    // deque
    // [        ]
    // [        ]

    vector<int> v(3, 1);    // v [1 1 1] ------->   [       ] ...  [1 1 1 2]

    //                      [    3 3] 1동 몇호
    deque<int> dq(3, 1);    // dq[1 1 1 2] -------> [1 1 1 2] 2동 몇호 이런느낌...
    //                      [2      ]

    v.push_back(2);
    v.push_back(2); // 배열이 꽉차면 더 넓은 메모리를 할당해서 이동함, 이전 배열은 싹날려줌

    dq.push_back(2);
    dq.push_back(2);

    dq.push_front(3);
    dq.push_front(3); // 배열이 꽉차도 다른데에 추가 메모리를 만들어서 거기다가 넣어줌

    // - deque의 동작 원리   추가 배열을 만듬
    // - 중간 삽입/삭제 (BAD / BAD)
    // - 처음/끝 삽입/삭제 (GOOD / GOOD)
    // - 임의 접근 (GOOD)

    // 중간 삽입/삭제 : 1과 2 사이에 3을 넣겠다 : 이런 식으로 한칸씩 쫙 밀어주거나 당겨주는 과정이 발생함
    // [    3 3]           [    3 3]
    // [1 1 1 2]    ->     [1 1 1 3]
    // [2      ]           [2 2    ]

    // 임의 접근
    dq[3] = 10;
    cout << dq[3] << endl;

    deque<int>::iterator it;


    return 0;
}