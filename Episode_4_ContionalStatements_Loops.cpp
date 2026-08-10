#include <iostream>
using namespace std;

int main()
{
    // int n;
    // cin >> n;
    // if(n%2==0)
    // {
    //     int x = 2;
    // }
    // cout << x; 
    // This will cause a compilation error because x is declared inside the if block and is not accessible outside of it.
    //scope in C++ is defined by curly braces {}. 
    // Variables declared inside a block are only accessible within that block. In this case, the variable x is declared inside the if statement block, so it cannot be accessed outside of it. To fix this issue, you can declare x outside of the if block:

    // int i = 1;
    // while(i<=10)//conditions
    // {
    //     cout << i << endl;
    //     i++;
    // }

    // for(int i=0; i<10; i++)
    // {
    //     cout << i << endl;
    // }


    //Pattern Printing
    // int n;
    // cin >> n;
    // for(int i=1; i<=n; i++) //For Line Number
    // {
    //     for(int j=1; j<=i; j++) //since according to line number we are printing stars
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }



    //Jump Statements => break, continue

    //break => breaks out of for loop after meeting specific condition
    //continue => jumps out for that particular condition


    //break
    // for(int i=0; i<10; i++)
    // {
    //     if(i==8)
    //     {
    //         break;
    //     }
    //     else
    //     {
    //         cout << i << endl;
    //     }
    // }



    // cout << endl;
    // //continue
    // for(int i=0; i<10; i++)
    // {
    //     if(i==8)
    //     {
    //         continue;
    //     }
    //     else
    //     {
    //         cout << i << endl;
    //     }
    // }
}