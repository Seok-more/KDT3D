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

// 그래프

void CreateGraph_1()
{

    struct Vertex
    {
        vector<Vertex*> _edges;
    };

    vector<Vertex> v;
    v.resize(6);

    v[0]._edges.push_back(&v[1]);
    v[0]._edges.push_back(&v[3]);
    v[1]._edges.push_back(&v[0]);
    v[1]._edges.push_back(&v[2]);
    v[1]._edges.push_back(&v[3]);
    v[3]._edges.push_back(&v[4]);
    v[5]._edges.push_back(&v[4]);

    // Q) 0번 -> 3번 정점이 연결되어 있나요?
    bool connected = false;
    for (Vertex* edge : v[0]._edges)
    {
        if (edge == &v[3])
        {
            connected = true;
            break;
        }
    }

}


void CreateGraph_2()
{

    struct Vertex
    {

    };

    vector<Vertex> v;
    v.resize(6);

    // 연결된 목록을 따로 관리
    // adjacent[n] : n번째 버텍스와 연결된 버텍스의 목록

    vector<vector<int>> adjacent(6); // 2차배열, 벡터안에 벡터들이 있는거

    adjacent[0] = { 1,3 }; // 첫번째 벡터(버텍스)에 연결되어있는 버텍스들은 1, 3이다.
    adjacent[1] = { 0,2,3 };
    adjacent[3] = { 4 };
    adjacent[5] = { 4 };

    // 정점이 100개면
    // - 지하철 노선도 -> 드문 드문 연결
    // - 인스타 친구 -> 서로 빽빽하게 연결

    // Q) 0번 -> 3번 정점이 연결되어 있나요?
    bool connected = false;
    for (int vertex : adjacent[0])
    {
        if (vertex == 3)
        {
            connected = true;
            break;
        }
    }

    // STL 사용
    vector<int>& findAdj = adjacent[0];
    bool connected2 = (find(findAdj.begin(), findAdj.end(), 3) != findAdj.end());


}

void CreateGraph_3()
{

    struct Vertex
    {

    };

    vector<Vertex> v;
    v.resize(6);

    // 연결된 목록을 따로 관리
    // 메모리 소모가 많지만, 빠른 접근 가능 -> 간선이 많다면 효율적임
    // 연결된 목록에만 O 표시
    // 0[X][O][X][O][X][X]
    // 1[O][X][O][O][X][X]
    // 2[X][X][X][X][X][X]
    // 3[X][X][X][X][O][X]
    // 4[X][X][X][X][X][X]
    // 5[X][X][X][X][O][X]

    // 읽는 방법 : adjacent[from][to] : 0에서 1번이 연결되어있다
    vector<vector<bool>> adjacent(6, vector<bool>(6, false)); // 2차배열, 벡터안에 벡터들(6개의 bool, false로 초기화)이 있는거
    adjacent[0][1] = true;
    adjacent[0][3] = true;
    adjacent[1][0] = true;
    adjacent[1][2] = true;
    adjacent[1][3] = true;
    adjacent[3][4] = true;
    adjacent[5][4] = true;


    // Q) 0번 -> 3번 정점이 연결되어 있나요?
    bool connected = adjacent[0][3];


    // 가중치가 있는 그래프
    vector<vector<int>> adjacent_w =
    {   // -1은 연결안됨
        vector<int> {-1, 15, -1, 35, -1, -1},    /* 0번 버텍스*/
        vector<int> {15, -1, 5, 10, -1, -1},     /* 1번 버텍스*/
        vector<int> {-1, -1, -1, -1, -1, -1},    /* 2번 버텍스*/
        vector<int> {-1, -1, -1, -1, 5, -1},     /* 3번 버텍스*/
        vector<int> {-1, -1, -1, -1, -1, -1},    /* 4번 버텍스*/
        vector<int> {-1, -1, -1, -1, 5, -1},     /* 5번 버텍스*/

    };


}



int main()
{
    CreateGraph_1();
    CreateGraph_2();
    CreateGraph_3();



    return 0;
}
