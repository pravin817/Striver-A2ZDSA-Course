/*
    Problem Statement : You are give a number n you need to count the number of digit it has.

    eg.

    12334 ==> 4
    123   ==> 3
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int solution1(int n)
{
    int cnt = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        cnt++;
        n = n / 10;
    }
    return cnt;
}

/*
    Analysis:
    Time Complexity : O(log(10)n)
    Space Complexity : O(1)
*/

// Convert the number into the string and return the length of the string
int solution2(int n)
{
    string str = to_string(n);

    // return the length of the string
    return str.length();
}

/*
    Analysis:

    Operation               TC          SC
    Conversion to string	O(log n)	O(log n)
    String length	        O(1)	    O(1)
    Overall	                O(log n)	O(log n)
*/

// Appoach : 3 - By using the logarithms

int solution3(int n)
{
    return floor(log10(n) + 1);
}

/*
    Analysis:
    Time Complexity : O(1)
    Space Complexity : O(1)
*/

int main()
{

    int num;
    cout << "Enter the number : ";
    cin >> num;

    // int ans = solution1(num);
    // int ans = solution2(num);
    int ans = solution3(num);

    cout << "The number of digit is : " << ans << endl;

    return 0;
}