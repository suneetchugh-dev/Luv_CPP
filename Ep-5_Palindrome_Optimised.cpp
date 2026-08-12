// Using optimised way for reversing a string

// way 1 : using swap from <algorithm> library
// T.C = O(n/2) => O(n) and S.C = O(1) since we are not using any extra space
// for storing the reverse string
//  #include <iostream>
//  #include <algorithm>
//  using namespace std;

// swap and n/2 loop method
//  int main()
//  {
//      string str;
//      getline(cin, str);

//     int n = str.size();

//     for(int i=0; i<n/2; i++) //loop executes only n/2 times but still ltime
//     complexity is O(n)
//     {
//         swap(str[i], str[n-i-1]);
//     }

//     cout << str << endl;

//     return 0;
// }

// way 2: using two variable like pointers for keeping track of left and right
// and then swapping them T.C = O(n/2) => O(n) and S.C = O(1) since we are not
// using any extra space for storing the reverse string

// #include <iostream>
// //just for swap instead of using algorithm library we can use a much lighter
// library known as <utility> #include <utility>
// // #include <algorithm>
// using namespace std;

// int main()
// {
//     string str;
//     getline(cin, str);

//     //defining left and right variable so we can use them sort of like
//     pointers to keep track of indexes;

//     int left = 0;
//     int right = str.size()-1;
//     for checking palindrome we just need to check one more condition
//     we create another boolean palindrome as a flag for checking

//     bool palindrome = true;

//     while(left<right) //since we initialised it with index 0, we will keep
//     incrementing it as we progress further
//     {
// this is for reversing=>
//         swap(str[left],str[right]); //we will swap left with right of str for
//         reversing string here, possible because of utility library

// for checking palindrome we do=>

// if(str[left] != str[right])
// {
//     palindrome = false;
//     break //breaking out of loop since once we know it's not paindrome there remains no purpose checking further
// }
// else
// {
//     //     left++;
// //         right--;
// }
//         left++;
//         right--;
//     }


// if(palindrome)  //checking if the boolean palindrome flag/variable is true
// {
//     cout << "String is a palindrome" << endl;
// }
// else
// {
//     cout << "String is not a palindrome" << endl;
// }
//     cout << str << endl;

//     return 0;

// }
