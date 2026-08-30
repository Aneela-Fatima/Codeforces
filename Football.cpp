/*
    Problem: Football
    Codeforces: 96A
    Rating: 900
    Topic: Strings, Implementation

    Hint:
    You need to determine whether there are at least
    7 consecutive players belonging to the same team.

    The string contains only:
        0
        1

    Think about scanning the string from left to right.

    Maintain:
        consecutive_count

    If the current character is the same as the previous one:
        increase the count.

    Otherwise:
        reset the count to 1.

    If the count reaches 7:
        the situation is dangerous.

    Important:
    You don't need to check every possible substring separately.
    One linear scan is enough.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    if (!(cin >> s)) return 0;

    int consecutive_count = 1;
    bool dangerous = false;

    for (size_t i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) {
            consecutive_count++;
        } else {
            consecutive_count = 1; 
        }
        if (consecutive_count >= 7) {
            dangerous = true;
            break; 
        }
    }

    if (dangerous) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}