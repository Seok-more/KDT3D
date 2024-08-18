#include <iostream>
#include <vector>
#include <format>
#include <functional>
#include <map>
#include <set>
#include <string>
#include <list>

using namespace std;
//--------------------------------------------------------------------------------------------
template<typename T> class Iterator; // 전방선언 씹


//--------------------------------------------------------------------------------------------
template<typename T>
struct Node
{
public:
    Node() : _data(T()) /* T()이게 초기화인가봐, */, _prev(nullptr), _next(nullptr)
    {

    }

    Node(const T& In_value) : _data(In_value), _prev(nullptr), _next(nullptr)
    {

    }

public:

public:
    T _data;
    Node* _prev;
    Node* _next;

};
//--------------------------------------------------------------------------------------------
template <typename T>
class List
{
public:
    using iterator = Iterator<T>;


    List() : _size(0)
    {
        // [head] <-> ... <-> [tail]
        _head = new Node<T>();
        _tail = new Node<T>();

        _head->_next = _tail;
        _tail->_prev = _head;

    }

    ~List()
    {
        while (_size > 0)
        {
            pop_back();
        }

        delete _head;
        _head = nullptr;

        delete _tail;
        _tail = nullptr;

    }

public:
    void push_back(const T& In_value)
    {
        AddNode(_tail, In_value);
    }

    void pop_back()
    {
        RemoveNode(_tail->_prev);
    }

    int size()
    {
        return _size;
    }

    iterator begin()
    {
        return iterator(_head->_next);
    }

    iterator end()
    {
        return iterator(_tail);
    }

    iterator insert(iterator In_pos, const T& In_value) // In_pos의 앞에다가 넣어줌
    {
        Node<T>* newNode = AddNode(In_pos._node, In_value);
        return iterator(newNode);
    }

    iterator erase(iterator In_pos)
    {
        Node<T>* remainNode = RemoveNode(In_pos._node);
        return iterator(remainNode);
    }


private:

    // [head] <-> [1] <-> [prevNode] <-> [newNode] <-> [In_before] <-> [tail] 
    Node<T>* AddNode(Node<T>* In_before, const T& In_value)
    {
        Node<T>* newNode = new Node<T>(In_value);
        Node<T>* prevNode = In_before->_prev;

        prevNode->_next = newNode;
        newNode->_prev = prevNode;

        newNode->_next = In_before;
        In_before->_prev = newNode;

        ++_size;

        return newNode;
    }


    // [head] <-> [1] <-> [prevNode] <-> [In_remove] <-> [nextNode] <-> [tail] 
    Node<T>* RemoveNode(Node<T>* In_remove)
    {
        Node<T>* prevNode = In_remove->_prev;
        Node<T>* nextNode = In_remove->_next;

        prevNode->_next = nextNode;
        nextNode->_prev = prevNode;

        delete In_remove;
        In_remove = nullptr;

        --_size;
        return nextNode;

    }


protected:
    Node<T>* _head; // 실제 값이 있으면 nullptr 체크를 계속해줘야 하므로, 그냥 더미노드를 만들어서 설정해줌
    Node<T>* _tail; // 위와 같음
    int _size;

};
//--------------------------------------------------------------------------------------------
template<typename T>
class Iterator
{
public:
    Iterator() : _node(nullptr)
    {

    }

    Iterator(Node<T>* In_node) : _node(In_node)
    {

    }

    Iterator& operator++()
    {
        _node = _node->_next;
        return *this;
    }

    Iterator& operator++(int)
    {
        iterator temp = *this;
        _node = _node->_next;
        return temp;

    }

    Iterator& operator--()
    {
        _node = _node->_prev;
        return *this;
    }

    Iterator& operator--(int)
    {
        iterator temp = *this;
        _node = _node->_prev;
        return temp;
    }

    T& operator*()
    {
        return _node->_data;
    }

    bool operator==(const Iterator& In_node)
    {
        return(_node == In_node._node);
    }

    bool operator!=(const Iterator& In_node)
    {
        return !(*this == In_node);
    }


public:

private:

public:
    Node<T>* _node;
};


//--------------------------------------------------------------------------------------------


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

    for (auto Findit = li.begin(); Findit != li.end(); ++Findit)
    {
        cout << (*Findit) << endl;
    }


    return 0;
}


