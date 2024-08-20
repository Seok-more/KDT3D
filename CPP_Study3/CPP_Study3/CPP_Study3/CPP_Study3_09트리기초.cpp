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
using namespace std;


// 트리 구조
// - 계층적 구조를 갖는 데이터를 표현하기 위한 자료구조
// - 노드, 엣지로 구성


using NodeRef = shared_ptr<struct Node>;

struct Node
{
public:
    Node() {};
    Node(const string& In_data) : _data(In_data) {};

public:

    string _data;
    vector<NodeRef> _children;
};

NodeRef CreateTree()
{
    NodeRef root = make_shared<Node>("R1 개발실");
    {
        NodeRef node = make_shared<Node>("디자인팀");
        root->_children.push_back(node);
        {
            NodeRef leaf = make_shared<Node>("전투");
            node->_children.push_back(leaf);
        }
        {
            NodeRef leaf = make_shared<Node>("경제");
            node->_children.push_back(leaf);
        }
        {
            NodeRef leaf = make_shared<Node>("스토리");
            node->_children.push_back(leaf);
        }
    }

    {
        NodeRef node = make_shared<Node>("프로그래밍팀");
        root->_children.push_back(node);
        {
            NodeRef leaf = make_shared<Node>("서버");
            node->_children.push_back(leaf);
        }
        {
            NodeRef leaf = make_shared<Node>("클라");
            node->_children.push_back(leaf);
        }
        {
            NodeRef leaf = make_shared<Node>("엔진");
            node->_children.push_back(leaf);
        }
    }

    {
        NodeRef node = make_shared<Node>("아트팀");
        root->_children.push_back(node);
        {
            NodeRef leaf = make_shared<Node>("배경");
            node->_children.push_back(leaf);
        }
        {
            NodeRef leaf = make_shared<Node>("캐릭터");
            node->_children.push_back(leaf);
        }
    }




    return root;
}


void PrintTree(NodeRef In_root, int depth)
{
    for (int i = 0; i < depth; ++i)
    {
        cout << "-";
    }

    cout << In_root->_data << endl;

    for (NodeRef& child : In_root->_children)
    {
        PrintTree(child, depth + 1);
    }

}

// depth : 루트에서 어떤 노드에 도달하기 위해 거쳐야하는 엣지의 개수 ( 몇층? )
// height : 가장 깊숙히 있는 노드의 깊이 ( max(depth) )

int GetHeight(NodeRef In_root)
{
    int height = 1; // 나자신의 높이는 1

    for (NodeRef& child : In_root->_children)
    {
        // 더 큰 높이로 갱신
        height = max(height, GetHeight(child) + 1); // 내 자식의 높이에서 1을 더한게 내 높이

    }

    return height;
}


int main()
{
    NodeRef root = CreateTree();

    PrintTree(root, 0);
    int height = GetHeight(root);
    cout << height << endl;

    return 0;
}
