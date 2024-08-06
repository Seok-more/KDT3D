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
    // - 중간 삽입/삭제    [GOOD/GOOD]
    // - 처음/끝 삽입/삭제 [GOOD/GOOD]
    // - 임의 접근

    // list :( 단일 / 이중 / 원형 ) '연결' 리스트
    // -> 이 화살표 포인터로 서로 연결되있는 상태임
    // 필요할때마다, 새로 노드를 추가해서 확장하는 방법(capacity가 없음)

    // 단일 : 노드[1]   ->   노드[2]   ->  노드[3]  ->   노드[4]  ->  노드[5]
    // 이중 : 노드[1]   <->  노드[2]   <-> 노드[3]  <->  노드[4]  <-> 노드[5] <-컴파일러가만듬-> 더미노드[My_head : end()] <-> 노드[1] 근데 이게 컴파일러가 잡아주려고 한거지, 실제로 이렇게 움직이지는 못하게 막아둠 
    // 원형 : 노드[1]   <->  노드[2]   <-> 노드[3]  <->  노드[4]  <-> 노드[5] <-> 노드[1]

    list<int> li;

    list<int>::iterator itRemember;

    for (int i = 0; i < 100; ++i)
    {
        if (i == 50) // *C 50번째만 
        {
            itRemember = li.insert(li.end(), i); // 리스트 마지막값에 50을 넣어둘건디
            // 그 인서트한 위치를 반환해주고 그걸 itRemember에 넣음
            // 즉, 50번째 반환자의 위치를 기억해둠
        }
        else
        {
            li.push_back(i);
        }
    }

    // li.push_front(10);  오 뭐야 이걸 지원하네? -> vector와는 다른 동작 원리
    int size = li.size();
    // li.capacity; 없음, 이건 동작 할당이 아니라 이런 개념이 없음
    int firstValue = li.front();
    int lastValue = li.back();
    // li[3] = 10; 없음, 임의 접근을 허용하지 않음

    list<int>::iterator itBegin = li.begin();
    list<int>::iterator itEnd = li.end();

    // list<int>::iterator it2 = itBegin + 10; 주소를 타고타고 가는거라 비효율적이라 지원 안함

    // list<int>::iterator itTest1 = --itBegin; 오류, [My_head]로는 이동불가
    list<int>::iterator itTest2 = --itEnd; // [My_head]이전 노드, 데이터가 있는 마지막 노드
    // list<int>::iterator itTest3 = ++itEnd;  오류, [My_head]넘어서 이동불가



    for (list<int>::iterator it = li.begin(); it != li.end(); ++it)
    {
        cout << *it << endl;
    }



    // li.insert(itBegin, 100);
    // 
    // li.erase(li.begin()/*, li.end()*/); // 보통 범위 삭제에 쓰이지 
    // 
    // li.pop_front(); 
    // 
    // li.remove(10); // 특정 값에 해당하는 데이터들 삭제



    // 중간 삽입/삭제 (GOOD)
    // 처음/끝 삽입/삭제 (GOOD)
    // 삽입하고자 하는 값을 앞 노드의 _next 값으로, 뒷 노드의 _prev 값으로 해주면 끝 아인교
    // 삭제하고자 하는 값을 뺴고 앞 노드의 _next 값을 뒷 노드와 일치 시켜주면 됨요


    // 임의 접근 (li[i]) (NO)
    // - 불가능 : vector는 데이터가 서로 연속해서 있으므로 벡터주소값([0]의 주소) + 타입 단위 바이트*n를 더하는 방식으로 임의 접근이 가능하지만
    //           list는 데이터가 서로 떨어져서 포인터로 연결 되어있으므로 포인터를 타고 타고 타고 가는 방식이 비효율적이라 지원안함.


    // ? 임의 접근이 안되는데 중간 삽입/삭제가 왜 빠름?
    // ex) 50번 인덱스에 있는 데이터를 삭제

    // 50번까지 임의 접근 하는 부분 : 어렵복잡
    //list<int>::iterator it = li.begin();
    //for (int i = 0; i < 50; ++i)
    //{
    //    ++it; // 임의 접근을 이런식으로 해야돼;; *C
    //}

    // 50번의 데이터를 중간 삭제 하는 부분 : 간단
    // vector에서는 뭐 삭제하고 뒤에 데이터 당기고 그랬잔슴~
    li.erase(/*it*/itRemember);





    return 0;
}