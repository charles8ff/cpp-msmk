#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){

    int i = 0;

    cout << "\t\tNew loop" << endl;
    i = 0;
    while (i < 10){
        cout << "El: "<< i << endl;
        i++;
    } // Va del 0-9

    cout << "\t\tNew loop" << endl;
    i = 0;
    for (i = 0; i < 10; i++){
        cout << "La i vale: " << i <<endl;
    }

    cout << "\t\tNew loop" << endl;
    i = 0;
    do{
        cout << "Hago "<< i <<" cosas"<<endl;
        i++;
    } while (i < 10);

    // Illegal moves
    cout << "\t\tNew loop" << endl;
    i = 0;
    for (i = 0; i < 10; i++){
        if (i == 5){
            cout << "HALT" << endl;
            continue; // Mata una vuelta del for
        }
        cout << "La i vale: " << i <<""<<endl;
    }

    cout << "\t\tNew loop" << endl;
    i = 0;
    for (i = 0; i < 10; i++){
        if (i == 5){
            cout << "GOODBYE" << endl;
            break;// Mata el for entero
        }
        cout << "La i vale: " << i <<endl;
    }

    return 0;
}