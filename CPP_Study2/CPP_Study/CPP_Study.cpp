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
#include <algorithm>


using namespace std;

// Algorithm

int main()
{
    // 자료구조 (데이터를 저장하는 구조)
    // 알고리즘 (데이터를 어떻게 사용할 것인가?)

    // find

    
    // find_if
    // count
    // count_if
    // all_of
    // any_of
    // none_of
    // for_each
    // remove***       :  
    // remove_if***    : 











    srand((unsigned int)time(nullptr));

    vector<int> v;

    for (int i = 0; i < 100; ++i)
    {
        int num = rand() % 100;
        v.push_back(num);
        // cout << num << endl;
    }

    // Q1 : number라는 숫자가 벡터에 있는지 체크하는 기능 (bool / 첫등장 iter)
    {
        int number = 50;
        // Findit(v, number);

        vector<int>::iterator itFind = find(v.begin(), v.end(), number); // iterator라서 list에서도 쓸 수 있다.
        if (itFind == v.end())
        {
            cout << "Missing!\n";
        }
        else
        {
            cout << "Find!\n";
        }
    }


    // Q2 : 11로 나뉘는 숫자가 벡터안에 있는지 체크하는 기능 (bool / 첫등장 iter)
    {
        int num11 = 11;
        // Dv11it(v, num11);

        auto itFind11 = find_if(v.begin(), v.end(), [](int n) {return(n % 11 == 0); }); // 배열의 각 요소를 iterator로 확인하고 있으니께, 그냥 n으로 해도 됨
        if (itFind11 == v.end())
        {
            cout << "Missing!\n";
        }
        else
        {
            cout << "Find!\n";
        }
    }

    // Q3 : 홀수인 숫자의 개수는? count
    {
        // OddCount(v);
        int Oddcount = count_if(v.begin(), v.end(), [](int n) {return(n % 2 == 1); });
        cout << "ODD is " << Oddcount << endl;

        bool b1 =  all_of(v.begin(), v.end(), [](int n) {return(n % 2 == 1); }); // 모든 데이터가 조건을 만족하는가
        bool b2 = any_of(v.begin(), v.end(), [](int n) {return(n % 2 == 1); }); // 하나라도 데이터가 조건을 만족하는가
        bool b3 = none_of(v.begin(), v.end(), [](int n) {return(n % 2 == 1); }); // 모든 데이터가 조건을 만족하지않는가

        cout << b1 << b2 << b3 << endl;
    }

    // Q4 : 벡터에 들어가 있는 모든 숫자들에 3을 곱해주세요!
    {
        // Mul3onV(v);
        
        // 모든 데이터를 스캔할때 유용
        for_each(v.begin(), v.end(), [](int& n) {return(n *= 3);});

        for (int i = 0; i < v.size(); ++i)
        {
            cout << v[i] << endl;
        }
    }

    // Q5 : 홀수인 데이터를 일괄 삭제하세요!
    {
        // for(auto it = v.begin(); it != v.end();)
        // {
        //     if (*it % 2 == 1)
        //     {
        //         it = v.erase(it); // 삭제하고 당겨주는 기능이니까, 만약에 조건문에 ++it를 넣었다면, 1개씩 스캔을 안하게된디.
        //     }
        //     else
        //     {
        //
        //         ++it;
        //     }

        // vector를 순회해서 스캔할때, 그 vector의 값을 직접 건드는 행위는 굉장히 신중하게 할것!

        v.clear();
        v.push_back(1);
        v.push_back(4);
        v.push_back(3);
        v.push_back(5);
        v.push_back(8);
        v.push_back(2);
        
        // remove(v.begin(), v.end(), 4); 4를 모두 없애고싶다
        // remove_if(v.begin(), v.end(), [](int n) {return(n % 2 == 1); }); // 홀수인 데이터를 모두 없애고싶다.
        // 남겨줘야하는 데이터를 복붙해줌
        //  1 4 3 5 8 2
        //  4 
        //  4 8 
        //  4 8 2
        // 더이상 남겨야 하는 데이터가 없으므로 나머지는 그대로 내려옴
        //  4 8 2 5 8 2 
        //  4 8 2(이 데이터들을 넣어주고) (더이상 사용안해도 되는 위치를 iter로)->'5' 8 2 

        // vector<int>::iterator it = remove_if(v.begin(), v.end(), [](int n) {return(n % 2 == 1); });
        // v.erase(it, v.end()); // it가 더이상 사용안해도 되는 위치를 가리키므로 거기서 부터 끝까지 날려주는 과정이 추가됨 

        v.erase(remove_if(v.begin(), v.end(), [](int n) {return(n % 2 == 1); }), v.end()); // 위의 과정을 이렇게 압축도 가능

            
        






    }



   
   


    return 0;
}