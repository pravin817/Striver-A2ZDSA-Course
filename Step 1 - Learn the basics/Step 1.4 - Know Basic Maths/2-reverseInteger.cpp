/*
    Problem Statement:

    Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

    Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

    Example 1:

    Input: x = 123
    Output: 321
    Example 2:

    Input: x = -123
    Output: -321
    Example 3:

    Input: x = 120
    Output: 21


    Constraints:

    -231 <= x <= 231 - 1

*/

class Solution
{
public:
    int reverse(int x)
    {
        int ans = 0;

        while (x)
        {

            // Take the lastDigit
            int lastDigit = x % 10;

            // Check the underflow and overfloe
            if (ans > INT_MAX / 10 || ans < INT_MIN / 10)
            {
                return 0;
            }

            // add the lastDigit to ans
            ans = ans * 10 + lastDigit;

            // update the num
            x = x / 10;
        }
        return ans;
    }
};

/*
    Analysis:
    Time Complexity : O(log10(n))
    Space Complexity : O(1)
*/