/*
    Problem: Way Too Long Words
    Codeforces: 71A
    Rating: 800
    Topic: Strings, Implementation

    Hint:
    If a word is short enough, print it exactly as it is.

    If its length is greater than 10:
        first character + number of characters between
        first and last character + last character

    Example idea:
        "localization"
        -> l + 10 + n

    Think about:
    - string.length()
    - s[0]
    - s[s.length() - 1]
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin>> n;

    while (n--)
    {
        string word;
        cin >> word;
        if ( word.length()>10)
        {
            char first = word.front();
            char last = word.back();
            size_t middle_count = word.length() - 2 ;
            cout << first << middle_count << last << "\n";   
        }
    else{
        cout << word << "\n";
        } 
    }    
    return 0;
}