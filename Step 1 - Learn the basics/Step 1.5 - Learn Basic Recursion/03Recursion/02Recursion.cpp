/*
    Problem Statement:
        Write a C++ program for the finding the factorial of number.
*/

#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int main()
{

    int num;
    cout << "Enter the number : ";
    cin >> num;

    int fact = factorial(num);
    cout << "The factorial of " << num << " is : " << fact << endl;

    return 0;
}