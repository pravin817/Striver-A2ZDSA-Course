/*

    Problem statement
    You are given an integer 'n'.

    Return 'true' if 'n' is an Armstrong number, and 'false' otherwise.

    Note:
    An Armstrong number is a number (with 'k' digits) such that the sum of its digits raised to 'kth' power is equal to the number itself. For example, 371 is an Armstrong number because 3^3 + 7^3 + 1^3 = 371.

    Example:
    Input: 'n' = 1634

    Output: true

    Explanation:
    1634 is an Armstrong number, as 1^4 + 6^4 + 3^4 + 4^4 = 1634

    Detailed explanation ( Input/output format, Notes, Images )
    Sample Input 1 :
    1

    Sample Output 1 :
    true

    Explanation of Sample Input 1 :
    1 is an Armstrong number as, 1^1 = 1.

    Sample Input 2 :
    103

    Sample Output 2 :
    false

    Expected Time Complexity:
    Try to solve this in O(log(n)).

    Constraints:
    1 <= ‘n’ <= 10^9

    Time Limit: 1 sec

*/

// get the number of the Digits in number
int digitCount(int n)
{
    return floor(log10(n) + 1);
}

int armStrong(int n, int x)
{
    int num = 0;

    while (n > 0)
    {
        int lastDigit = n % 10;
        num = num + pow(lastDigit, x);
        n = n / 10;
    }

    return num;
}

bool checkArmstrong(int n)
{
    int x = digitCount(n);

    int num = armStrong(n, x);

    return n == num;
}

/*
    Analysis:
    Time Complexity : O(logn)
    Space Complexity : O(1)
*/