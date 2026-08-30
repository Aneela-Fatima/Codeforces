/*
    Problem: Theatre Square
    Codeforces: 1A
    Rating: 1000
    Topic: Math

    Hint:
    Cover n × m using a × a flagstone.

    Find:
        ceil(n / a) × ceil(m / a)

    Remember: partial rows/columns need a complete flagstone.
*/

#include <iostream>

using namespace std;
int main(){
    long long n , m , a ;
    cin >> n >> m >> a;

    n = (n + a - 1) / a;
    m = (m + a - 1) / a;

    cout << n * m;
    return 0;
}