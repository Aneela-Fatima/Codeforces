/*
    Problem: Amusing Joke
    Codeforces: 141A
    Rating: 800
    Topic: Strings, Sorting, Frequency Counting

    Hint:
    The letters from the first two names must exactly match
    the letters in the received pile.

    Order does NOT matter.

    Two simple approaches:

    1. Combine the first two strings, sort both strings,
       and compare them.

    OR

    2. Count the frequency of every character in both sides.

    Think about what "same letters with the same frequencies"
    really means.
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string guest, host, pile;
    cin >> guest >> host >> pile;
    string combined = guest + host;
    sort(combined.begin(), combined.end());
    sort(pile.begin(), pile.end());
    if (combined == pile) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}