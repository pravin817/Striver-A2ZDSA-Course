#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print()
{
    cout << "Pravin";
}

int sum(int a, int b)
{
    return a + b;
}

/*

    The C++ STL is divided into four sections:

        1) Container
        2) Iterators
        3) Functions
        4) Algorithms


*/

// Pairs
void learnPair()
{

    pair<int, int> p = {1, 2};

    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> p1 = {1, {2, 3}};

    cout << p1.first << " " << p1.second.first << " " << p1.second.second << endl;

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};

    cout << arr[1].second << endl;
}

// Vectors

// Printing of the vectors -- for loop
void printVector(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

// using the iterators
void printVector1(vector<int> &v)
{
    // for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    // {
    //     cout << *(it) << " ";
    // }
    // cout << endl;

    // By using the auto

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;

    // for(auto it:v){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
}

void learnVectors()
{

    /*
        vector<int> v;
        v.push_back(2);
        printVector(v);

        v.emplace_back(1);

        printVector(v);

        // create the vector of pair
        vector<pair<int, int>> vec;

        vec.push_back({1, 2});
        vec.emplace_back(3, 4);

        // cout << vec[1].first << endl;

        // create the vector of size 5 and assign 100 to all elements
        vector<int> v2(5, 100);
        printVector(v2);

        // Create an empty vector of size 5

        vector<int> v3(5);
        printVector(v3); // By default 0 will be assigned which is depends upon the complier

        // copy the vector into another vector
        vector<int> v4(v);
        printVector(v);  // 2 1
        printVector(v4); // 2 1

        v.push_back(12);

        printVector1(v);  // 2 1 12
        printVector1(v4); // 2 1

        vector<int> v5 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

        // How to access the elements from the vector
        cout << v5[1] << " " << v5.at(2) << endl; // 2 3

        // Create the iterator

        vector<int>::iterator it = v5.begin();

        // The it stores the address

        // move one place ahead

        it++;

        cout << *it << endl; // 2

        cout << (*(v5.begin())) << endl; // 1

        // The end
        vector<int>::iterator it1 = v5.end() - 1;
        cout << *(it1) << endl;

        cout << v5.back() << endl; // 10 --> Print the last elements form the vector


    */
    // deletion from the vector

    // vector<int> myVec = {10, 20, 30, 40, 50, 60};

    // Print the vector

    // printVector(myVec);

    // delete the second element from the vector

    // myVec.erase(myVec.begin() + 1);
    // printVector(myVec);

    // delete from the range

    // myVec.erase(myVec.begin(), myVec.begin() + 4);
    // printVector(myVec);

    // Insertion in vector

    vector<int> v(2, 100); // 100 100
    printVector(v);

    // Insert at the begining
    v.insert(v.begin(), 300); // 300 100 100
    printVector(v);

    v.insert(v.begin() + 1, 2, 10); // 300 10 10 100 100
    printVector(v);

    // Insert the another vector at the beginning of the vector
    vector<int> copy(2, 50);
    v.insert(v.begin(), copy.begin(), copy.end());
    printVector(v);

    // Print the size of the vector
    cout << v.size() << endl;

    // insert 15 at the end of the vector
    v.insert(v.end(), 15);
    printVector(v);

    // we can simple use push_back(val)
    v.push_back(112312);
    printVector(v);

    // remove the last element from the vector
    v.pop_back();
    printVector(v);

    // To get the last element from the vector
    int last = v.back();
    cout << "The last element of the vector is : " << last << endl;
    printVector(v);

    // swapping of the two vectors
    vector<int> v1 = {10, 20};
    vector<int> v2 = {30, 40};

    // swap the vectors
    v1.swap(v2);

    // Print the both the vectors
    printVector(v1);
    printVector(v2);

    // clear the entire vector
    v.clear();
    printVector(v);
    cout << "After the vector print" << endl;

    // check if the vector is empty
    cout << v.empty() << endl; // empty - 1, else - 0
}

void learnList()
{

    cout << "The list started." << endl;

    // create list
    list<int> ls;
    ls.push_back(10);    // {10}
    ls.emplace_back(20); // {10,20}
    ls.push_front(5);    // {5,10,20}
    ls.emplace_front(1); // {1,5,10,20}

    // print the list

    for (auto li : ls)
    {
        cout << li << " ";
    }
    cout << endl;

    /*
        Note:

        Internal Implementation-
            Vector ----> Singly LinkedList used
            List   ----> Doubly LinkedList used
    */

    // rest of the functions are same as vector
    // begin(),end(),rbegin(),rend(),clear(), insert(),size(),swap()
}

void learnDeque()
{
    cout << "The deque started..." << endl;

    deque<int> dq;
    dq.push_back(1);     // {1}
    dq.emplace_back(2);  //{1,2}
    dq.push_front(3);    //{3,1,2}
    dq.emplace_front(4); // {4,3,1,2}

    // print deque
    for (auto i : dq)
    {
        cout << i << " ";
    }
    cout << endl;

    // remove from the deque
    dq.pop_back();  // {4,3,1}
    dq.pop_front(); // {3,1}

    cout << dq.front() << endl;
    cout << dq.back() << endl;

    // rest of the functions are same as vector
    // begin(),end(),rbegin(),rend(),clear(), insert(),size(),swap()
}

void learnStack()
{
    // LIFO ---> Last in first out
    cout << "The stack started..." << endl;
    stack<int> st;

    // insert into the stack
    st.push(1);    // {1}
    st.push(2);    // {2,1}
    st.push(3);    // {3,2,1}
    st.push(4);    // {4,3,2,1}
    st.emplace(5); // {5,4,3,2,1}

    // Print the top element of the stack
    cout << "The top element is : " << st.top() << endl; // {5}

    // remove the element
    st.pop(); //  removes the top element from the stack

    cout << st.size() << endl;  // 4 --> return the size of the stack
    cout << st.empty() << endl; // 0 --> if not empty else return 1

    // The swapping of the two vectors
    stack<int> st1, st2;
    st1.swap(st2);

    /*
        Note :

            The time and space complexity of all operations on stack is O(1)

            Operation       Time Complexity	   Space Complexity
            Push       	          O(1)	               O(1)
            Pop       	          O(1)	               O(1)
            Top/Peek              O(1)	               O(1)
            Size       	          O(1)	               O(1)
            Is Empty              O(1)	               O(1)

    */
}

void learnQueue()
{
    // FIFO --> The First In First Out
    cout << "The Queue started.." << endl;

    queue<int> q;

    // insert into the queue
    q.push(1); // {1}
    q.push(2); // {1,2}
    q.push(3); // {1,2,3}

    q.emplace(4); // {1,2,3,4}
    q.back() += 5;

    cout << q.back() << endl;  // 9
    cout << q.front() << endl; // 1
    q.pop();
    cout << q.front() << endl; // 2

    // The size, swap and empty is same as the stack

    /*
        Note :

            The time and space complexity of all operations on queue is O(1)


            Operation	     Time Complexity	Space Complexity
            Enqueue (push)	     O(1)	             O(1)
            Dequeue (pop)	     O(1)	             O(1)
            Front (peek)	     O(1)	             O(1)
            Size	             O(1)                O(1)
            Is Empty	         O(1)	             O(1)

    */
}

void learnPQ()
{

    cout << "The Priority Queue started..." << endl;

    priority_queue<int> pq; // max heap by default

    // Insert into priority_queue
    pq.push(5);     // {5}
    pq.push(2);     // {5,2}
    pq.push(8);     // {8,5,2}
    pq.emplace(10); // {10,8,5,2}

    cout << pq.top() << endl; // 10

    // remove the element from the pq
    pq.pop(); // deleted element : 10

    cout << pq.top() << endl; // 8

    // The size, swap and empty functions are same as stack

    // create the minHeap

    priority_queue<int, vector<int>, greater<int>> pq1;

    pq1.push(5);     // {5}
    pq1.push(8);     // {5,8}
    pq1.push(2);     // {2,5,8}
    pq1.emplace(10); // {2,5,8,10}

    cout << pq1.top() << endl; // 2
    pq1.pop();                 // del --> 2
    cout << pq1.top() << endl; // 5

    /*


    The time and space complexity of the different operation on priority queue

    Operation	         Time Complexity	Space Complexity
      Insert (push)	         O(log n)	         O(1)
      Extract Max/Min	     O(log n)	         O(1)
      Peek	                 O(1)	             O(1)
      Size	                 O(1)	             O(1)
      Is Empty	             O(1)	             O(1)

    */
}

void learnSet()
{

    /*
        Note : Everything is sorted and unique
    */
    cout << "The set started...." << endl;
    set<int> s;

    s.insert(1);  // {1}
    s.emplace(2); // {1,2}
    s.insert(2);  // {1,2}
    s.insert(4);  // {1,2,4}
    s.insert(3);  // {1,2,3,4}
    s.insert(5);  // {1,2,3,4,5}

    // Functionality of insert in vector can be used that only increases the effeciency

    // begin(), end(), ebegin(),rend(),size(),empty(),empty(),swap() are same the above

    // find in the vector
    auto it = s.find(2); // If the element is present in the set it will returns the iterator pointing to this position

    auto it1 = s.find(10); // If the element is not in the set it always returns set.end()

    s.erase(5); // Takes logarithmic time
    int cnt = s.count(1);

    auto it2 = s.find(1);

    s.erase(it2); // we can pass the iterator as argument

    // {1,2,3,4,5}

    auto a1 = s.find(2);
    auto a2 = s.find(4);
    s.erase(a1, a2); // {1,4,5} [first,last)

    // The lower ans upper bound works same as the in the vector

    auto a3 = s.lower_bound(2);
    auto a4 = s.upper_bound(10);

    /*

    Note: The time and space complexity of different operations on set.

    Operation	   Time Complexity	    Space Complexity
    Insert	             O(log n)	           O(1)
    Erase	             O(log n)	           O(1)
    Find	             O(log n)	           O(1)
    Size	             O(1)	               O(1)
    Is Empty	         O(1)	               O(1)


    */
}

// void learnMultiSet()
// {

//     // EveryThing is same as set but it stores the duplicate elements
//     cout << "The multiset started...." << endl;

//     multiset<int> ms;

//     // insert

//     ms.insert(1); // {1}
//     ms.insert(1); // {1,1}
//     ms.insert(2); // {1,1,2}

//     // erase
//     ms.erase(1); // all 1 will be erased

//     // only single will be erased
//     ms.erase(ms.find(1)); // Because we have pass the iterator which store the address

//     ms.erase(ms.find(1), ms.find(1) + 2);

//     // All other operations are same as set
// }

void learnUnorderedSet()
{

    // This stores the unique elements in any order the elements are not sorted
    cout << "The unordered_set started...." << endl;

    unordered_set<int> uset;
    uset.insert(1);
    uset.insert(1);
    uset.insert(10);
    uset.insert(20);

    // lower_bound and upper_bound doesn't work other works fine

    // It does not stored in any order henceit has better time complexity than set in most of cases except the when collision is happened

    /*

    Note : The time and space complexity

    Operation	     Time Complexity	                  Space Complexity
    Insert	            Average: O(1), Worst: O(n)	           O(1)
    Erase	            Average: O(1), Worst: O(n)	           O(1)
    Find	            Average: O(1), Worst: O(n)	           O(1)
    Size	            O(1)	                               O(1)
    Is Empty	        O(1)	                               O(1)

    */
}

void learnMap()
{

    // stores the data in the form of the keys and value pair  ---> map stores the unique keys in sorted order
    cout << "The map started...." << endl;
    map<int, int> mp;

    map<int, pair<int, int>> mp1;

    map<pair<int, int>, int> mp2;

    mp[1] = 10;
    mp.insert({2, 20});
    mp.emplace(3, 30);

    mp1[1] = {2, 3};

    // print the values from the map

    for (auto m : mp)
    {
        cout << m.first << " : " << m.second << endl;
    }

    cout << mp[1] << endl;
    cout << mp[0] << endl;

    auto it = mp.find(3);

    if (it != mp.end())
    {
        cout << it->second << endl;
    }
    else
    {
        cout << "Key not found" << endl;
    }

    // lower_bound and upper_bound are same as above
    auto it1 = mp.lower_bound(2);
    auto it2 = mp.upper_bound(2);

    // The size,erase, swap and isEmpty is same as above
}

void learnMultiMap()
{
    // everything is same as ma, only itcan storemultiple keys, only map[key] cannot be used here
}

void learnUnorderedMap()
{
    // same as set and unordered_set
}

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
    {
        return true;
    }

    if (p1.second > p2.second)
    {
        return false;
    }
    if (p1.first > p2.first)
    {
        return true;
    }

    if (p1.first < p2.first)
    {
        return false;
    }
}

void learnExtra()
{

    // sort the array
    // sort(a, a + n); // In case of the array

    // sort the vector
    // sort(v.begin(), v.end());

    // sort(a + 2, a + 4);

    // The sort function sort the arrays in ascending order, in order to sort them in descending order, we can use greater<int> as third parameter

    // sort(v.begin(), v.end(), greater<int>);

    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};

    // sort it according to the second element
    // if the second element is same then sort it according to first element but in descrasing order

    // {{4,1},{2,1},{1,2}}
    int n = 3;
    sort(a, a + n, comp);

    int num = 8;

    // The below function count the number of the set bits
    int cnt = __builtin_popcount(num);

    cout << cnt << endl;
    long long temp = 1234567890;

    cout << "The number of set bits : " << __builtin_popcountll(temp);

    // Print the all permulataion of the string

    string s = "123";
    sort(s.begin(), s.end());

    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));

    int maxi = *max_element(a, a + n);
}

int main()
{

    // int a;
    // cin >> a;
    // cout << a;

    // print();

    // int s = sum(123, 23);
    // cout << s << endl;
    // learnPair();

    // learnVectors();
    // learnList();

    // learnDeque();

    // learnStack();
    // learnQueue();
    // learnPQ();
    // learnSet();

    // learnMap();

    learnExtra();
    return 0;
}