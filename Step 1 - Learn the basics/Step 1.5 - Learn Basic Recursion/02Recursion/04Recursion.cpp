/*
    Problem Statement : Print Linearly from 1 to N (But by Backtrack) using recursion.
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

int main()
{

    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    print(n);

    return 0;
}