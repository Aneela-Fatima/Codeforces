/*
    Problem: Next Round
    Codeforces: 158A
    Rating: 800
    Topic: Implementation

    Hint:
    A participant advances if:
    1. Their score is at least the k-th participant's score.
    2. Their score is greater than zero.

    Be careful:
    Simply checking score >= kth_score is NOT enough.

    Think about the case where the k-th score is 0.

    Count the participants satisfying BOTH conditions.
*/

# include <iostream>
#include <string>
# include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n ,k;
    cin >> n >> k;

    int result = 0;

    vector<int> scores(n);
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }
    int k_score = scores[k-1];

    for (int i = 0; i < n; i++){
        if (scores[i] >= k_score && scores[i]>0 ){
            result ++;
        }
    }
        
    
    cout << result << "\n";
    return 0;
}