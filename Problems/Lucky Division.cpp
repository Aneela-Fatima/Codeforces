/*
    Problem: Lucky Division
    Codeforces: 122A
    Rating: 1000
    Topic: Number Theory, Brute Force, Implementation

    Hint:
    A number is "lucky" if its digits consist ONLY of 4 and 7.
    A number is "almost lucky" if it is divisible by ANY lucky number.
    
    Precalculate or list all lucky numbers up to 1000 (4, 7, 44, 47, 74, 477, etc.).
    Check if the input n is divisible by at least one of these precalculated lucky numbers.
*/

#include <iostream>
#include <vector>

using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> lucky_numbers = {
        4, 7, 
        44, 47, 74, 77, 
        444, 447, 474, 477, 744, 747, 774, 777
    };

    for (int lucky : lucky_numbers) {
        if (n % lucky == 0) {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;

}