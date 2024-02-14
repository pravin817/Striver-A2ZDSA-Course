/*
    Problem Statement :
        Write a C++ Program for finding the Nth fibonacci Number.

        0th - 0
        1st - 1
        2nd - 1
        3rd - 2
        4th - 3
        5th - 5
        6th - 8
        7th - 13
        8th - 21
        9th - 34
        10th - 55
        11th - 89
        12th - 144
        13th - 233
        14th - 377

        Like wise the series goes on.


        */

#include <iostream>
using namespace std;

int fib(int n)
{
    // Base case
    if (n == 0 || n == 1)
    {
        return n;
    }

    // small calculation + recursive call
    return fib(n - 1) + fib(n - 2);
}

// Striver's code

int fibRec(int n)
{
    // Base case
    if (n <= 1)
    {
        return n;
    }

    int last = fibRec(n - 1);
    int slast = fibRec(n - 2);

    return last + slast;
}

int main()
{

    int num;
    cout << "Enter the number : ";
    cin >> num;

    // int ans = fib(num);
    int ans = fibRec(num);

    cout << "The " << num << " th fibonacci number is : " << ans << endl;

    return 0;
}
