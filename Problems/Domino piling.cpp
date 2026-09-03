/*
    Problem: Domino piling
    Codeforces: 50A
    Rating: 800
    Topic: Math, Greedy

    Hint:
    Each domino covers exactly TWO adjacent squares.

    Instead of actually placing dominoes, think about the
    TOTAL number of squares in the board.

    If the board contains:
        n * m squares

    and every domino covers 2 squares,

    how many dominoes can fit?

    The answer can be obtained directly using integer division.
*/

# include <iostream>
#include <string>
# include <algorithm>
#include <vector>
using namespace std;
int main(){
    int M ,N;
    cin >> M >> N;
    int area = M*N;
    int res = 0;

    if (area%2==0){
        res = area/2;
    }else{
        area--;
        res = area/2;
    }
    cout<<res<<"\n";
    return 0;
}