/*
    Problem: Taxi
    Codeforces: 158B
    Rating: 1100
    Topic: Greedy, Math, Implementation

    Hint:
    Count the frequency of each group size: count[1], count[2], count[3], count[4].
    
    1. Groups of 4 each get their own taxi.
    2. Pair groups of 3 with groups of 1 (1 group of 3 + 1 group of 1 = 4).
    3. Pair groups of 2 together (2 groups of 2 = 4). If 1 group of 2 is left over, pair it with up to two 1s.
    4. Any remaining groups of 1 are grouped into taxis of up to 4.
*/

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> count(5, 0);
    for (int i = 0; i < n; i++) {
        int size;
        cin >> size;
        count[size]++;
    }
    int taxis = 0;
    taxis += count[4];
    taxis += count[3];
    count[1] = max(0, count[1] - count[3]);
    taxis += count[2] / 2;
    if (count[2] % 2 != 0) {
        taxis++; 
        count[1] = max(0, count[1] - 2); 
    }
    if (count[1] > 0) {
        taxis += (count[1] + 3) / 4; 
    }
    cout << taxis << "\n";

    return 0;

}