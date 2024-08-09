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

// forwarding reference ( 전달 참조 )
//      = 보편 참조(universal reference)
// auto, template처럼 타입을 추론할때 자주 발생함

// &&(&를 두 번) -> 오른값 참조


class Knight
{
public:
    Knight() { cout << "기본생성자" << endl; }
    Knight(const Knight&) { cout << "복사생성자" << endl; }
    Knight(Knight&&) noexcept { cout << "이동생성자" << endl; }

public:

private:

};

void Test_RValueRef(Knight&& k) // 오른값 참조
{

}

void Test_Copy(Knight k)
{


}


template<typename T>
void Test_ForwardingRef(T&& param)    // 전달 참조 : 왼값주면 왼쪽 참조로~ 오른값주면 오른쪽 참조로~
{                                     // 여기서 시그니쳐가 하나라도 바뀌면 전달 참조로 동작안함
                                      // ex)  template<typename T>
                                      //      st_ForwardingRef(const T&& param) -> 오른값 참조가 됨


    // *B6 param이 왼값참조라면 복사, 오른값참조라면 이동생성자를 호출하도록 구분해주는 기능
    Test_Copy(std::forward<T>(param));


    // *B3 전달 참조가 그런 상황이 발생하지 않도록 경우를 나눠줘야함
    // *B4 param이 왼값참조라면 복사하도록 유도
    // Test_Copy(param);

    // *B5 param이 오른값참조라면 이동하도록 유도 
    // param = 왼값이면 복사생성자 호출될꺼고
    // param = 오른값이면 이동생성자 호출되겠지
    // Test_Copy(param); // -> 복사생성자 호출
    // Test_Copy(move(param)); // -> 이동생성자 호출
                            // *B2 이렇게 오른값캐스팅을 해버리면 훼손하겠다는 말이므로 안됨!
}

template<typename T, typename T2>
void Test_ForwardingRef(T&& param, T2&& param2) // 전달 참조 T와 T2가 서로 다를 수 있으므로, 각 매개변수에 대해 별도로 전달 참조. 
// 둘 다 전달 참조로 작동할 수 있지만, 상황에 따라서는 한 매개변수만 전달 참조로 작동
{


}


int main()
{
    Knight k1;

    // Test_RValueRef(move(k1)); // rvalue_cast
    // // Test_RValueRef(k1); 당연히 통과안되지 k1은 l-value잖아
    // 
    // Test_ForwardingRef(move(k1));
    // Test_ForwardingRef(k1); // 얘는 통과가 되네?
    // 
    // auto&& k2 = k1; // 얘도 되는거 보면 rvalue_ref가 아니라는것 -> &k2인 lvalue_ref가 되어있음
    // auto&& k3 = move(k1); // 얘는 rvalue_ref임 &&k3

     // 공통점 : 형식 연역(type deduction)이 일어날때
     // 여기까진 전달 참조를 구분하는 방법
     // ------------------------------------------------------------------------------

    Knight& k4 = k1;        // 왼값참조
    Knight&& k5 = move(k1); // 오른값참조 --> *A 왼값인 k1을 rvalue_cast해서 오른값으로 보고 오른값참조타입인 k5를 만듦 
    //           --> k5는 오른값참조타입이지만 k5자체는 왼값이다.

// 오른값 : 왼값이 아니다 = 단일식에서 벗어나면 사용할 수 없다.
// 오른값참조 : 오른값만 참조할 수 있는 참조 타입

// Test_RValueRef(k4); 당연히 안되고
// Test_RValueRef(k5); 이건 왜안됨 *A / k5는 이제 왼값임;
// Test_RValueRef(move(k5)); // 이렇게 해야함

    Test_ForwardingRef(k1); // *B1 이렇게 왼값을 준 경우, 원본을 훼손하면 안되는디
    Test_ForwardingRef(move(k1)); // -> 복사생성자 호출 (param을 왼값으로 받은 것)

    // 결론 전달 참조는 forward를 사용하면 된다.



    return 0;
}