#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    /*

        // print to output stream

        cout << "Hello World" << endl;

        // Take the input stream

        int x;
        cin >> x;
        cout << "Hey " << x << endl;
    */

    // Data types

    // int float double char bool

    // int x = 10;
    // float y = 10.5;
    // double z = 10.5;
    // char ch = 'A';
    // bool is_true = true;

    // cout << x << endl;
    // cout << y << endl;
    // cout << z << endl;
    // cout << ch << endl;
    // cout << is_true << endl;

    // The below code will not work as cin will only take the first word
    // string str;
    // cout << "Enter the msg : ";
    // cin >> str;

    // cout << str << endl;

    // string str;
    // cout<<"Enter the msg : ";
    // getline(cin,str);
    // cout<<str<<endl;

    // char ch = 'P';   // declare the charcter ch
    // cout << ch << endl;
    // cin>>ch;         // Take the input from the user
    // cout << ch << endl;

    /*
        Note : If we give the string input to the character it will only takes the first character.
    */

    // If else statement

    /*
        Problem statement : Write a program  that takes input of age and prints if you are adult or not.
    */

    /*
        int age;
        cout << "Enter the age : ";
        cin >> age;

        if (age >= 18)
        {
            cout << "You are adult" << endl;
        }
        else
        {
            cout << "You are not adult" << endl;
        }
    */

    /*
     Problem Statement :

     A school has following rules for grading system:
        a. Below 25 F
        b. 25 to 44 E
        c. 45 to 49 D
        d. 50 to 59 C
        e. 60 to 79 B
        f. 80 to 100 A
        Ask user to enter marks and print the corresponding grade.
    */
    /*
        int marks;
        cout << "Enter the marks : ";
        cin >> marks;

        if (marks < 25)
        {
            cout << "F" << endl;
        }
        else if (marks <= 44)
        {
            cout << "E" << endl;
        }
        else if (marks <= 49)
        {
            cout << "D" << endl;
        }
        else if (marks <= 59)
        {
            cout << "C" << endl;
        }
        else if (marks <= 79)
        {
            cout << "B" << endl;
        }
        else if (marks <= 100)
        {
            cout << "A" << endl;
        }
        else
        {
            cout << "Invalid marks" << endl;
        }

    */

    /*
        Problem Statement :

        Take the age from the user and then decide accordingly
            1. If age < 18,
            print-> not eligible for job
            2. If age >= 18 and age <= 54,
            print-> "eligible for job"
            3. If age >= 55 and age <= 57,
            | print-> "eligible for job, but retirement soon"
            4. If age > 57
            print-> "retirement time"
    */

    /*

     int age;
     cout << "Enter the age : ";
     cin >> age;

     if (age < 18)
     {
         cout << "Not eligible for job" << endl;
     }
     else if (age <= 54)
     {
         cout << "Eligible for job" << endl;
     }
     else if (age <= 57)
     {
         cout << "Eligible for job, but retirement soon" << endl;
     }
     else
     {
         cout << "Retirement time" << endl;
     }

     */

    // The switch statement

    /*
        Problem Statement :
        Take the day no and print the corresponding day
        for 1 print Monday,
        for 2 print Tuesday and so on for 7 print Sunday.
    */

    /*
        int day;
        cout << "Enter the day number : ";
        cin >> day;

        switch (day)
        {
        case 1:
            cout << "Monday" << endl;
            break;

        case 2:
            cout << "Tuesday" << endl;
            break;

        case 3:
            cout << "Wednesday" << endl;
            break;

        case 4:
            cout << "Thursday" << endl;
            break;

        case 5:
            cout << "Friday" << endl;
            break;

        case 6:
            cout << "Saturday" << endl;
            break;

        case 7:
            cout << "Sunday" << endl;
            break;

        default:
            cout << "Invalid day number" << endl;
            break;
        }

    */

    // Arrays

    /*

        int arr[4] = {1, 2 ,3 ,4};

        cout << arr[0] << endl;

        // we can directly access the elemenet of the array using the index

        // we can also change the value of the array

        arr[0] = 10;

        cout << "The elements of the array are : " << endl;
        for (int i = 0; i < 4; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;

    */

    // 2D array

    /*
        int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};

        cout << "The elements of the array are : " << endl;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    */
    return 0;
}