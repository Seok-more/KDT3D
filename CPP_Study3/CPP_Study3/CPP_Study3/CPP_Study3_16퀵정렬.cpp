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


//  [5][1][3][7][9][2][4][6][8]
//   p 
//      l                    h


// 퀵정렬
int Partition(vector<int>& v, int left, int right)
{
    int pivot = v[left];
    int low = left + 1;
    int high = right;

    //  O(N)
    // low-high가 교차가 될때 까지
    while (low <= high)
    {
        // 1단계 : Pivot보다 큰거 만날때까지 ++low, 작은거 만날떄까지 --high;
        while (low <= right && pivot >= v[low])
        {
            ++low;
        }

        while (high >= left + 1 && pivot <= v[high])
        {
            --high;
        }

        // 2단계 : 큰놈 작은놈 위치 바꾸기
        if (low < high)
        {
            swap(v[low], v[high]);
        }
    }

    // 3단계 : 처음에 피벗으로 선택했던 v[left]와 현재 high 위치에 있는 값을 교체
    // -> 피벗의 정확한 인덱스로 옮겨줌
    swap(v[left], v[high]);
    return high;
}


// 퀵정렬 O(N^2) ~ O(NlogN)
void QuickSort(vector<int>& v, int left, int right)
{
    if (left > right)
    {
        return;
    }

    int pivot = Partition(v, left, right);
    QuickSort(v, left, pivot - 1);
    QuickSort(v, pivot + 1, right);

}



int main()
{
    vector<int> v{ 1,3,5,2,4 };
    QuickSort(v, 0, v.size() - 1);
    return 0;
}

