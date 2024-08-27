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
#include "BST/BinarySearchTree.h"

using namespace std;

// 이진 탐색 트리



int main()
{
    BinarySearchTree<int> bst;
    bst.insert(10);
    bst.insert(20);
    bst.insert(30);

    bst.Print_Inorder();

    return 0;
}
