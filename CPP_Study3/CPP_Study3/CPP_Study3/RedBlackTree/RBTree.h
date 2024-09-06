#pragma once
#include <iostream>
#include <windows.h>
using namespace std;

//      [10]
//    [5]  [20]
//       [15][30]

// Red-Black Tree
// 1. 모든 노드는 R/B
// 2. 루트와 리프는 B
// 3. Red의 자식은 B(연속 RR안됨)
// 4. 각 노드에서 리프까지의 모든 경로는 같은 수의 B노드를 포함


enum class Color
{
    Red = 0,
    Black = 1,
};



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
    Color _color = Color::Black;
};


template<typename T>
class RBinarySearchTree
{
public:
    RBinarySearchTree();
    ~RBinarySearchTree();

public:
    void insert(int In_key);
    void insertFixUp(Node<T>* In_node);


    void Delete(int In_key);
    void Delete(Node<T>* In_node);
    void DeleteFixup(Node<T>* In_node);

    void Print();
    void Print(Node<T>* node, int x, int y);


    Node<T>* Search(Node<T>* In_node, int In_key);


    Node<T>* Min(Node<T>* In_node);
    Node<T>* Max(Node<T>* In_node);
    Node<T>* Next(Node<T>* In_node);

    void Replace(Node<T>* u, Node<T>* v);

    // Red-Black Tree---------------------------------------------------
    void LeftRotate(Node<T>* In_node);
    void RightRotate(Node<T>* In_node);



private:
    Node<T>* _root = nullptr;
    Node<T>* _nil = nullptr;

};

#include"RB.hpp"

