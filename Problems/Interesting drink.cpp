/*
    Problem: Interesting Drink
    Codeforces: 706B
    Rating: 1100
    Topic: Binary Search, Sorting, Implementation

    Hint:
    For each query m (amount of money on a day), find how many shops sell a drink for <= m coins.
    Sorting shop prices allows using binary search for fast lookups:
    
    1. Sort the array of shop prices in ascending order.
    2. For each query m, use std::upper_bound to find the first price strictly greater than m.
    3. The index returned by upper_bound equals the count of affordable shops.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> x(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    sort(x.begin(), x.end());

    int q;
    cin >> q;
    while (q--) {
        int m;
        cin >> m;
        auto it = upper_bound(x.begin(), x.end(), m);
        cout << (it - x.begin()) << "\n";
    }

    return 0;
}