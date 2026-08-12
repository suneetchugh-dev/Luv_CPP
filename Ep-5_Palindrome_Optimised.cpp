//Using optimised way for reversing a string


//way 1 : using swap from <algorithm> library
//T.C = O(n/2) => O(n) and S.C = O(1) since we are not using any extra space for storing the reverse string
// #include <iostream>
// #include <algorithm>
// using namespace std;


//swap and n/2 loop method 
// int main()
// {
//     string str;
//     getline(cin, str);

//     int n = str.size();

//     for(int i=0; i<n/2; i++) //loop executes only n/2 times but still ltime complexity is O(n)
//     {
//         swap(str[i], str[n-i-1]);
//     }

//     cout << str << endl;

//     return 0;
// }


//way 2: using two variable like pointers for keeping track of left and right and then swapping them
//T.C = O(n/2) => O(n) and S.C = O(1) since we are not using any extra space for storing the reverse string


// #include <iostream>
// //just for swap instead of using algorithm library we can use a much lighter library known as <utility>
// #include <utility>
// // #include <algorithm>
// using namespace std;


// int main()
// {
//     string str;
//     getline(cin, str);

//     //defining left and right variable so we can use them sort of like pointers to keep track of indexes;

//     int left = 0;
//     int right = str.size()-1;


//     while(left<right) //since we initialised it with index 0, we will keep incrementing it as we progress further
//     {
//         swap(str[left],str[right]); //we will swap left with right of str for reversing string here, possible because of utility library
//         left++;
//         right--;
//     }

//     cout << str << endl;

//     return 0;

// }



