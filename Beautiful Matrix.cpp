/*
    Problem: Beautiful Matrix
    Codeforces: 263A
    Rating: 800
    Topic: Implementation, Matrix

    Hint:
    There is exactly one '1' in the 5 x 5 matrix.

    The goal is to move that 1 to the center.

    Center position:
        row = 3
        column = 3

    Find the position of 1 first.

    Then calculate:
        vertical distance + horizontal distance

    This is Manhattan distance.
*/

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int val;
    int ans = 0;
    
    for (int r = 1; r <= 5; r++) {
        for (int c = 1; c <= 5; c++) {
            cin >> val;
            if (val == 1) {
                ans = abs(r - 3) + abs(c - 3);
            }
        }
    }
    
    cout << ans << endl;
    return 0;
}