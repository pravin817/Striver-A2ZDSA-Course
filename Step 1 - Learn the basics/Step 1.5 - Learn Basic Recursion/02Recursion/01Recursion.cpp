/*
    Problem Statement : Print Name 5 times using recursion.
*/

#include <iostream>
using namespace std;

void printName(string name, int start, int end)
{
    if (start > end)
    {
        return;
    }

    cout << name << " : " << start << endl;
    printName(name, start+1, end);
}

int main()
{
    int n;
    cout << "Enter the n:";
    cin >> n;
    printName("Raj", 1, n);
    return 0;
}
