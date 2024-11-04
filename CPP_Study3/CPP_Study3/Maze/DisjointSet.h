#pragma once

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

