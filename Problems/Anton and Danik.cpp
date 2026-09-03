/*
    Problem: Anton and Danik
    Codeforces: 734A
    Rating: 800
    Topic: Strings, Counting

    Hint:
    The string represents the winners of N games.

    Count:
        'A' -> Anton's wins
        'D' -> Danik's wins

    Then compare the two counts.

    Possible results:
        Anton
        Danik
        Friendship

    A simple frequency/counting problem.
*/

# include <iostream>
#include <string>

using namespace std;
int main(){
    int game;
    cin >> game;
    string player;
    cin >> player;
    int countA = 0;
    int countD = 0;
    
    for(char i : player){
        if(i=='A'){
            countA++;
        }
        else{
            countD++;
        }
    }
    if(countA > countD){
        cout<<"Anton\n";
    }else if (countD > countA)
    {
        cout << "Danik\n";
    }else {
        cout << "Friendship\n";
    }

    return 0;
    
}