/*
    Problem: Chat Room
    Codeforces: 58A
    Rating: 1000
    Topic: Strings, Greedy, Two Pointers

    Hint:
    Target word to find as a subsequence: "hello".
    Maintain a pointer/index tracking which character of "hello" you are looking for.
    Iterate through the input string character by character.
    Whenever a character matches target[index], increment your pointer.
    If your pointer reaches 5, output "YES"; otherwise, output "NO".
*/

#include <iostream>
#include <string>

using namespace std;
int main(){
    string s;
    cin >> s;
    string target = "hello";
    int target_idx = 0;
    for (char c : s) {
        if (c == target[target_idx]) {
            target_idx++;
        }
        if (target_idx == 5) {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";

    return 0;
}









