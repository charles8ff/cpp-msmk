#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void pvalor (int i ) {
    i = 50; // El 50 sólo existe en esta función
    cout << i <<endl;
}
void preferencia (int *i ) { // aqui sí entra la i global
    *i = -10;
    cout << i <<endl;

}
int main() {
    int i = 10;
    cout << i <<endl;
    pvalor(i);
    cout << i <<endl;
    preferencia(&i); // Mismo que en #13
    cout << i <<endl;


    return 0;
}