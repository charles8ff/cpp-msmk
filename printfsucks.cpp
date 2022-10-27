#include <string>
#include <stdio.h>
#include <iostream>

using namespace std;


int main (){
    string nombre = "carlitos";
    int num = 120;
    // cin >> nombre;
    // cout << "merequetengue \n";
    // cout << nombre ;
    // scanf("%s", nombre);
    cout << nombre << "\n";
    cin.clear();
    cin >> nombre;
    cin.clear();
    cout << nombre << "   whatishappenin\n";
    cin.clear();
    cin >> num;
    cin.clear();
    printf("\n hours wasted: %d", num);
    fflush(stdout);
    cin.clear();
    scanf("%s", nombre);
    cin.clear();
    cout << nombre  << "wtf\n";
    cin.clear();
    printf("%s", nombre.c_str());

    return 0;
}