#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){

    int i = 0;

    while (i < 10){
        cout << "El :"<< i << endl;
        i++;
    } // Va del 0-9

    for (i = 0; i < 10; i++){
        cout << "La i vale :" << i <<endl;
    }

    do
    {
        cout << "Hago "<< i <<"cosas"<<endl;
        i++;
    } while (i < 10);


    return 0;
}