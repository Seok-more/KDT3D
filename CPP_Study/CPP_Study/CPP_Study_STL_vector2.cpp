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

// vector


// STL(Standard Template Library
// 프로그래밍할 때 칠요한 자료구조/알고리즘을 템플릿으로 제공하는 라이브러리

// 컨테이너(Container) : 데이터를 저장하는 객체 (자료구조:Data Structure)

// vector (동적 배열) : 템플릿의 일종
// - vector의 동작 원리 (size/capacity) O
// - 중간 삽입/삭제
// - 처음/끝 삽입/삭제
// - 임의 접근

// --------------------------------------------------------------------------------------------------------------
// *A 문법 참고
class MyIterator
{
public:

};

class MyVector
{
public:
    typedef MyIterator iterator;
};

// --------------------------------------------------------------------------------------------------------------


int main()
{
    // 반복자(Iterator) : 포인터와 유사한 개념, 컨테이너의 원소(데이터)를 가리키고, 다음/이전 원소로 이동 가능
    vector<int> v(10);

    v.reserve(1000);

    // *B
    // 0. vector을 배열처럼 살펴보기
    for (vector<int>::size_type i = 0; i < v.size(); ++i) // 실시간으로 v.size가 바뀔것 같아서
    {
        v[i] = i;
    }

    // vector<int>::iterator it; // *A 무슨 문법인지 알아보자
    // Myvector::iterator it2; Myvector안에는 Myiterator클래스타입인 iterator가 멤버 변수로서 있는데, 그걸 갖고와서 it2라고 하겠다

    vector<int>::iterator it;
    int* ptr;                   // 반복자 vs 포인터

    // 첫번째 값 갖고오기
    it = v.begin();             // .begin() : vector의 반복자 반환
    ptr = &v[0];
    // cout << (*it) << endl;      // it는 class타입이지만 *를 쓸 수 있도록 지원하는 기능이 내포되있음 
    // cout << (*ptr) << endl;

    // 다음 데이터로 넘어가기 (데이터의 크기만큼)        
    // it++;                                  //   복습
    // ++it;                                  //   int a = 1;
    // ptr++;                                 //   int b = a++; b = 1, a = 2
    // ++ptr;                                 //   int c = ++a; c = 2, a = 2
    // 
    // // 이전 데이터로 넘어가기
    // it--;
    // --it;
    // ptr--;
    // --ptr;
    // 
    // // 더 크게 데이터로 넘어가기
    // it += 2;
    // it = it - 2;
    // ptr += 2;
    // ptr = ptr - 2;


    // vector 전체 살펴보기
    // 1. iterator 사용
    vector<int>::iterator itBegin = v.begin(); // [0],1,2,3,4,5,6,7,8,9(여기까지가 v),fdfdfdfdfd
    vector<int>::iterator itEnd = v.end(); // 0,1,2,3,4,5,6,7,8,9,[fdfdfdfdfd] 
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) // ++it이 더 좋은 이유 : ++it는 포인터를 증가시키고 바로 참조로 값을 넘겨주지만
    {                                                               // it++은 임시적으로 복사를 하고, 포인터를 증사시키고, 복사값을 건네줘서 낭비임
        cout << (*it) << endl;
    }

    // 2. iterator 내부에 숨겨진 포인터 사용(굳이?) *B
    int* ptrBegin = &v[0]; // == v.begin()._Ptr
    int* ptrEnd = ptrBegin + 10; // == v.end()._Ptr
    for (int* ptr = ptrBegin; ptr != ptrEnd; ++ptr)
    {
        cout << (*ptr) << endl;
    }

    // 1,2를 사용하는 이유 : iterator는 vector 뿐만 아니라, 다른 컨테이너에도 공통적으로 사용할 수 있음 
    // 다른 컨테이너는 배열처럼 인덱스 접근이 안될 수 도 있음

    //------------------------------------------------------------------------------------------------------------------------

    // const_iterator
    // const int*로 받아옴
    vector<int>::const_iterator cit = v.cbegin(); // 데이터를 수정하지 않고 읽기만 할꺼면 const 쓰는게 좋지

    // reverse_iterator
    // 역방향 반복자 (잘안씀ㅋ)
    for (vector<int>::reverse_iterator rit = v.rbegin(); rit != v.rend(); ++rit)
    {
        cout << (*rit) << endl;
    }

    //------------------------------------------------------------------------------------------------------------------------

    // - 중간 삽입/삭제 (BAD)
    // - 처음/끝 삽입/삭제 (BAD / GOOD)
    // - 임의 접근

    // vector = 동적 배열 = 동적으로 커지는 배열 = 배열
    // 원소가 하나의 메모리 블록에 '연속하게' 저장된다!!

    // [     여유공간        ]
    // [0][1][2][3][4][ ][ ]
    // [중간삽입] 5를 1과 2사이에 끼고싶다... -> 2부터 뒤로 한칸씩 밀고, 2의 원래 위치에 5를 넣는다...으윽    BAD
    // [중간삭제] 1을 없애고 싶다... -> 1을 뿅 없애고 뒤에 애들을 다 한칸씩 당긴다..윽                       BAD
    // [처음삽입/삭제] 위와 동일하게 전체적으로 밀고 당기는 과정이 있다....우욱                              BAD
    // [끝삽입/삭제] 오 걍 넣어줘도 다른 추가적인거 없이 연속적임                                           GOOD
    // v.push_back(1);
    // v.pop_back();

    // 임의 접근
    // i번째 데이터는 어디있는가?  // v[i]

    vector<int>::iterator insertIt = v.insert(v.begin() + 2, 5); // 시작으로부터, 두 칸(데이터단위)떨어진 위치에 5를 삽입해라 [0][1][5][2][3][4][ ][ ]
    // 반환 : 내가 추가한 데이터 위치(v.begin() + 2)

    vector<int>::iterator eraseIt1 = v.erase(v.begin() + 2);   // 시작으로부터, 두 칸 떨어진 위치의 값을 삭제하라
    // 반환 : 내가 삭제한 데이터 위치(v.begin() + 2)

    vector<int>::iterator erasetIt2 = v.erase(v.begin() + 2, v.begin() + 4);   // 시작으로부터, 두 칸 떨어진 위치부터 네 칸 떨어진 위치 '앞'까지 삭제하라.
    // 반환 : 내가 삭제한 데이터 위치(v.begin() + 2)                              // [0][1][4][5][][][] : [2], [3] 삭제

    // 쭉~ 스캔하면서, 3이라는 데이터가 있으면 일괄 삭제하고 싶다.
    // 아래가 오류가 나는 이유는, iterator가 포인터 처럼 쓰이지만 포인터 뿐만 아니라 다양한 정보를 갖고 있다.
    // 근데, *A
    for (vector<int>::iterator it = v.begin(); it != v.end(); /*++it*/)
    {
        int data = *it;
        if (data == 3)
        {
            // v.erase(it);   // *A 이렇게 it를 삭제하면, 아예 it의 모든 값이 nullptr이 되면서 it가 유효하지 않게 되어 다음 for문을 돌지 못한다.
            it = v.erase(it); // 그래서 이렇게 바로 삭제된 데이터 위치에서 다시 it를 받아와서 유효하게 갱신한다. 
            // 근데 이렇게 되면, 삭제하고 당긴 다음에, ++it를 실행해서, 갓 당겨져서 현재 위치로 온 값을 체크하지 못한다. *B
        }
        else
        {
            ++it; // *B
        }
    }



    return 0;
}