/*
    Problem: Anton and Polyhedrons
    Codeforces: 785A
    Rating: 800
    Topic: Strings, Implementation, Mapping

    Hint:
    Each polyhedron has a fixed number of faces.

    Create a mapping:

        Polyhedron name -> number of faces

    For every input name:
        find its corresponding number
        add it to the total.

    This is a good example of converting a problem statement
    into a simple lookup table.
*/

# include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int n , sum;
    string shape;
    
    if (!(cin >> n)) return 0;

    sum = 0;

    for (int i = 0; i < n; i++){
        cin >> shape;
        if(shape == "Tetrahedron"){
            sum += 4;
        }
        else if(shape == "Cube"){
            sum += 6;
        }
        else if(shape == "Octahedron"){
            sum += 8;
        }else if(shape == "Dodecahedron"){
            sum += 12;
        }else if(shape == "Icosahedron"){
            sum += 20;
        }
    }
    cout << sum;
    return 0;
}