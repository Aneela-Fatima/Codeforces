/*
    Problem: Bit++
    Codeforces: 282A
    Rating: 800
    Topic: Implementation

    Hint:
    There is one integer variable initially equal to 0.

    Each operation either:
        ++
    or:
        --

    You don't need to perform complicated string operations.

    Think about:
    - Does the operation increase or decrease the value?
    - Check whether the input string contains '+' or '-'.

    Maintain one integer answer and update it for every operation.
*/

# include <iostream>
# include <string>
using namespace std;

int main(){
    int n;
    cin>> n;
    int x=0;
    while (n--){
        string program;
        cin >> program;
        if(program[1]=='+'){
            x++;
        }else{
            x--;
        }   
    }   
    cout << x;    
    return 0;
}