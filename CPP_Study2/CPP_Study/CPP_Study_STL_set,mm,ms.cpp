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

// set , multimap, multiset



int main()
{
    set<int> s; // (key = value)

    // 넣기
    // 빼기
    // 찾기
    // 순회

    // 넣기
    s.insert(10);
    s.insert(30);
    s.insert(20);
    s.insert(40);

    // 빼고
    s.erase(10);

    // 찾기
    set<int>::iterator findIt = s.find(30);
    if (findIt == s.end())
    {
        cout << "못찾음" << endl;
    }
    else
    {
        cout << "찾음" << endl;
    }

    // 순회
    for (set<int>::iterator it = s.begin(); it != s.end(); ++it)
    {
        cout << (*it) << endl;
    }

    // s[10] = 10; 임의 접근은 막힘

    cout << "---------------------------------------------------------------------------------------------------------------" << endl;

    multimap<int, int> mm;

    // 넣기
    mm.insert(make_pair(1, 100));
    mm.insert(make_pair(1, 200));
    mm.insert(make_pair(1, 300));
    mm.insert(make_pair(2, 400));
    mm.insert(make_pair(2, 500));

    // mm[1] = 500; 막힘

    // 빼기
    // unsigned int count = mm.erase(1);    // 해당하는 키가 다 없어짐, count = 3
    // 
    // // 찾기
    // multimap<int, int>::iterator itFind = mm.find(1);
    // // ++it; 처음꺼가 아니라 두번째꺼 삭제하도록
    // if (itFind != mm.end())
    // {
    //     mm.erase(itFind); // 찾고 삭제해주기(딱 한개 맨처음꺼)
    // }

    pair< multimap<int, int>::iterator, multimap<int, int>::iterator> itPair;
    itPair = mm.equal_range(1); // iterator 2개를 pair로  반환

    multimap<int, int>::iterator itBegin = mm.lower_bound(1); // 키 1값의 처음값(뚜껑)
    multimap<int, int>::iterator itEnd = mm.upper_bound(1); // 키 1값의 마지막값의 다음값(받침)


    for (multimap<int, int>::iterator it = mm.begin(); it != mm.end(); ++it)
    {
        cout << it->first << " " << it->second << endl;

    }

    cout << "---------------------------------------------------------------------------------------------------------------" << endl;

    multiset<int> ms;

    // 넣기
    ms.insert(100);
    ms.insert(100);
    ms.insert(100);
    ms.insert(200);
    ms.insert(200);


    // 빼기

    // 찾기
    multiset<int>::iterator itFind = ms.find(100); // 맨처음값만 뱉음

    // 순회
    pair< multiset<int, int>::iterator, multiset<int, int>::iterator> itPair2;
    itPair2 = ms.equal_range(100);

    for (multiset<int>::iterator it = ms.begin(); it != ms.end(); ++it)
    {
        cout << *it << endl; s

    }

    multiset<int>::iterator itBegin2 = ms.lower_bound(100); // 키 1값의 처음값(뚜껑)
    multiset<int>::iterator itEnd2 = ms.upper_bound(100); // 키 1값의 마지막값의 다음값(받침)



    return 0;
}