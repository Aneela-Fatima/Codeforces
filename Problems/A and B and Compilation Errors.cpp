/*
    Problem: A and B and Compilation Errors
    Codeforces: 519B
    Rating: 1100
    Topic: Implementation, Math, Bit Manipulation, Sorting

    Hint:
    In step 1, one number is removed from the original N numbers.
    In step 2, another number is removed from the remaining N-1 numbers.

    Instead of tracking individual elements with hash maps or multisets:
    1. Calculate sum(A) - sum(B) to find the first missing error.
    2. Calculate sum(B) - sum(C) to find the second missing error.

    Alternatively, XORing all elements across the lists achieves the same result in O(N).
*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long sum_a=0 , sum_b=0 , sum_c=0;
    for (int i = 0; i < n; i++) {
        long long val;
        cin >> val;
        sum_a += val;
    }
    for (int i = 0; i < n-1; i++) {
        long long val;
        cin >> val;
        sum_b += val;
    }
    for (int i = 0; i < n-2; i++) {
        long long val;
        cin >> val;
        sum_c += val;
    }
    cout << (sum_a-sum_b)<<"\n";
    cout << (sum_b-sum_c)<<"\n";
    return 0;
}