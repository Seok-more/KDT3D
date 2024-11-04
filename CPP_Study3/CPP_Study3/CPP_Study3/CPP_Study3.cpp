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

// 해시테이블

// map vs hash_map(unordered_map)

// map : Red-Black Tree
// - 추가/탐색/삭제 : O(logN)

// hash_map(unordered_map) 
// - 추가/탐색/삭제 : O(1)
// 충돌만 자주 안나면 훨씬 빠름

// 메모리를 내주고 속도를 취한다.

// UserID 1~999
// [1][2][3][4][5]...[999]

// 테이블 : O(1)
// - 키를 알면 데이터를 찾을 수 있다.
void TestTable()
{
    struct User
    {
    public:
        int userID = 0;
        string userName;
    };

    vector<User> users;
    users.resize(1000);

    // 777번 유저 세팅
    users[777] = User{ 777, "asd" };

    // 777번 유저의 이름은 뭔가요?
    string username777 = users[777].userName;

    cout << username777 << endl;
}



// 해시 : O(1)
void TestHash()
{
    struct User
    {
    public:
        int userID = 0;
        string userName;
    };

    vector<User> users;
    users.resize(1000);

    const int userID = 123456789;
    int key = (userID % 1000); // hash < 고유번호

    // 123456789번 유저 세팅
    users[key] = User{ userID, "asd" };

    // 123456789번 유저의 이름은 뭔가요?
    User& user = users[key];

    if (user.userID = userID)
    {
        string username123456789 = user.userName;
        cout << username123456789 << endl;
    }
}


// 충돌 문제 (key값이 겹침)
    // - ex : 123456789 와 789의 키값이 겹침
    // - 충돌이 발생한 자리를 대신해서 다른 빈자리를 찾는다
    // -- 선형 조사법 (linear probing)
    // --- hash(key)+1 -> hash(key)+2
    // -- 이차 조사법 (quadratic probing)
    // --- hash(key)+1^2 -> hash(key)+2^2
    // ...etc



// 해시테이블체이닝 : O(1)
void TestHashTableChaining()
{
    struct User
    {
    public:
        int userID = 0;
        string userName;
    };

    //    [ ]   
    //    [ ]      [ ]
    // [ ][ ][ ][ ][ ][ ][ ][ ]
    vector<vector<User>> users;
    users.resize(1000);

    const int userID = 123456789;
    int key = (userID % 1000); // hash < 고유번호

    // 123456789번 유저 세팅
    users[key].push_back(User{ userID, "asd" });
    users[789].push_back(User{ 789, "asd" });

    // 123456789번 유저 이름은?
    vector<User>& bucket = users[key];

    for (User& user : bucket)
    {
        if (user.userID == userID)
        {
            string Name = user.userName;
            cout << Name << endl;
        }
    }

}


int main()
{
    //TestTable();
    //TestHash();
    TestHashTableChaining();

    return 0;
}

