//so for taking in very long number which goes even beyond the range of 10^18 , so we take them as string in such tricky questions 
#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int last_digit = s[s.size()-1]; //trying to access the last number but it returns us with ASCII value

    //so we just subtract with with ASCII of 0

    int final_result = last_digit - '0';
    cout << final_result << endl;
}