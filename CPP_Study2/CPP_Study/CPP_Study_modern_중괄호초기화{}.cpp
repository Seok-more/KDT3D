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

// 중괄호 초기화 {    } 

// Modern C++ (C++11~)

class knight
{
public:
    knight()
    {
        cout << "knight()" << endl;
    }

    knight(initializer_list<int> li) // 얘가 대부분 우선순위를 가짐
    {
        cout << "knight(initializer_list<int> li)" << endl;
    }
    knight(int a, int b)
    {
        cout << "knight(int a, int b)" << endl;
    }


public:

};


int main()
{
    // 중괄호 초기화 { }
    int a = 0;
    int b(0);
    int c{ 0 }; //int c = { 0 };

    knight k1;
    knight k2 = k1; // 복사 생성자(대입 연산자 아님): 자기 자신과 동일한 참조값을 받음
    knight k3{ k1 };

    knight k4; // 기본 생성자
    k4 = k1; // 대입 연산자

    vector<int> v1(10, 1); // v1은 size = 10이 1로 초기화되어있다.
    int arr[] = { 1,2,3,4 };

    // 중괄호 초기화
    // 1) vector같은 컨테이너와 잘어울린다.
    vector<int> v3{ 1,2,3,4 };


    // 2) 축소 변환 방지
    int x = 0;
    // double y = x; // 데이터가 은근히 손실남
    // double y{ x }; // 축소 변환이 필요하다고 오류냄

    // 3) 뽀너스
    // knight k5; -> 이건 기본생성자를 부름
    knight k5(); // -> 이건 기본생성자를 부르는게 아니라 함수 선언임;
    knight k6{}; // -> 이건 기본생성자를 부름

    knight k7{ 1,2,3,4,5 }; // knight(initializer_list<int> li)
    knight k8{ 1,2 }; // knight(initializer_list<int> li) > knight(int a, int b) : initializer가 다 씹어 먹어버려서 중괄호 초기화가 곤란해짐

    // 괄호 초기화 ()를 기본으로간다
    // - 전통적인 c++스타일
    // - vector 등 특이 케이스만 {}쓴다.

    // 중괄호 초기화 {}를 기본으로간다 <- 선택!
    // - 초기화 문법의 일치화
    // = 측소 변환 방지

    return 0;
}