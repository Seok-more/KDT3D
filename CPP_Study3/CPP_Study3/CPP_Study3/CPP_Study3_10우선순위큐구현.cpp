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

template<typename T>
struct Node
{
public:
    Node() = default;
    Node(const int& In_data) : _data(In_data) {};


public:
    int _data;


};


template<typename T, typename Container = vector<T>, typename Predicate = less<T>>
class Priority_queue
{

public:

    void push(const T& _data)
    {
        // 우선 힙 구조부터 맞춰준다. 맨 아래 위치
        _heap.push_back(_data);

        // 아래에서 위로 도장깨기 시작
        int now = static_cast<int>(_heap.size()) - 1;

        // 루트 노드까지 진행 
        while (now > 0)
        {
            // 부모 노드의 데이터와 비교해서 더 작으면 끝
            int next = (now - 1) / 2;


            if (_predicate(_heap[now], _heap[next]))
            {
                break;
            }

            // 데이터 교체
            std::swap(_heap[now], _heap[next]);
            now = next;
        }
    }

    void pop()
    {
        _heap[0] = _heap.back();
        _heap.pop_back();

        // 루트에서 부터 시작, 위에서 아래로 출발
        int  now = 0;
        while (true)
        {
            int left = 2 * now + 1;
            int right = 2 * now + 2;

            // 리프에 도달한 경우
            if (left >= _heap.size())
            {
                break;
            }

            // 최소한 왼쪽에는 데이터가 있다
            int next = now;

            // 왼쪽과 비교
            if (_predicate(_heap[next], _heap[left]))
            {
                // 왼쪽으로 가야함
                next = left;
            }

            // 둘 중, 승자를 오른쪽과 비교, 물론 오른쪽이 없는 경우도 있음
            if (right < _heap.size()/*오른쪽이 있다*/ && _predicate(_heap[next], _heap[right]))
            {
                // 오른쪽으로 가야함
                next = right;
            }

            // 왼쪽, 오른쪽 둘 다 현재 값보다 작으면 종료
            if (next == now) { break; }

            std::swap(_heap[now], _heap[next]);
            now = next;

        }
    }

    T& top()
    {
        return _heap[0];
    }

    bool empty()
    {
        return _heap.empty();
    }


private:
    Container _heap = {};
    Predicate _predicate = {};
};






int main()
{
    // 사실 이미 있음
    //Priority_queue<int> pq;
    Priority_queue<int, vector<int>, greater<int>> pq; // 역순방법

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
