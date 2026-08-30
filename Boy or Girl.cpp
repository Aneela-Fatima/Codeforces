/*
    Problem: Boy or Girl
    Codeforces: 236A
    Rating: 800
    Topic: Strings, Implementation, Set

    Hint:
    The important thing is NOT how many characters are in the
    username.

    You need to count how many DIFFERENT characters appear.

    Think about using:
        set<char>

    A set automatically keeps only unique characters.

    After finding the number of unique characters,
    check whether it is even or odd.
*/

# include <iostream>
#include <string>
# include <algorithm>
#include <set>
using namespace std;
int main(){
    string name;
    std::cin >> name;

    set<char> unique;
    for (char c : name) {
        unique.insert(c);
    }

    if(unique.size() %2 == 0){
        std::cout<<"CHAT WITH HER!\n";
    }
    else{
        std::cout<<"IGNORE HIM!\n";
    }
    return 0;
}