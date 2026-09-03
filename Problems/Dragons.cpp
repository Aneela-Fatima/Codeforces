/*
    Problem: Dragons
    Codeforces: 230A
    Rating: 1000
    Topic: Greedy, Sorting

    Hint:
    Store pairs of (dragon_strength, bonus).
    Sort the dragons in ascending order of strength.
    Fight dragons from weakest to strongest. Return NO immediately if Kirito's strength <= dragon's strength.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main (){
    int s , n;
    cin >> s >> n;
    vector<pair<int, int>> dragons(n);
    for (int i = 0; i < n; i++) {
        cin >> dragons[i].first >> dragons[i].second;
    }

    sort(dragons.begin(), dragons.end());

    for (int i = 0; i < n; i++) {
        if (s > dragons[i].first) {
            s += dragons[i].second;
        } else {
            cout << "NO\n";
            return 0;
            }
    }

    cout << "YES\n";
    return 0;
}