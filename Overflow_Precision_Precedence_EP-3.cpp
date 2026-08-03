#include <iostream>
using namespace std;

int main()
{
    cout << 7 << endl; //output is 3

    cout << 'c' + 1 << endl; //output is 100 in ascii number value

    int a = 3/2.0;
    cout << a << endl; //here you will get 1 only not 1.5, since a is a integer so it will only store integer, if we would have done cout without storing in integer a then output would have been 1.5;
    
    double b = 3/2;
    cout << b << endl; // this will give 1 only not 1.5 since 3/2 is calculated in integer first then stored in double later;

    

    //Precedence Of Operators And Associativity

    cout << 7*3 / 2; //the answer is 10 not 9 since we do it from left to right we don't follow bodmas then

    //int , char  , long int , long long int, float, double

    //int roughly the range is => -10^9 to 10^9
    //long int roughly the range is => -10^12 to 10^12
    //long long int roughly the range is => -10^18 to 10^18



    int mx = INT_MAX;
    cout << mx << endl; 



    int s = 1000000;
    int c = 1000000;

    //Wrong Way
    // long int = s * c; //this will give error since the range of long int is not enough to store this value

    //Right Way
    // long int g = (long int)s * c;
    //  //this will give correct answer since we are typecasting s into long int and then multiplying with c so the answer will be stored in long int c variable;

    //Right Way
    long int g = s* 1LL *c; //this will give correct answer since we are typecasting s into long int and then multiplying with c so the answer will be stored in long int g variable;


    //to remove scientific notation we can use fixed and setprecision function from iomanip library
    // or we can just use <bits/stdc++.h> library which will include all the libraries in c++ and we can use setprecision function from it;

    double x = 100000000000000000;
    double y = 100000000000000000;
    double z = x*y;
    cout << z << endl; //this will give output in scientific notation since the value is very large and it is not possible to store it in double variable so it will give output in scientific notation;

    cout << fixed << setprecision(0) << z << endl; //this will give output in normal notation since we are using fixed and setprecision function from iomanip library;




}d