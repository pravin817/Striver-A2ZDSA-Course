/*
    Problem Statement : Print linearly from 1 to N using recursion.
*/

#include <iostream>
using namespace std;

void print(int n)
{
    if (n == 0)
    {
        return;
    }
    print(n - 1);
    cout << n << endl;
}

void print2(int cnt, int n)
{
    if (cnt > n)
    {
        return;
    }

    cout << cnt << endl;
    cnt++;
    print2(cnt++, n);
}

int main()
{
    print2(1, 10);
    return 0;
}