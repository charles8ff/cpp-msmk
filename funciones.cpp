#include <string>
#include <stdio.h>
#include <iostream>

using namespace std;

string saludar(){
    cout << "hey"<<endl;
    return "saludo";
}
int main (){
    int cosa = 4;
    cosa<<=9;
    cout << cosa <<endl;
    string result = "no me han saludado";
    cout << result <<endl;
    result = saludar();
    cout << result <<endl;
    return 0;
}