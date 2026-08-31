/*
    Problem: Gravity Flip
    Codeforces: 405A
    Rating: 800
    Topic: Sorting, Implementation

    Hint:
    Read the number of columns and the height of each column.
    Sort the column heights in ascending order (smallest to largest).
    Print the sorted array separated by spaces.

    Gravity pushing blocks right naturally arranges them from shortest to tallest.
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

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        cout << a[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";

    return 0;
}