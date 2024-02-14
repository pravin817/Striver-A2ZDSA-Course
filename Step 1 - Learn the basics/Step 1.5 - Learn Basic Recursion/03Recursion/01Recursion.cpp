/*
    Problem Statement:
        Write a C++ program for the finding the sum of first N Natural numbers.

*/

#include <iostream>
using namespace std;

// Functional Recursion
int sumOfFirstNNaturalNumber(int n)
{
    // base case
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + sumOfFirstNNaturalNumber(n - 1);
    }
}

// Parameterised Recursion

void parameterisedSum(int n, int sum)
{
    if (n == 0)
    {
        cout << sum << endl;
        return;
    }
    else
    {
        return parameterisedSum(n - 1, sum + n);
    }
}
int main()
{

    int num;
    cout << "Enter the number : ";
    cin >> num;

    int ans = sumOfFirstNNaturalNumber(num);
    cout << "The sum of first " << num << " Natural Number is : " << ans << endl;

    parameterisedSum(num, 0);

    return 0;
}