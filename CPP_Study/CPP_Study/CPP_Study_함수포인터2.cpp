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


// 함수 포인터
// 1) 포인터    *
// 2) 변수이름  fn
// 3) 타입     함수(ex: 인자:int, int / 반환: int)

// typedef의 진실
// typedef 왼쪽 오른쪽 -> 오른쪽 ( 커스텀 타입 정의 )
// ex) typedef int NUMBER;
// 
// 정확히는 [선언 문법]에서 typedef을 앞에 붙이는 쪽이 된다. *****

class Knight;

typedef int INTEGER;
typedef int* POINTER;
typedef int FUNC(int, int); // 함수를 타고 가면 구현부가 있을 것이라고하는 거라 포인터로만 쓸거임 ~
typedef int ARRAY[20];


typedef int (*PFUNC)(int, int); // (전역/정적) 함수 포인터
// int *PFUNC 이게 함수 포인터인지, 반환값이 int*인 함수인지 명확하지 않아서 감싸줘야함 int (*PFUNC)

typedef int (Knight::* PMEMFUNC)(int, int); // (Knight 클래스) 멤버 함수 포인터
int Test(int a, int b)
{
    cout << "Test" << endl;
    return 0;
}

int t(int a, int b)
{
    cout << "t" << endl;
    return a + b;
}

class Knight
{
public:

    // static void HelloKnigt() // 정적 함수 : 위치만 나이트 클래스에 있는거지 사실 객체랑 아무 상관없음
    // {
    //     // _hp = 20; 정적이기에 객체의 변수에 접근 못함
    // }

    int GetHp(int, int) // 멤버 함수
    {
        cout << "GetHp()" << endl;
        return _hp;
    }


public:
    int _hp = 100;
};

int main()
{
    // int(*fn)(int, int); // 이걸 더 선호함

    // typedef int(FUNC_TYPE)(int, int);
    // FUNC_TYPE* fn; // 위와 동일함, 위는 한번에 만든거, 얘는 좀 나눈거 뿐

    FUNC t; // 그냥 선언부임 뭐 t가 만들어 지지도 않음
    t(1, 2); //main 함수에서 참조되는 확인할 수 없는 외부 기호 -> 함수 선언만 하고 구현부를 안만들었을 떄 나오는 오류


    PFUNC fn; // *는 항상 세트

    // fn = Test;
    fn = &Test; // 이걸 선호, 위와 동일함, 함수 포인터는 함수 주소! 그냥 함수포인터는 뭐든 & 붙여준다고 생각하자.

    fn(1, 2);
    (*fn)(1, 2); //  이걸 선호, 위와 동일함, 함수 포인터는 *접근연산자가 붙어도 함수 주소이다. 

    //-----------------------------------------------------------------------------------------------------------------------

    // 위 문법으로 만든 함수 포인터는 [전역 함수 / 정적 함수]만 담을 수 있다. ( 호출 규약이 동일한 애들 ) -> 멤버 함수는?

    // fn = &GetHp; 못가져옴
    // fn = &Knight::GetHp ; 못가져옴, 인자가 안맞아서 못가져오는 것도 아님, 맞춰줘도 못가져옴

    Test(1, 2);     // 전역 함수는 그냥 호출이 됨

    Knight k1;
    k1.GetHp(1, 1); // 멤버 함수는 어떠한 객체를 통해서 호출이 됨

    PMEMFUNC mfn;


    mfn = &Knight::GetHp; // &를 안붙이면 오류 : 비표준 구문입니다. '&'를 사용하여 멤버 포인터를 만드세요.

    // mfn(); 이거 안됨, 어쨋든 멤버 함수 포인터는 객체가 필요함
    (k1.*mfn)(1, 1);

    // 이번엔 진짜 나이트가 아니라 나이트 포인터로 되어있다고 생각하자
    Knight* k2 = new Knight();
    (k2->*mfn)(1, 1); // ((*k2).*mfn)(1, 1);


    delete k2; // 잊지말자~ 동적할당해제



    return 0;
}