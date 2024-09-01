#pragma once
#include <iostream>
#include <windows.h>
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
    void Delete(int In_key);
    void Delete(Node<T>* In_node);

    void Print() { Print(_root, 10, 0); }
    void Print(Node<T>* node, int x, int y);


    Node<T>* Search(Node<T>* In_node, int In_key);
    Node<T>* Search2(Node<T>* In_node, int In_key);

    Node<T>* Min(Node<T>* In_node);
    Node<T>* Max(Node<T>* In_node);
    Node<T>* Next(Node<T>* In_node);


    void Print_Inorder(Node<T>* In_node);

    void Print_Inorder()
    {
        Print_Inorder(_root);
    }

    void Replace(Node<T>* u, Node<T>* v);


private:
    Node<T>* _root = nullptr;

};

#include"BinarySearchTree.hpp"