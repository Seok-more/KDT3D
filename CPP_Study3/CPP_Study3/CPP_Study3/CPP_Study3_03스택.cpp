#include <iostream>
#include <vector>
#include <format>
#include <functional>
#include <map>
#include <set>
#include <string>
#include <list>
#include <stack>

using namespace std;

// Stack (LIFO)
// -되돌리기 : 
// 


template<typename T, typename Container = vector<T>>
class Stack
{
public:


public:
    void push(const T& In_value)
    {
        _container.push_back(In_value);
    }
    void pop()
    {
        _container.pop_back();
    }

    T& top()
    {
        return _container.back();
    }

    bool empty()
    {
        return _container.empty();
    }

    int size()
    {
        return _container.size();
    }


private:
    //vector<T> _container;
    //list<t> _container; // 이것도 동일하게 작동함 갓STL
    Container _container; // 이렇게 바꿔치기도 가능함
};



int main()
{
    Stack<int, list<int>> s; // 기본 vector에서 list로 바꿔치기

    s.push(1);
    s.push(2);
    s.push(3);

    while (s.empty() == false)
    {
        int data = s.top(); // 접근
        s.pop(); // 삭제

        cout << data << endl;
    }

    int size = s.size();


    return 0;
}
