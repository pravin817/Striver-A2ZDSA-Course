/*
    Problem Statement : Print from N to 1 using recursion.
*/

#include <iostream>
using namespace std;

void print(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << endl;
    print(n - 1);
}

int main()
{

    print(10);

    return 0;
}