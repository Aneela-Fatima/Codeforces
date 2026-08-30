/*
    Problem: Helpful Maths
    Codeforces: 339A
    Rating: 800
    Topic: Strings, Sorting

    Hint:
    The input contains only:
        1, 2, 3
    separated by '+' signs.

    You don't actually need complicated expression evaluation.

    Extract the numbers, sort them, and put the '+' signs back.

    Think about:
    - How can you ignore '+'?
    - How can you store the digits?
    - How can sorting produce the required order?
*/

# include <iostream>
#include <string>
# include <algorithm>
# include <vector>
using namespace std;
int main(){
    string s;
    cin>>s;

    vector<char> sum;
    for (char c : s) {
        if (c != '+') {
            sum.push_back(c);
        }
    }
    sort(sum.begin(), sum.end());
    for (size_t i = 0; i < sum.size(); i++) {
        cout << sum[i];
        if (i != sum.size() - 1) {
            cout << "+";
        }
    }
    cout << "\n";
    return 0;
}