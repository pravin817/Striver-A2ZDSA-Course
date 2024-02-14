/*
    Problem Statement:
        Write a C++ Program for the reversal of the array.
*/

#include <iostream>
using namespace std;

void print(int arr[], int n)
{
    cout << "Printing the array elements : ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

void reverse(int arr[], int n)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        // int temp = arr[low];
        // arr[low] = arr[high];
        // arr[high] = temp;
        // low++;
        // high--;
        swap(arr[low++], arr[high--]);
    }
}

void RecReverse(int arr[], int low, int high)
{

    // base case
    if (high <= low)
    {
        return;
    }

    swap(arr[low], arr[high]);

    return RecReverse(arr, low + 1, high - 1);
}

// Recursive reverse using the one pointer
void RecReverseOnePointer(int arr[], int start, int n)
{

    // base case
    if (start >= n / 2)
    {
        return;
    }

    // Small task - swap
    swap(arr[start], arr[n - start - 1]);

    // Recursive call
    return RecReverseOnePointer(arr, start + 1, n);
}
int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;

    // Iteration
    print(arr, n);

    // reverse(arr, 10);
    // RecReverse(arr, 0, n - 1);
    RecReverseOnePointer(arr, 0, n);

    print(arr, n);

    return 0;
}