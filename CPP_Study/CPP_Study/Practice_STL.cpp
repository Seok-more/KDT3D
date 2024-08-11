#include "Practice_STL.h"

vector<int>::iterator Findit(vector<int>& v, int num)
{
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (*it == num)
        {
            cout << "Findit" << *it << endl;
            return it;
        }
    }
    cout << "Missing" << endl;
    return v.end();
}

vector<int>::iterator Dv11it(vector<int>& v, int num)
{
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (*it % num == 0 && *it != 0)
        {
            cout << *it << " is divided by 11" << endl;
            return it;
        }
    }
    cout << "No number divided by 11" << endl;
    return v.end();
}

int OddCount(vector<int>& v)
{
    int count = 0;
    for (int i = 0; i < v.size(); ++i)
    {
        if (v[i] % 2 == 1)
        {
            ++count;
        }
    }
    cout << "Odd is" << count << endl;
    return count;
}

void Mul3onV(vector<int>& v)
{
    for (int i = 0; i < v.size(); ++i)
    {
        // int& real = v[i]; // v[i]는 &을 뱉어줌
        // real *= 3;           그래서 굳이 이렇게안하고 바로
        v[i] *= 3;
        cout << v[i] << endl; 
    }
}
