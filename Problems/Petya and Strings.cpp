/*
    Problem: Petya and Strings
    Codeforces: 112A
    Rating: 800
    Topic: Strings, Implementation

    Hint:
    Compare two strings without considering uppercase/lowercase
    differences.

    For example:
        "abc"
        "ABC"

    should be considered equal.

    Convert both strings to the same case first,
    then compare them lexicographically.

    Possible approaches:
    - Convert characters using tolower()
    - Convert the complete strings to lowercase
*/

# include <iostream>
#include <string>
# include <algorithm>
#include <cctype>
using namespace std;
int main(){
    string str1;
    string str2;
    std::cin >> str1;
    std::cin >> str2;
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    if(str1 < str2){
        cout<<"-1\n";
    }
    else if (str1 > str2)
    {
        cout<<"1\n";
    }
    else{
        cout<<"0\n";
    }
    return 0;
}