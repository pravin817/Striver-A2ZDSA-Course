/*
    Problem Statement: You are given a number n, you need to print the all divisors of that number.
*/

#include <bits/stdc++.h>
using namespace std;

// void printAllDivisors(int n)
// {
//     cout << "The divisors are : ";
//     for (int i = 1; i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             cout << i << " ";
//         }
//     }

//     cout << endl;
// }

/*
    Analysis:
    Time Complexity : O(n)
    Space Complexity : O(1)
*/

void printAllDivisors(int n)
{
    vector<int> v;

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
        }

        if (n % i != i)
        {
            v.push_back(n / i);
        }
    }

    sort(v.begin(), v.end());

    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
}

/*
    Analysis:
    Time Complexity : O(sqrt(n)) + O(nlogn) ====> O(nlogn)
    Space Complexity : O(logn)
*/

int main()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;

    printAllDivisors(num);
    return 0;
}
