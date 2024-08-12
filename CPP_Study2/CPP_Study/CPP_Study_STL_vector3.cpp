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

// vector 구현


template<typename T>
class Iterator
{
public:
    Iterator() : _ptr(nullptr)
    {

    }

    Iterator(T* ptr) : _ptr(ptr) //*A
    {
        // _ptr = ptr;  *A
    }

    Iterator& operator++() // 전위형 ++a
    {
        ++_ptr;
        return *this;
    }

    Iterator operator++(int) // 후위형 a++ (복사)
    {
        Iterator temp = *this; // temp는 잠시 스택메모리에 올라감
        ++_ptr;
        return temp;
    }

    Iterator& operator--()
    {
        --_ptr;
        return *this;
    }

    Iterator operator--(int)
    {
        Iterator temp = *this;
        --_ptr;
        return temp;
    }

    Iterator operator+(const int count)
    {
        Iterator temp = *this;
        temp._ptr += count;
        return temp;
    }

    Iterator operator-(const int count)
    {
        Iterator temp = *this;
        temp._ptr -= count;
        return temp;
    }

    bool operator==(const Iterator& right)
    {
        return(_ptr == right._ptr);
    }

    bool operator!=(const Iterator& right)
    {
        return !(*this == right); // 위의 bool operator==를 호출하는 방법 : 
        // bool operator== 을 불러서 판별한다음에, 그 결과에 !을 붙인거
//return (_ptr != right._ptr);
    }

    T& operator*()
    {
        return *_ptr;
    }

public:
    T* _ptr;

};




template<typename T>
class Vector
{
public:
    Vector() : _data(nullptr), _size(0), _capacity(0) // 멤버 변수 초기화 부분
    {

    }

    ~Vector()
    {
        if (_data /* = _data != nullptr */) // _data가 동적할당 될 경우(남아있으면), 날려줘야함
        {
            delete[] _data;
        }
    }

    // [            ]
    void push_back(const T& val/* T val 을 넣어도 되지만 성능 향상을 위해*/)
    {
        if (_size == _capacity)
        {
            // 캐퍼시티가 가득 찼으니까 증설해야지
            int newcapacity = static_cast<int>(_capacity * 1.5);

            // capacity = 0 -> Newcapacity = 0, capacity = 1 -> Newcapacity = 1( = 1.5)
            // 위와 같은 경우를 고려
            if (newcapacity == _capacity)
            {
                newcapacity++;
            }
            reserve(newcapacity);
        }

        // 푸쉬한 데이터 저장
        _data[_size] = val;

        // 데이터 개수 증가
        ++_size;
    }

    void reserve(int capacity)
    {
        // 새로운 메모리 할당
        _capacity = capacity;
        T* newData = new T[_capacity];

        // 데이터 복사
        for (int i = 0; i < _size; ++i)
        {
            // null 체크 안하는 이유 : 처음 객체가 생성되어서 _data가 없으면, _size = 0이라 실행이 안됨
            newData[i] = _data[i];
        }

        // 기존 데이터 삭제
        if (_data) // null 체크 이유 : 처음 객체가 생성되면 _data가 없을테니까
        {
            delete[] _data;
        }

        // 포인터를 옮겨줌(_data는 기존 배열의 주소를 갖고 있으므로, 새로운 배열의 주소로 옮)
        _data = newData;
    }

    T& operator[](const int pos) // 여기서 T(복사값)이아니라 T&(참조값)으로 한 이유
        // v[i] = 1 처럼 값을 밀어 넣는 경우도 있으므로
    {
        return _data[pos];
    }
public:
    int size()
    {
        return _size;
    }

    int capacity()
    {
        return _capacity;
    }

public:

    typedef Iterator<T> iterator; // vector<int>::iterator
    iterator begin()
    {
        return iterator(&_data[0]);
    }

    iterator end()
    {
        return begin() + _size;
    }

    void clear()
    {
        _size = 0;
    }


private:
    T* _data;
    int _size;
    int _capacity;

};

int main()
{
    Vector<int> v;

    v.reserve(100);

    for (int i = 0; i < 100; ++i)
    {
        v.push_back(i);
        cout << v.size() << " " << v.capacity() << endl;
    }

    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << endl;
    }

    cout << "--------------------------------------" << endl;

    for (Vector<int>::iterator it = v.begin(); it != v.end(); ++it)
    {
        cout << (*it) << endl;
    }

    v.clear(); // 데이터의 개수(size)는 0이 되지만, 용량(capacity)은 줄지 않음


    return 0;
}