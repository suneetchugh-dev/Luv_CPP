//you are given an integer n, you need to calculate the sum of n digits;
//the first line contains integer T, representing the no of test cases


#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    // int t;
    // cin >> t;

    //running our code block for t test cases;

    //using for loop (not preferred)
    //using test case varible inside for loop waste a variable
    // for(int test=0; test<t; ++t)
    // {//your code block}

    //so we instead while loop (preferred way)

    // while(t--) //lopp will run till this condition become false
    // {

    // }


    //how to run infinite loops
    // while(1) //this condition will always be true
    // {
    //     cout << "Hello World";
    // }


    
    // for(;;)
    // {
    //     cout << "Krish";
    // }



    //Now Solving the actual question =>>
    int n;
    cin >> n;
    int digit_sum=0;
    while(n>0)
    {
        int last_digit = n%10;
        digit_sum+=last_digit;
        n=n/10; //removing the last digit after it has been added up
    }
    cout << digit_sum << endl;

    return 0;
}