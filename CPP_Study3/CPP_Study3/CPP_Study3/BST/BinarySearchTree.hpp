#include "BinarySearchTree.h"


void SetCursorPosition(int x, int y)
{
    HANDLE output = ::GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos = { static_cast<SHORT>(x), static_cast<SHORT>(y) };
    ::SetConsoleCursorPosition(output, pos);
}


template<typename T>
void BinarySearchTree<T>::insert(int In_key)
{
    Node<T>* newNode = new Node<T>();
    newNode->_key = In_key;

    if (!_root)
    {
        _root = newNode;
        return;
    }

    Node<T>* node = _root;     // 비교하는 노드
    Node<T>* parent = nullptr; // 내가 어디서 왔는지 표시

    while (node)
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

    if (In_key < parent->_key)
    {
        parent->_left = newNode;
    }
    else
    {
        parent->_right = newNode;
    }
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
    if (!In_node)
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
    if (node == nullptr)
    {
        return;
    }

    SetCursorPosition(x, y);
    cout << node->_key;
    Print(node->_left, x - (5 / (y + 1)), y + 1);
    Print(node->_right, x + (5 / (y + 1)), y + 1);

}

template<typename T>
inline Node<T>* BinarySearchTree<T>::Search(Node<T>* In_node, int In_key)
{
    if (!In_node || In_key == In_node->_key)
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
inline Node<T>* BinarySearchTree<T>::Search2(Node<T>* In_node, int In_key)
// 성능적으로는 조금 더 이득
{
    while (In_node && In_key != In_node->_key)
    {
        if (In_key < In_node->_key)
        {
            In_node = In_node->_left;
        }
        else
            In_node = In_node->_right;
    }

    return In_node;
}

template<typename T>
inline Node<T>* BinarySearchTree<T>::Min(Node<T>* In_node)
{
    if (!In_node)
    {
        return In_node;
    }

    while (In_node->_left)
    {
        In_node = In_node->_left;
    }

    return In_node;
}

template<typename T>
inline Node<T>* BinarySearchTree<T>::Max(Node<T>* In_node)
{
    if (!In_node)
    {
        return In_node;
    }

    while (In_node->_right)
    {
        In_node = In_node->_right;
    }

    return In_node;
}

template<typename T>
inline Node<T>* BinarySearchTree<T>::Next(Node<T>* In_node)
{
    if (In_node->_right)
    {
        return Min(In_node->_right);
    }

    Node<T>* parent = In_node->_parent;

    while (parent && In_node == parent->_right)
    {
        In_node = parent;
        parent = parent->_parent;
    }

    return parent ;
}


template<typename T>
void BinarySearchTree<T>::Print_Inorder(Node<T>* In_node)
{
    // 순회(traverse)
    // - 전위 순회 (Preorder)
    // - 중위 순회 (Inorder)
    // - 후위 순회 (Postorder)

    // [중][좌][우]

    if (!In_node)
    {
        return;
    }

    // 전위
    cout << In_node->_key << endl;
    Print_Inorder(In_node->_left);
    // 중위
    Print_Inorder(In_node->_right);

    // 후위


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

