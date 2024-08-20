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

// 다익스트라 알고리즘

struct Vertex
{
    // int data;
};

vector<Vertex> vertices;
vector<vector<int>> adjacent; // 인접행렬

void CreateGraph()
{
    vertices.resize(6);
    adjacent = vector<vector<int>>(6, vector<int>(6, -1));
    // -1 -1 -1 -1 -1 -1  : -1은 인접하지 않음을 의미
    // -1 -1 -1 -1 -1 -1 
    // -1 -1 -1 -1 -1 -1 
    // -1 -1 -1 -1 -1 -1 
    // -1 -1 -1 -1 -1 -1 
    // -1 -1 -1 -1 -1 -1 

    adjacent[0][1] = 15; // from 0 to 1 ; cost 15
    adjacent[0][3] = 35;
    adjacent[1][0] = 15;
    adjacent[1][2] = 5;
    adjacent[1][3] = 10;
    adjacent[3][4] = 5;
    adjacent[5][4] = 5;

}


void Dijikstra(int here)
{
    struct VertexCost
    {
    public:
        int _vertex;
        int _cost;
    };

    // 알고리즘 기본 세팅
    list<VertexCost> discovered; // 발견 목록: 먼저 발견된 애가 먼저 접근한다는 보장이 없어서 queue가 아니라 list로 함
    vector<int> best(6, INT32_MAX); // 각 버텍스 별로 지금까지 발견한 최적코스트: INT32_MAX 이거는 Int32로 표현할 수 있는 최댓값(2,147,483,647)이라서, 벡터의 각 요소에 더 작은 값을 저장하여 비교하는데 용이함
    vector<int> parent(6, -1); // 나는 누구에 의해 발견되었는가

    // 시작점 초기화
    discovered.push_back(VertexCost{ here, 0 }); // 구조체 멤버 변수 값 지정하는거 기본
    best[here] = 0; // 여기(시작점)까지의 최적 코스트는 0으로 초기화
    parent[here] = here; // 시작점의 부모는 시작점으로 초기화

    while (discovered.empty() == false) // discovered가 빌때까지
        // 근데 이게 사실 느려, 다익스트라는 결국 모든 경로(원하지 않는 부분까지)를 다 스캔해서 좋은 케이스를 찾는거라 의미 없음둥
    {
        // 최적 탐색 후보 초기화
        list<VertexCost>::iterator bestIt; // 최적버텍스 초기화
        int bestCost = INT32_MAX;          // 최적코스트 초기화


        // 탐색 순회 (최적코스트 탐색 후, it가 그것을 가리키게)
        // 모든 코스트를 전부 스캔
        for (auto it = discovered.begin(); it != discovered.end(); ++it)
        {
            if (it->_cost < bestCost)
            {
                bestCost = it->_cost;
                bestIt = it;
            }
        }

        // 지금까지 발견한 애 중, 최적버텍스 방문
        int cost = bestIt->_cost;
        here = bestIt->_vertex; // 방문 준비
        discovered.erase(bestIt); // 방문할꺼니까, 예약에서 빼줌

        // 방문?: 더 짧은 경로를 뒤늦게 찾았다면 스킵 *A
        if (best[here] < cost)
        {
            continue;
        }

        // 방문!
        for (int there = 0; there < 6; ++there)
        {
            // 방문?: 연결되지않으면(-1) 스킵
            if (adjacent[here][there] == -1)
            {
                continue;
            }

            // 비용 계산
            int nextCost = best[here]/*부모에서부터 여기까지오는 최적코스트*/ + adjacent[here][there]; /*여기서부터 저기까지 가는 비용*/

            // 방문? : 과거에 더 최적인 경로가 있었다면 스킵
            if (best[there] <= nextCost)
            {
                continue;
            }

            // 최적 경로 탐색 완료
            discovered.push_back(VertexCost{ there, nextCost }); // (3, 35), (3, 25) 이 상황은 *A에서 걸러짐
            best[there] = nextCost;
            parent[there] = here; // there는 here에 의해 찾았다








        }




    }



}


int main()
{
    CreateGraph();
    Dijikstra(0);


    return 0;
}
