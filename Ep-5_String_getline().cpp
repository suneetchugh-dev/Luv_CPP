#include <iostream>
using namespace std;

//C++ Strings is only available in C++11 and above

int main()
{
    // for taking the whole input as a string so that on space it's doesn't exit, we use getline() Function
    //syntax: getline(cin, str1); 
    // getline(starts taking input wherever the cursor is presently);
    //to fix this issue we use cin.ignore(); for avoiding cin taking line for scanning unecessarily;
    //cin.ignore() automatically shifts to next line
    //internally it's not shiting, but rather internally buffers are used
    string str = "Hello";
    cout << str << endl;
    string str2;
    cin >> str2; //cin ends at spaces or \n , so it only take one words for input so it doesn't capture whole string, or we can say it also breaks at new line
    cin.ignore();
    getline(cin, str2);
    cout << str2 << endl;
    string result = str + str2;
    cout << result << endl;
    
    if(str==str2)
    {
        cout << "Equal" << endl;
    }
    else
    {
        cout << "Not Equal" << endl;
    }

    //to access specific character in a string which is character array => str[index]
    cout << str[0] << endl;
    str[0] = 's'; //we can't do str[0] = "S" because it will take it for a string since it under double quote "" not single quote for character ''
    cout << str <<endl;

    cout << str.size() << endl; //this str.size() gives us the size of the string
    cout << str2.size() << endl; //this str2.size() gives us the size of the string

    for(int i=0; i<str.size(); i++) //we used i<str.size() and not i<=str.size() because string is valid from indexes 0 to 4 [5 letters ]
    //not 0 to 5
    {
        cout << str[i] << endl;
    }

    string str3 = str + " " + str2;
    cout << str3 << endl;
    cout << str << " " << str2;
}