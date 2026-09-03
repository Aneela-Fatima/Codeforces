/*
    Problem: Twins
    Codeforces: 160A
    Rating: 900
    Topic: Greedy, Sorting, Implementation

    Hint:
    Calculate the total sum of all coin values.
    Sort the coins in descending order (largest to smallest).
    Pick coins one by one until your sum is strictly greater than the remaining total.

    Track the coin count and output the minimum number needed.
*/

#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;
int main(){
    int n;
    cin >> n;
    int count = 0;
    int my_sum = 0;

    vector<int> coins(n);
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }
    int total_sum = accumulate(coins.begin(), coins.end(), 0);
    sort(coins.rbegin(), coins.rend());

    for (int i = 0; i < n; i++) {
        my_sum += coins[i];
        count++;

        if (my_sum > total_sum - my_sum) {
            break;
        }
    }
    cout << count << endl;
    return 0;

}   