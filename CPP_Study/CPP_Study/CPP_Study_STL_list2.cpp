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
using namespace std;

// list

// Node[    data(4byte) next(4byte:32bit / 8byte:64bit) <- 포인터니까 ]
// list 구현

template<typename T>
class Node
{
public:
    Node() : _next(nullptr), _prev(nullptr), _data(T()) // <- T의 기본타입으로, 뭘 넣으면 0이됨
    {

    }

    Node(const T& value) : _next(nullptr), _prev(nullptr), _data(value)
    {

    }

public:
    Node* _next;
    Node* _prev;
    T     _data;
};

template<typename T>
class Iterator // 무슨 노드를 가리키는지만 알면 될듯
{
public:
    Iterator() : _node(nullptr)
    {

    }

    Iterator(Node<T>* node) : _node(node)
    {

    }

    // ++it
    Iterator operator++()
    {
        _node = _node->_next;
        return *this;
    }

    // it++
    Iterator operator++(int)
    {
        Iterator<T>* temp = *this;
        _node = _node->_next;
        return temp;
    }

    // --it
    Iterator operator--()
    {
        _node = _node->_prev;
        return *this;
    }

    // it--
    Iterator operator--(int)
    {
        Iterator<T>* temp = *this;
        _node = _node->_prev;
        return temp;
    }

    T& operator*()  // data값을 줘야하니까 iterator가아니고 T이고, data값을 바꿀 수 도 있으니까, 복사가 아닌 참조 값을 줌
    {
        return _node->_data;
    }

    bool operator==(const Iterator& right)
    {
        return _node == right._node;  //  right가 참조 값이니까 ->(포인터용)이 아니라 .임
    }

    bool operator!=(const Iterator& right)
    {
        return _node != right._node;
    }

public:
    Node<T>* _node;

};



template<typename T>
class List
{
public: // [li.end] <-> [_header] <-> [li.begin]
    List() : _size(0)
    {
        _header = new Node<T>(); // 임의의 header를 동적 할당 
        _header->_next = _header;
        _header->_prev = _header; // 일단 데이터가 없으면 다음,이전값을 자기로 받아둠, 일단일단임

    }


    ~List()
    {
        // 모든 노드들의 메모리를 해제해줘야 함
        while (_size > 0)
        {
            pop_back();
        }

        delete _header;
    }
public:
    void push_back(const T& value)
    {
        AddNode(_header, value);
    }

    void pop_back()
    {
        RemoveNode(_header->_prev);
    }

    // 전: [1] <-> [2] <-> [before] <-> [4] <-> [_header]
    // 후: [1] <-> [2] <-> [node] <-> [before] <-> [4] <-> [_header]
    Node<T>* AddNode(Node<T>* before, const T& value)
    {
        // 일단 value를 가진 node를 만듬
        Node<T>* node = new Node<T>(value);

        // '[2 = prevNode]' <-> [before] prev 추출
        Node<T>* prevNode = before->_prev;

        // [2] <-> [node] 연결
        prevNode->_next = node;
        node->_prev = prevNode;

        // [node] <-> [before] 연결
        node->_next = before;
        before->_prev = node;

        // 사이즈 증가
        ++_size;

        // 추가한 위치
        return node;

        // 예외상황 :  전: <-> [_header]  <-> 데이터가 없는 상황
        // - [before] = [_header]가 됨
        // - [node] <-> [_header]가 됨
        // - [node] <-> [_header] <-> [node]가 됨; 이해못함 다시보셈 
    }

    // 전: [1] < ->[2 = prevNode] < ->[node] < ->[4 = nextNode] < ->[_header]
    // 후: [1] < ->[2] < ->[4] < ->[_header]
    Node<T>* RemoveNode(Node<T>* node)  // 삭제할 노드를 받자
    {
        // node의 앞 뒤 노드 추출
        Node<T>* prevNode = node->_prev;
        Node<T>* nextNode = node->_next;

        // 앞 뒤 노드 연결
        prevNode->_next = nextNode;
        nextNode->_prev = prevNode;

        // node 삭제
        delete node;

        // 사이즈 감소
        --_size;

        return nextNode;
    }

    int size()
    {
        return _size;
    }

public:

    typedef Iterator<T> iterator;
    iterator begin()
    {
        return iterator(_header->_next);
    }

    iterator end()
    {
        return iterator(_header);
    }

    iterator insert(iterator it, const T& data) // 삽입할 위치, 데이터
    {
        Node<T>* node = AddNode(it._node, data);
        return iterator(node);
    }

    iterator erase(iterator it) // 제거할 위치
    {
        Node<T>* node = RemoveNode(it._node);
        return iterator(node);
    }

public:
    Node<T>* _header;
    int _size;
};


int main()
{
    List<int> li;
    List<int>::iterator eraseit;

    for (int i = 0; i < 10; ++i)
    {
        if (i == 5)
        {
            eraseit = li.insert(li.end(), i);
        }
        else
        {
            li.push_back(i);
        }
    }

    li.pop_back();
    li.erase(eraseit);

    for (List<int>::iterator it = li.begin(); it != li.end(); ++it)
    {
        cout << (*it) << endl;
    }



    return 0;
}