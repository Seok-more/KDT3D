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
#include "RedBlackTree/RBTree.h"
#include <thread>

using namespace std;

// 이진 탐색 트리



int main()
{
    RBinarySearchTree<int> bst;
    bst.insert(30);
    bst.Print();
    this_thread::sleep_for(1s);

    bst.insert(10);
    bst.Print();
    this_thread::sleep_for(1s);

    bst.insert(20);
    bst.Print();
    this_thread::sleep_for(1s);

    bst.insert(25);
    bst.Print();
    this_thread::sleep_for(1s);

    bst.Delete(20);
    bst.Print();
    this_thread::sleep_for(1s);

    bst.Delete(10);
    bst.Print();
    this_thread::sleep_for(1s);

    return 0;
}
