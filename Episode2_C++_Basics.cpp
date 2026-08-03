// #include <iostream>
// using namespace std;
// int main()
// {
//     char c = 'a';
//     char b = 'c';
//     cout << (int) c << endl; //typecasting c variable which is storing a character into integer datatype;

//     cout << c-b; //97-99 = -2
// }



// Given rectangle of length l and breadth b, print the area of rectangle.

// Constraints : 1 <= l <= 10^9
// Constraints : 1 <= b <= 10^9


// Input Format: 2 Spaced seperated integer l and b

// Output Format
// Single Number which is area of rectangle

// Sample Input:
// 3 4

// Sample Output:
// 12


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter Your Length And Breath Seperated By Space In The Terminal" << endl;
    long long int l,b; //converting into long long int for avoding overflow conditions
    cin >> l >> b;
    cout << l* 1LL *b << endl;
}