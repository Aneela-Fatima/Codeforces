/*
    Problem: Watermelon
    Codeforces: 4A
    Rating: 800
    Topic: Math, Brute Force

    Hint:
    The watermelon must be divided into TWO positive parts,
    and both parts must have even weights.

    Think about:
    - Can an odd total weight be divided into two even numbers?
    - What is the smallest possible total weight that can be
      divided into two positive even parts?

    Key idea:
    Check whether the weight is even and greater than 2.

    Don't confuse "even" with simply "divisible by 2".
    The two resulting parts must also be positive.
*/

#include <iostream>
using namespace std;

int main() {
    int w;
    cin >> w;

    if (w > 2 && w % 2 == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}