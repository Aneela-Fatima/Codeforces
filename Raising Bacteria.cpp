/*
    Problem: Raising Bacteria
    Codeforces: 579A
    Rating: 1000
    Topic: Bitmasks, Math, Implementation

    Hint:
    Bacteria double every night (1 -> 2 -> 4 -> 8 -> 16 ... powers of 2).
    Doubling a number in binary is equivalent to shifting bits left (<< 1).
    Therefore, a single bacteria placed initially can generate any power-of-2 amount for free.
    To reach a target number x, express x in binary representation.
    Each '1' bit in x corresponds to 1 bacteria you must manually insert.
*/

// __builtin_popcount(x) is a GCC built-in function that counts the number of 1 bits in an integer in $O(1)$ time using CPU instructions (like POPCNT).
#include <iostream>

using namespace std;
int main(){
    int x;
    cin >> x;

    cout << __builtin_popcount(x) << "\n";
    return 0;
}