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

// 그래프탐색 - DFS (Depth First Search)

struct Vertex
{
    // int _data;
};

vector<Vertex> vertices;
vector<vector<int>> adjacent; // 2차 배열
vector<bool> visited; // 이미 방문한곳인지 확인

void CreateGraph()
{
    // 그래프 만들기
    vertices.resize(6);
    adjacent = vector<vector<int>>(6);

    // 인접 리스트
   // adjacent[0] = { 1, 3 };
   // adjacent[1] = { 0, 2, 3 };
   // adjacent[3] = { 4 };
   // adjacent[5] = { 4 };

    // 인접 행렬
    adjacent = vector<vector<int>>
    {
        {0, 1, 0, 1, 0, 0},
        {1, 0, 1, 1, 0, 0},
        {0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 1, 0},
        {0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 1, 0},
    };

}



// DFS

// Dfs(0)
// - Dfs(1)
// -- Dfs(2) -> 연결된 버텍스가 없으므로 돌아감
// - Dfs(3)
// -- Dfs(4)
// Dfs(5)는 연결된 엣지가 없어서 못봄 -> DfsAll()

void Dfs(int here /*시작은 어디냐*/)
{
    // 방문했다
    visited[here] = true;
    cout << "Visited : " << here << endl;

    // 인접 리스트 ver
    // 모든 인접 버텍스를 순회함
    // for (int i = 0; i < adjacent[here].size(); ++i)
    // {
    //     // 다음 방문할 곳
    //     int there = adjacent[here][i];
    // 
    //     if (visited[there] == false)
    //     {
    //         Dfs(there);
    //     }
    // }


    // 인접 행렬 ver
    // 모든 인접 버텍스를 순회한다.
    for (int there = 0; there < 6; ++there)
    {
        if (adjacent[here][there] == 0) // here(from)에서 there(to)로 가는 길이 끊겼으면
        {
            continue;
        }

        // 아직 방문하지 않은 곳이 있으면 방문한다
        if (visited[there] == false)
        {
            Dfs(there);
        }
    }


}

void DfsAll()
{
    visited = vector<bool>(6, false); // 버텍스가 6개니까 일단 false로 초기화

    for (int i = 0; i < 6; ++i)
    {
        if (visited[i] == false)
        {
            Dfs(i);
        }
    }
}


int main()
{
    CreateGraph();

    // visited = vector<bool>(6, false); // 버텍스가 6개니까 일단 false로 초기화
    // Dfs(0);
    DfsAll();




    return 0;
}
