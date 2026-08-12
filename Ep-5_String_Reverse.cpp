//Q: reversing the string

#include <iostream>
// #include <algorithm>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    string str_rev;
    //Shortest Approach to use reverse function from <algorithm> library
    // reverse(str.begin(), str.end()); //we got this reverse function from algorithm library, it changes the original string
    // cout << str << endl;

    for(int i=str.size()-1; i>=0; i--)
    {
        //  str_rev += str[i]; //we shouldn't do this since we are basically adding character to a string; //another reason is time complexity.

        //  //string just like vectors have one function known as push_back so we will use that =>

         str_rev.push_back(str[i]);
    }

    cout << str_rev < endl;


    //for checking palindrome we just need to check one more condition
    //since if original string becomes equal to reverse string then the number is a palindrome;

    if(str==str_rev)
    {
        cout << "String is a palindrome";
    }
    else
    {
        cout << "String is Not A Palindrome";
    }
}