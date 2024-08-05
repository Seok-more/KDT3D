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
using namespace std;

// list
// vector와 유사하게 배열의 형태임
// 하지만 vector : 동적 할당
// list : 노드

// vector : 동적 배열, 메모리 증설(더큰메모리새로할당,복사, 이전데이터삭제), 데이터연속배열...

// Node[    data(4byte) next(4byte:32bit / 8byte:64bit) <- 포인터니까     ]
class Node
{
public:
    Node* _next; // 다음에 갈 노드의 주소를 담은 '포인터'
    Node* _prev; // 이게 있으면 이중(양방향) 리스트가 되는겨
    int _data;
};




int main()
{
    // list (연결 리스트)
    // - list의 동작 원리
    // - 중간 삽입/삭제
    // - 처음/끝 삽입/삭제
    // - 임의 접근

    // list :( 단일 / 이중 / 원형 ) '연결' 리스트

    // 단일 : 노드[1]      ->   노드[2]   ->         노드[3]  ->   노드[4]  ->  노드[5]
    // 이중 : 노드[1]      <->  노드[2]   <->        노드[3]  <->  노드[4]  <-> 노드[5]
    // 원형 : 노드[1]      <->  노드[2]   <->        노드[3]  <->  노드[4]  <-> 노드[5] <-> 노드[1]

    list<int> li;

    for (int i = 0; i < 100; ++i)
    {
        li.push_back(i);
    }

    // li.push_front(10);  오 뭐야 이걸 지원하네? -> vector와는 다른 동작 원리
    int size = li.size();
    // li.capacity; 없음, 이건 동작 할당이 아니라 이런 개념이 없음
    int firstValue = li.front();
    int lastValue = li.back();
    // li[3] = 10; 없음, 임의 접근을 허용하지 않음

    list<int>::iterator itBegin = li.begin();
    list<int>::iterator itEnd = li.end();

    for (list<int>::iterator it = li.begin(); it != li.end(); ++it)
    {
        cout << *it << endl;
    }

    li.insert(itBegin, 100);

    li.erase(li.begin()/*, li.end()*/); // 보통 범위 삭제에 쓰이지 

    li.pop_front(); 

    li.remove(10); // 특정 값에 해당하는 데이터들 삭제



    

    
    return 0;
}