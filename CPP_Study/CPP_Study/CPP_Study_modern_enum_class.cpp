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

// enum class (scoped enum)



// unscoped enum (범위없는)
enum PlayerType : char  // 명시하지 않으면 기본적으로 4byte
{
    PT_None,
    PT_Knight = 5,
    PT_Archer, // 6
    PT_Mage,   // 7
};

enum MonsterType
{
    MT_Knight, // 이름이 같으면 오류가나서 앞에 구분할 수 있도록 표시하는 편
};

// scoped enum (범위있는)
enum class objectType // : char
{
    Player,
    Monster,
    Projectile
};

enum class objectType2 // : char
{
    Player,
    Monster,
    Projectile      // 이름이 같아도 괜찮음, 범위가 나눠져있응께
};

int main()
{
    // enum class vs enum

    // enum class
    // 1) 이름 공간 관리 (scoped)
    // 2) 암묵적인 변환 금지

    double value = PT_Knight; // PT_Knight은 그냥 5니까
    // double value2 = objectType::Player; 암묵적인 변환 금지
    double value2 = static_cast<double>(objectType::Player); // 명시적 캐스팅을 통해서는 가능

    int choice;
    cin >> choice;

    if (choice == static_cast<int>(objectType::Monster)) // 정수가 아니라 정말 objectType라는 타입으로 인식하기 때문
    {

    }

    unsigned int bitFlag;
    bitFlag = (1 << static_cast<int>(objectType::Player)); // 이렇게 매번 캐스팅을 해야하는 경우가 많음


    // enum
    PlayerType t;
    cout << sizeof(t) << endl;
    cout << sizeof(PlayerType) << endl;



    return 0;
}