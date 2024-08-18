#include <iostream>
#include <vector>
#include <format>
#include <functional>
#include <map>
#include <set>
#include <string>
#include <list>
#include <stack>
#include <queue>
using namespace std;

// 큐
// FIFO
// 대기열 

// 순환구조
// [_front/_back][ ][ ][ ][ ][ ][ ][ ][ ] : queue에 데이터가 없다
// 
// [_front][ ][ ][ ][ ][ ][ ][ _back][ ] : push를 7번 했다
//
// [ ][ ][_front ][ ][ ][ ][ ][ _back][ ] : pop을 2번 했다
// 
// [ _back ][ ][_front ][ ][ ][ ][ ][ ][ ] : push를 2번 했다

template<typename T>
class Queue_array
{
public:
    Queue_array()
    {
        // [_front/_back][ ][ ][ ][ ][ ][ ][ ][ ]
        _container.resize(100);
    }


public:

    void push(const T& In_value)
    {

        if (_size == _container.size())
        {
            // 메모리 증설
            int newSize = max(1, _size * 2);
            vector<T> newData;
            newData.resize(newSize);

            // 데이터 복제
            for (int i = 0; i < _size; ++i)
            {
                int index = (_front + i) % _container.size();
                newData[i] = _container[index];
            }


            _container.swap(newData);
            _front = 0;
            _back = _size;


        }


        _container[_back] = In_value;
        _back = (_back + 1) % _container.size(); // 범위를 넘더라도 다시 범위의 처음으로 돌아오도록 함
        ++_size;
    }

    void pop()
    {
        _front = (_front + 1) % _container.size();
        --_size;
    }

    T& front()
    {
        return _container[_front];
    }

    bool empty()
    {
        return (_size == 0);
    }

    int size()
    {
        return _size;
    }

public:

private:
    vector<T> _container;

    int _front = 0;
    int _back = 0;
    int _size = 0;

};

// deque
// [ ][ ][ ][0]
// [1][2][3][4]
// [5][6][ ][ ]

template<typename T>
class Queue_list
{
public:
    void push(const T& In_value)
    {
        _container.push_back(In_value);
    }

    void pop()
    {
        //_container.erase(_container.begin()); 벡터일때
        _container.pop_front(); // list일때

    }

    T& front()
    {
        return _container.front();
    }

    bool empty()
    {
        return _container.empty();
    }

    int size()
    {
        return _container.size();
    }




public:

private:
    list<T> _container;
};







int main()
{
    Queue_array<int> q;

    for (int i = 0; i < 10; ++i)
    {
        q.push(i);
    }

    while (q.empty() == false)
    {
        int value = q.front();
        q.pop();
        cout << value << endl;
    }

    int size = q.size();


    return 0;
}
