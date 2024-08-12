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

// r-value reference, std::move


class Pet
{

};

class Knight
{
public:

    // 기본생성자
    Knight()
    {
        cout << "Knight()" << endl;
    }

    // 복사 생성자
    Knight(const Knight& k)
    {
        cout << "Knight(const Knight& k)" << endl;
    }

    // 이동 생성자
    Knight(Knight&& k)
    {

    }


    ~Knight()
    {
        if (_pet)
        {
            delete _pet;
        }
    }

    // 복사 대입 연산자 
    void operator=(const Knight& k) // 내가 복사할 값만 꺼내서 쓰는거지 뭐 직접 수정하거나 그러지는 않았다
    {
        cout << "operator=(const Knight& k)" << endl;

        // 얕은 복사
        _hp = k._hp;
        //_pet = k._pet; // pointer라서 그 주소를 똑같이 들고 있음, 즉 복사 대입하면 두 나이트가 같은 펫(주소)을 가리킨다는 거

        // 깊은 복사
        _hp = k._hp;

        if (k._pet) // NULL체크
        {
            _pet = new Pet(*k._pet);  // 멤버 데이터가 참조(주소) 값이라면, 데이터를 새로 만들어 준다. : 대신 좀 비싸짐
        }
    }

    // 이동 대입 연산자
    void operator=(Knight&& k) noexcept // 어짜피 이동할 애라 더이상 안쓸꺼라 원본을 훼손해도 된다, noexcept은 이동 연산자에는 무조건 붙여라, 가시적으로 좋고, 이동연산자 중에 throw가 발생하면 복사생성자가 실행되면서 성능손해가 생김 
    {
        cout << "operator=(Knight&&)" << endl;

        // 얕은 복사
        _hp = k._hp;
        _pet = k._pet;  // 얕은 복사로 상대방의 펫(주소)의 소유권을 갖고옴

        k._pet = nullptr; // 응 잘썼어 날려버리기



    }

public:

    void PrintInfo() const // read-only
    {
    }

public:
    int _hp = 100;
    Pet* _pet = nullptr;
};

void TestKnight_Copy(Knight knight) {} // 임시 객체를 만들어서 값을 복사하기만 한거라 범위 넘어가면 임시 객체 사라지고 실제로 바뀌는건 아무것도 없죠
void TestKnight_LValueRef(Knight& knight) {} // 참조해서 실제 값을 바꿀 수 있음, 불필요한 복사 없음, 원본을 니맘대로해도됨
void TestKnight_ConstLValueRef(const Knight& knight) // const는 값을 고치는 것이 아닌 '읽기' 위해서 갖다 쓰는거임, 원본을 수정하면 안되고 걍 읽기만 혀
{
    knight.PrintInfo(); // 인자에 const가 붙으면, 이 함수는 '읽기' 전용이므로, const가 붙은 함수만 가져올 수 있다.
}

void TestKnight_RValueRef(Knight&& knight) {} // r-value를 받는 참조(&&가 한 문법표현임) {}안에 원본 자체를 수정할 수 있음
// 이동 대상 : 읽고 쓰고 뭐 호출된 후 없어질꺼니까 원본이 유지되지 않아도 되므로 맘대로 혀!


int main()
{
    // l-value vs r-value
    // - l-value : 단일식을 넘어서 계속 지속되는 개체, 주소를 갖을 수 있음
    // - r-value : l-value가 아닌 나머지 (임시 값, 열거형, 람다, i++ ...)

    int a = 3;
    a = 4;
    // 3 = a; 이거 안되잖아
    // (a++) = 5; 

    Knight k1;

    TestKnight_Copy(k1);
    TestKnight_LValueRef(k1);
    // TestKnight_LValueRef(Knight()); // 이 안에있는 Knight()는 함수 호출이 끝남과 동시에 사라지는 임시 객체(r-value)라서 쓸데 없는 참조해서 값 고치게 막아둠
    TestKnight_ConstLValueRef(Knight()); // 이렇게 const가 붙으면 값을 읽기만 하므로 r-value라도 받아줌
    // TestKnight_RValueRef(k1); 왼값 못넣게 함
    TestKnight_RValueRef(Knight());  // 임시 객체는 넣어줌
    TestKnight_RValueRef(static_cast<Knight&&>(k1));  // r-value가 아니더라도 캐스팅을 하면 넣어주긴 해줌

    Knight k2;
    k2._pet = new Pet();
    k2._hp = 1000;

    // 원본은 날려도 된다라는 힌트를 주는거임
    Knight k3;
    // k3 = static_cast<Knight&&>(k2);  근데 보통은 이렇게 캐스팅하지는 않고 아래처럼씀
    k3 = move(k2); // 오른값 참조로 캐스팅 함 (move의 이름 후보중 rvalue_cast가 있었음), 소유권 이전의 개념





    return 0;
}