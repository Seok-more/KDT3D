#pragma once
#include <iostream>
using namespace std;

//      [10]
//    [5]  [20]
//       [15][30]


template<typename T>
struct Node
{
public:
    Node() = default;
    

public:
    Node* _parent  = nullptr;
    Node*   _left  = nullptr;
    Node*   _right = nullptr;
    T _key = {};
};


template<typename T>
class BinarySearchTree
{
public:


public:
    void insert(int In_key);
    void Print_Inorder(Node<T>* In_node);

    void Print_Inorder()
    {
        Print_Inorder(_root);
    }


private:
    Node<T>* _root = nullptr;

};

#include"BinarySearchTree.hpp"