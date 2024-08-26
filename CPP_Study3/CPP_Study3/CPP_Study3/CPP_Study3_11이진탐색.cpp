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

// 이진 탐색 트리

// 이진탐색(Binary Search)
// 상황) 배열에 데이터가 정렬되어있음

//  Q) 82라는 숫자가 배열에 있는가?
//  A) O(N)
// [1][8][23][25][32][44][56][63][81][91]   (정렬이되어있음)

// 정렬된 배열 -> 이진 탐색 가능 -> but, 중간 삽입/삭제가 느림
// 정렬된 연결리스트 -> 이진 탐색 불가; 임의 접근이 불가능하니까
vector<int> numbers;


// O(logN)
void BinarySearch(int N) // 찾으려는 숫자 N
{
    // 인덱스
    int left = 0;
    int right = (int)numbers.size() - 1;

    while (left <= right)
    {
        cout << format("범위 : {} ~ {} ", left, right);
        int mid = (left + right) / 2;

        if (N < numbers[mid])
        {
            cout << N << '<' << numbers[mid] << endl;
            right = mid - 1;
        }
        else if (N > numbers[mid])
        {
            cout << N << '>' << numbers[mid] << endl;
            left = mid + 1;
        }
        else
        {
            cout << "Found" << endl;
            break;
        }
    }
}

int main()
{
    numbers = { 1,8,23,25,32,44,56,63,81,91 };
    BinarySearch(72);

    return 0;
}
