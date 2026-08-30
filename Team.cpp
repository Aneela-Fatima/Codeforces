/*
    Problem: Team
    Codeforces: 231A
    Rating: 800
    Topic: Implementation, Brute Force

    Hint:
    For each problem, three friends give their opinion.

    A problem should be solved if at least TWO friends are
    confident about the solution.

    Think about:
    - Read three values for every problem.
    - Calculate their sum.
    - What condition means at least two people agree?

    Keep a counter for the number of problems that will be solved.
*/

# include <iostream>
#include <string>
# include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int  output = 0;

    while (n--){
        int a,b,c;
        cin >> a >> b >> c;

        if(a+b+c >= 2){
            output ++;
        }
    }
    cout << output;
    return 0;
}