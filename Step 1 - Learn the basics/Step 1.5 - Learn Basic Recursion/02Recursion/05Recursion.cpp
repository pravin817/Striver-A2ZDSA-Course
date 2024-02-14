/*
    Problem Statement : Print from N to 1 (By BackTrack) using recursion.
*/

#include <iostream>
using namespace std;


void print(int start, int end){
    if(start > end){
        return;
    }
    cout<<start<<endl;
    start++;
    print(start,end);
}

int main()
{
    print(1,10);
    return 0;
}