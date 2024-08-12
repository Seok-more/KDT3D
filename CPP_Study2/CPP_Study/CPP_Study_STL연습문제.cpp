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
#include <iomanip>
#include <string>
#include <cmath>
#include <list>
#include <deque>
#include <map>
#include <set>

#include "Practice_STL.h"


using namespace std;

// STL 연습문제

int main()
{
    srand((unsigned int)time(nullptr));

    vector<int> v;

    for (int i = 0; i < 100; ++i)
    {
        int num = rand() % 100;
        v.push_back(num);
        cout << num << endl;
    }

    // Q1 : number라는 숫자가 벡터에 있는지 체크하는 기능 (bool / 첫등장 iter)
    {
        int number = 50;

        Findit(v, number);

    }


    // Q2 : 11로 나뉘는 숫자가 벡터안에 있는지 체크하는 기능 (bool / 첫등장 iter)
    {
        int num11 = 11;

        Dv11it(v, num11);

    }

    // Q3 : 홀수인 숫자의 개수는? count
    {
        OddCount(v);
    }

    // Q4 : 벡터에 들어가 있는 모든 숫자들에 3을 곱해주세요!
    {
        Mul3onV(v);

    }







    return 0;
}