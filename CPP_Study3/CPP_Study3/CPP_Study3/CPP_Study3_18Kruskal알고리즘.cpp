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
#include <thread>

using namespace std;

// 최소 스패닝 트리(Minimum Spanning Tree)
// - 그래프/트리 응용
// - 최소 간선이용 : 사이클이 있으면 안됨

// KRUSKAL(크루스칼) MST 알고리즘
// - greedy 방법 : 지금 이 순간에 최적인 답을 선택해서 결과를 도출하자
// - 사이클이 있으면 안됨 : DisjointSet사용


// O(1)
class DisjointSet
{
public:
    DisjointSet(int n) : _parent(n), _rank(n, 1)
    {
        for (int i = 0; i < n; ++i)
        {
            _parent[i] = i;
        }
    }


    //       [1]      [3]
    //       [2]   [4][5][0]
    //                
public:
    // 최상위노드를 찾는 함수를 최적화
    int Find(int u)
    {
        if (u == _parent[u])
        {
            return u;
        }

        _parent[u] = Find(_parent[u]);
        return _parent[u];
    }


    // 시간 복잡도 : 트리의 높이가 비례한 시간이 걸림

        // u와 v를 합친다 (일단 u가 v 밑으로 )
    void Merge(int u, int v)
    {
        u = Find(u);
        v = Find(v);

        if (u == v)
        {
            return;
        }

        if (_rank[u] > _rank[v])
        {
            // rank[u] <= rank[v] 보장됨
            swap(u, v);
        }

        _parent[u] = v;


        // 이런 경우 처리
        //       [1]    [3]
        //       [2]   [4][5]
        //       [6]     [0]
        // ->
        //              [3]
        //           [4][5][1]
        //              [0][2]
        //                 [6]

        if (_rank[u] == _rank[v])
        {
            ++_rank[v];
        }

    }

private:
    vector<int> _parent;
    vector<int> _rank;
};

struct Vertex
{
    // int data;
};

vector<Vertex> vertices;
vector<vector<int>> adjacent; // 인접 행렬

void CreateGraph()
{
    vertices.resize(6);
    adjacent = vector<vector<int>>(6, vector<int>(6, -1)); // -1은 연결되지않은 상태
    // [from][to]

    adjacent[0][1] = adjacent[1][0] = 15;
    adjacent[0][3] = adjacent[3][0] = 35;
    adjacent[1][2] = adjacent[2][1] = 5;
    adjacent[1][3] = adjacent[3][1] = 10;
    adjacent[3][4] = adjacent[4][3] = 5;
    adjacent[3][5] = adjacent[5][3] = 10;
    adjacent[5][4] = adjacent[4][5] = 5;
}

struct CostEdge
{
    int cost;
    int u; // u 노드에서
    int v; // v 노드까지

    bool operator<(CostEdge& other)
    {
        return cost < other.cost;
    }
};

int Kruskal(vector<CostEdge>& selected)
{
    int ret = 0;

    selected.clear();

    vector<CostEdge> edges;

    for (int u = 0; u < adjacent.size(); ++u)
    {
        for (int v = 0; v < adjacent[u].size(); ++v)
        {
            if (u > v)
            {
                // [1][0]이 연결되면 [0][1]도 연결된 거니까
                continue;
            }

            int cost = adjacent[u][v];
            if (cost == -1)
            {
                continue;
            }

            edges.push_back(CostEdge{ cost, u , v });
        }
    }

    sort(edges.begin(), edges.end());

    DisjointSet sets(vertices.size());

    for (CostEdge& edge : edges)
    {
        // 같은 그룹이면 스킵(안그러면 사이클이 발생한다)
        if (sets.Find(edge.u) == sets.Find(edge.v))
        {
            continue;
        }

        // 두 그룹을 합친다
        sets.Merge(edge.u, edge.v);
        selected.push_back(edge);
        ret += edge.cost;

    }

    return ret;
}

int main()
{
    CreateGraph();

    vector<CostEdge> selected;
    int cost = Kruskal(selected);

    return 0;
}

