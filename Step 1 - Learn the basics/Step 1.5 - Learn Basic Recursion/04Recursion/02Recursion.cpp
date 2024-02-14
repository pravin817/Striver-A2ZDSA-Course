/*
    Problem Statement:
        Write a C++ Program for to check if the string is palindrome or not using Recursion.
*/

#include <iostream>
using namespace std;

// This is the iterative solution
bool isPalindrome(string str, int n)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        if (str[low] != str[high])
        {
            return false;
        }
        else
        {
            low++;
            high--;
        }
    }

    return true;
}

// Recursive solution

bool isPalindromeRec(string str, int start, int n)
{

    // base case
    if (start >= n / 2)
    {
        return true;
    }

    // small task - check if the characters are same
    if (str[start] != str[n - start - 1])
    {
        return false;
    }

    // Recursive call
    return  isPalindromeRec(str, start + 1, n);
}

int main()
{
    string str;

    cout << "Enter the string : ";
    cin >> str;

    int n = str.size();

    // bool result = isPalindrome(str, n);
    bool result = isPalindromeRec(str, 0, n);

    if (result)
    {
        cout << "The string is palindrome." << endl;
    }
    else
    {
        cout << "The string is not palindrome." << endl;
    }

    return 0;
}