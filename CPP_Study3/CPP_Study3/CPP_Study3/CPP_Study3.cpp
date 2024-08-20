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


// 힙 트리 이론
// 1. 부모노드가 항상 자식노드보다 크다
// 2. 노드 개수가 정해지면 트리 구조가 확정된다.
// 3. 배열을 이용한 힙구조 : i 번 노드의 왼쪽 자식 : [(2*i) + 1]번, 오른쪽 자식 : [(2*i) + 2]번,   부모 노드 : [(i - 1) / 2]번

// 우선순위 큐 구현


struct Node
{
public:
    Node() = default;
    Node(const int& In_data) : _data(In_data) {};

public:
    int _data;
    Node* _parent;
    Node* _right;
    Node* _left;


};


template<typename T>
class Priority_queue
{
public:

private:
    int _data;
    
};






int main()
{
    // 사실 이미 있음
    //priority_queue<int> pq;
    priority_queue<int, vector<int>, greater<int>> pq; // 역순방법

    pq.push(100);
    pq.push(500);
    pq.push(400);
    pq.push(300);
    pq.push(200);

    while (pq.empty() == false) // 다 빌때 까지
    {
        int value = pq.top();
        pq.pop();
        
        cout << value << endl; 
    }

    return 0;
}
