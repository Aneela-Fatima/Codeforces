/*
    Problem: Translation
    Codeforces: 41A
    Rating: 800
    Topic: Strings

    Hint:
    The second string should be the REVERSE of the first string.

    Instead of comparing characters in the same direction,
    compare them from opposite ends.

    Example idea:

        first:  abc
        second: cba

    Think about:
        reverse()

    or manually comparing:
        first[i] with second[n - 1 - i]
*/

# include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main(){
    string s , t;
    cin >> s >> t;

    reverse(t.begin(),t.end());

    if(s==t){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    return 0;
}