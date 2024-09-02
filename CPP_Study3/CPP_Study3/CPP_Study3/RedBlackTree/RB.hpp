#include "RBTree.h"


enum class ConsoleColor
{
    BLACK = 0,
    RED = FOREGROUND_RED,
    GREEN = FOREGROUND_GREEN,
    BLUE = FOREGROUND_BLUE,
    YELLOW = RED | GREEN,
    WHITE = RED | GREEN | BLUE,
};


void SetCursorColor(ConsoleColor Color)
{
    HANDLE output = ::GetStdHandle(STD_OUTPUT_HANDLE);
    ::SetConsoleTextAttribute(output, static_cast<SHORT>(Color));
}


void SetCursorPosition(int x, int y)
{
    HANDLE output = ::GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos = { static_cast<SHORT>(x), static_cast<SHORT>(y) };
    ::SetConsoleCursorPosition(output, pos);
}


template<typename T>
inline BinarySearchTree<T>::BinarySearchTree()
{
    _nil = new Node();
    _root = _nil;
}

template<typename T>
inline BinarySearchTree<T>::~BinarySearchTree()
{
}

template<typename T>
inline void BinarySearchTree<T>::insertFixUp(Node<T>* In_node)
{

}



template<typename T>
void BinarySearchTree<T>::insert(int In_key)
{
    Node<T>* newNode = new Node<T>();
    newNode->_key = In_key;

    Node<T>* node = _root;     // 비교하는 노드
    Node<T>* parent = _nil; // 내가 어디서 왔는지 표시

    while (node != _nil)
    {
        // 다음 비교할 노드 결정 후, 계속 내려가기
        parent = node;
        if (In_key < node->_key)
        {
            node = node->_left; 
        }
        else
        {
            node = node->_right;
        }
    }

    // 최종 정착

    newNode->_parent = parent;

    if (parent == _nil)
    {
        _root = newNode;
    }
    else if (In_key < parent->_key)
    {
        parent->_left = newNode;
    }
    else
    {
        parent->_right = newNode;
    }

    // 검사
    newNode->_left = _nil;
    newNode->_right = _nil;
    newNode->_color = Color::Red;

    insertFixUp(newNode);
}

template<typename T>
inline void BinarySearchTree<T>::Delete(int In_key)
{
    Node<T>* deleteNode = Search(_root, In_key);
    Delete(deleteNode);
}

template<typename T>
inline void BinarySearchTree<T>::Delete(Node<T>* In_node)
{
    if (In_node == _nil)
    {
        return;
    }

    if (!In_node->_left)
    {
        Replace(In_node, In_node->_right);
    }
    else if (!In_node->_right)
    {
        Replace(In_node, In_node->_left);
    }
    else
    {
        // 다음 데이터 찾기
        Node<T>* next = Next(In_node);
        In_node->_key = next->_key;
        Delete(next);
    }

}


template<typename T>
inline void BinarySearchTree<T>::Print(Node<T>* node, int x, int y)
{
    if (node == _nil)
    {
        return;
    }

    SetCursorPosition(x, y);

    if (node->_color == Color::BLACK)
    {
        SetCursorColor(ConsoleColor::BLUE);
    }
    else
    {
        SetCursorColor(ConsoleColor::RED);
    }

    cout << node->_key;
    Print(node->_left, x - (5 / (y + 1)), y + 1);
    Print(node->_right, x + (5 / (y + 1)), y + 1);

    SetCursorColor(ConsoleColor::WHITE);

}

template<typename T>
inline Node<T>* BinarySearchTree<T>::Search(Node<T>* In_node, int In_key)
{
    if (In_node == _nil || In_key == In_node->_key)
    {
        return In_node;
    }

    if (In_key < In_node->_key)
    {
        return Search(In_node->_left, In_key);
    }
    else 
        return Search(In_node->_right, In_key);

    
}

template<typename T>
inline Node<T>* BinarySearchTree<T>::Min(Node<T>* In_node)
{
    if (In_node == _nil)
    {
        return In_node;
    }

    while (In_node->_left != _nil)
    {
        In_node = In_node->_left;
    }

    return In_node;
}

template<typename T>
inline Node<T>* BinarySearchTree<T>::Max(Node<T>* In_node)
{
    if (In_node == _nil)
    {
        return In_node;
    }

    while (In_node->_right != _nil)
    {
        In_node = In_node->_right;
    }

    return In_node;
}

template<typename T>
inline Node<T>* BinarySearchTree<T>::Next(Node<T>* In_node)
{
    if (In_node->_right != _nil)
    {
        return Min(In_node->_right);
    }

    Node<T>* parent = In_node->_parent;

    while (parent != _nil && In_node == parent->_right)
    {
        In_node = parent;
        parent = parent->_parent;
    }

    return parent ;
}


// u 서브트리를 v 서브트리로 교체, u 삭제
template<typename T>
inline void BinarySearchTree<T>::Replace(Node<T>* u, Node<T>* v)
{
    // 지금 노드가 최고부모이다
    if (!u->_parent)
    {
        _root = v;
    }
    else if (u == u->_parent->_left)
    {
        u->_parent->_left = v;
    }
    else
    {
        u->_parent->_right = v;
    }

    if (v)
        v->_parent = u->_parent;

    delete u;

}

