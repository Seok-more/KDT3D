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

// 그래프탐색 - BFS (Breadth First Search)
// 길찾기에 유리

struct Vertex
{
    // int _data;
};

vector<Vertex> vertices;
vector<vector<int>> adjacent; // 2차 배열
vector<bool> discovered; // 발견한 곳인지 확인

void CreateGraph()
{
    // 그래프 만들기
    vertices.resize(6);
    adjacent = vector<vector<int>>(6);

    // 인접 리스트
    adjacent[0] = { 1, 3 };
    adjacent[1] = { 0, 2, 3 };
    adjacent[3] = { 4 };
    adjacent[5] = { 4 };

    // 인접 행렬
    //adjacent = vector<vector<int>>
    //{
    //    {0, 1, 0, 1, 0, 0},
    //    {1, 0, 1, 1, 0, 0},
    //    {0, 0, 0, 0, 0, 0},
    //    {0, 0, 0, 0, 1, 0},
    //    {0, 0, 0, 0, 0, 0},
    //    {0, 0, 0, 0, 1, 0},
    //};

}

void Bfs(int here)
{

    // 누구에 의해 발견되었는지?
    vector<int> parent(6, -1);

    // 시작점에서 얼만큼 떨어져 있는가
    vector<int> distance(6, -1);


    // 1 q[ 3 2 ]
    queue<int> q; // 발견한 버텍스를 예약,관리하는 큐

    q.push(here); // 시작 위치부터 예약
    discovered[here] = true; // 시작 위치 '발견'함(방문할 예정)
    parent[here] = here;
    distance[here] = 0;

    while (q.empty() == false) // 모든 곳은 발견할 때까지
    {
        here = q.front();
        q.pop();               // pop함으로써, 그곳은 '방문' 했음을 표시

        cout << "Visited : " << here << endl;

        // 인접 리스트 ver
        for (int there : adjacent[here])
        // 인접 행렬 ver
        // for (int there = 0; there <0; ++there)
        {
            // if(adjacent[here][there] == 0)
            // {
            //     continue;
            // }
            if (discovered[there])
            {
                // 이미 발견한 애들은 넘어가고
                continue;
            }

            // 처음 발견한 애들
            q.push(there); // 예약
            discovered[there] = true; // 발견했다고도 표시해주기 -> 방문할 예정인 큐에 예약하는것

            parent[there] = here; // there는 here에 의해 발견되었다.
            distance[there] = distance[here] + 1; // there는 here보다 1칸 더 멀리 있응께


        }

    }

}

void BfsAll()
{
    for (int i = 0; i < adjacent.size(); ++i)
    {
        if (discovered[i] == false)
        {
            Bfs(i);
        }
    }
}


int main()
{
    CreateGraph();

    discovered = vector<bool>(6, false); // 내가 앞으로 볼 버텍스들
    
    Bfs(0);
    //BfsAll();
   

    return 0;
}
