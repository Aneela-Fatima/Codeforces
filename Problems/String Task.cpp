/*
    Problem: String Task
    Codeforces: 118A
    Rating: 1000
    Topic: Strings, Implementation

    Hint:
    Convert characters to lowercase.
    Remove vowels: a, e, i, o, u, y.
    Add '.' before every remaining character.

    Process the string character by character.
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;
int main(){
    string s;
    cin >> s;

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    string result = "";
    string vowels = "aeyiou";

    for (char c : s) {
        if (vowels.find(c) == string::npos) {
            result += '.';
            result += c;
        }
    }
    cout << result << endl;
    return 0;

}