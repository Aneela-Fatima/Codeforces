/*
    Problem: Pangram
    Codeforces: 520A
    Rating: 800
    Topic: Strings, Set

    Hint:
    A pangram contains every letter of the English alphabet
    at least once.

    There are exactly:
        26
    lowercase English letters.

    Case should not matter.

    Think about:
    - Convert the string to lowercase.
    - Track unique letters.
    - Check whether all 26 letters are present.

    A set<char> is one possible approach.
*/

# include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <set>

using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    set<char> unique_letters;
    for (char c : s) {
        unique_letters.insert(tolower(c)); 
    }
    if (unique_letters.size() == 26) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}   