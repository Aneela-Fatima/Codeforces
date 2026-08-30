/*
    Problem: Word Capitalization
    Codeforces: 281A
    Rating: 800
    Topic: Strings, Implementation

    Hint:
    Only the FIRST character needs to be changed.

    Think about:
        s[0]

    Convert the first character to uppercase.

    You can use:
        toupper()

    Be careful not to unnecessarily modify the rest
    of the word.
*/

# include <iostream>
#include <string>
#include <cctype>

using namespace std;
int main(){
    string s;
    cin >> s;

    s[0] = toupper(s[0]);
    cout  << s << endl;
    return 0;
}