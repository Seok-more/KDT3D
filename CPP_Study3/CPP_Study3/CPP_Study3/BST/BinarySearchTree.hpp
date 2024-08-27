#include "BinarySearchTree.h"



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
void BinarySearchTree<T>::Print_Inorder(Node<T>* In_node)
{
    // 순회(traverse)
    // - 전위 순회 (Preorder)
    // - 중위 순회 (Inorder)
    // - 후위 순회 (Postorder)

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

