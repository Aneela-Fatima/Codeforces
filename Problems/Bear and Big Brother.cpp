/*
    Problem: Bear and Big Brother
    Codeforces: 791A
    Rating: 800
    Topic: Implementation, Simulation

    Hint:
    Every year:
        Limak's weight is multiplied by 3
        Bob's weight is multiplied by 2

    Keep simulating year by year until Limak becomes heavier.

    Maintain:
        years

    Stop when:
        Limak's weight > Bob's weight
*/

# include <iostream>
#include <string>

using namespace std;
int main(){
    int limak , bob;
    cin >> limak >> bob;
    int years = 0;
    while(limak <= bob){
        limak = limak * 3;
        bob = bob * 2;
        years ++;
    }
    cout<<years;
         
    return 0;
}