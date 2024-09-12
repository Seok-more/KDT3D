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

// Disjoint Set(상호 배타적 접합)
// -> 유니온-파인드(Union-Find) 


// ex
// LineageBattleground
// 1인팀 1000명(팀 id : 0~999)
// 동맹 (1번팀 + 2번팀 = 1번팀)


void LineageBattleground()
{
    struct User
    {
        int teamID;
    };

    // TODO : UserManager
    vector<User> users;
    for (int i = 0; i < 1000; ++i)
    {
        users.push_back(User{ i });
    }

    // 팀 동맹
    //  users[1] <-> users[5]
    users[5].teamID = users[1].teamID; // [1]번팀으로 동맹함

    // [0][1][2][3][4]...[999]
    // [1][1][1]...[2][2]...[999]
    // teamID = 1 팀과, teamID = 2 팀을 동맹시키려면 

    for (User& user : users)
    {
        if (user.teamID == 1)
        {
            user.teamID = 2;
        }
    }
    // -> 찾기 연산 O(1), 합치기 연산 O(N)
}
//---------------------------------------------------------------

// 트리 구조를 이용한 상호 배타적 집합의 표현

// 1) [0][1][2][3][4][5]
struct Node
{
    Node* leader; // 처음엔 자기가 자기팀의 리더
};
//---------------------------------------------------------------
// 2)    [1]    [3]
//       [2]   [4][5]
//                [0]
// - 상위노드(부모)를 리더로 가리킴

class NaiveDisjointSet
{
public:
    NaiveDisjointSet(int n) : _parent(n)
    {
        for (int i = 0; i < n; ++i)
        {
            _parent[i] = i;
        }
    }
public:
    // 최상위노드를 찾는 함수 (4의 부모는 3, 0의 부모는 5이지만 최상위 노드는 3으로 동일)
    int Find(int u)
    {
        if (u == _parent[u])
        {
            return u;
        }

        return Find(_parent[u]);
    }
    //---------------------------------------------------------------
    // 3)             [3]
    //             [4][5][1]
    //                [0][2]

    // 시간 복잡도 : 트리의 높이가 비례한 시간이 걸림

        // u와 v를 합친다 (일단 u가 v 밑으로 )
        // 트리가 한쪽으로 기우는 문제를 해결
        // -> [높이가 낮은 트리를] [높이가 높은 트리] 밑으로 (Union-By-Rank)
    void Merge(int u, int v)
    {
        u = Find(u);
        v = Find(v);

        if (u == v)
        {
            return;
        }
        _parent[u] = v;
    }

private:
    vector<int> _parent;

};

//---------------------------------------------------------------

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



int main()
{
    DisjointSet teams(1000);

    teams.Merge(10, 1);
    int teamID = teams.Find(1);
    int teamID2 = teams.Find(10);

    teams.Merge(3, 2);
    int teamID3 = teams.Find(3);
    int teamID4 = teams.Find(2);

    teams.Merge(1, 3);
    int teamID5 = teams.Find(1);
    int teamID6 = teams.Find(3);

    return 0;
}

