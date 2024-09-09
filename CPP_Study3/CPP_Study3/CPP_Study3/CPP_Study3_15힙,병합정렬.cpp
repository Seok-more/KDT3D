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
#include "RedBlackTree/RBTree.h"
#include <thread>

using namespace std;

// 힙 정렬 O(NlogN)
void HeapSort(vector<int>& v)
{
    priority_queue<int, vector<int>, greater<int>>pq;

    // O(NlogN)
    for (int num : v)
    {
        pq.push(num);
    }

    v.clear();


    // O(NlogN)
    while (pq.empty() == false)
    {
        v.push_back(pq.top());
        pq.pop();
    }

}


// 병합 정렬 O(NlogN)
// - 분할 정복 (Divide and Conquer)
// -- 분할 : 문제를 더 단순하게 분할한다.
// -- 정복 : 분할된 문제를 해결
// -- 결합 : 결과를 취합하여 마무리

// [3][13][7][2][11][4][8][9]                            8개 * 1
// [3][13][7][2]    [11][4][8][9]                        4개 * 2
// [3][13]  [7][2]  [11][4]  [8][9]                      2개 * 4
// [3]  [13]  [7]  [2]  [11]  [4]  [8]  [9]              1개 * 8
// [3][13]  [2][7]  [4][11]  [8][9]                      2개 * 4
// [2][3][7][13]    [4][8][9][11]                        4개 * 2
// [2][3][4][7][8][9][11][13]                            8개 * 1

void MergeResult(vector<int>& v, int left, int mid, int right)
{
    // [2][3][7][13]    [4][8][9][11]
    // [l]              [r]

    int leftIdx = left;
    int rightIdx = mid + 1;

    // [2]
    vector<int> temp;

    while (leftIdx <= mid && rightIdx <= right)
    {
        if (v[leftIdx] <= v[rightIdx])
        {
            temp.push_back(v[leftIdx]);
            ++leftIdx;
        }
        else
        {
            temp.push_back(v[rightIdx]);
            ++rightIdx;
        }

    }

    // 왼쪽이 먼저 끝났으면, 오른쪽 나머지 데이터 복사
    if (leftIdx > mid)
    {

        while (rightIdx <= right)
        {
            temp.push_back(v[rightIdx]);
            ++rightIdx;
        }
    }
    // 오른쪽이 먼저 끝나서 왼쪽 나머지 데이터 복사
    else
    {
        while (leftIdx <= left)
        {
            temp.push_back(v[leftIdx]);
            ++leftIdx;
        }
    }

    for (int i = 0; i < temp.size(); ++i)
    {
        v[left + i] = temp[i];
    }


}

void MergeSort(vector<int>& v, int left, int right)
{
    if (left >= right)
    {
        return;
    }

    int mid = (left + right) / 2;

    MergeSort(v, left, mid);
    MergeSort(v, mid + 1, right);

    // 결합
    MergeResult(v, left, mid, right);
}





int main()
{
    vector<int> v;

    srand(static_cast<unsigned int>(time(0)));
    for (int i = 0; i < 50; ++i)
    {
        int randvalue = rand() % 100;
        v.push_back(randvalue);
    }



    //HeapSort(v);
    MergeSort(v, 0, v.size() - 1);

    return 0;
}

