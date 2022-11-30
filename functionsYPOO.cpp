#include <iostream>
#include <string>

using namespace std;


void miFuncion(){

    cout << "hola" << endl;
    // Las funciones Void no devuelven nada, no tienen la línea de "return"
}
/* Todo lo que va entre llaves es la definición de una función */
/* Y darle nombre + return (si llevase) declaración de la función */


void miOtraFuncion();
// Y ahora saltas a la línea XX para saber lo que hace


int voyaSumar ( int a, int b ){ /* 'a' y 'b' son los parámetros de la función*/

    int suma = 0;
    suma = a + b;
    cout << a + b <<endl; // Aquí imprimimos por pantalla la suma
    return suma; // Y aquí devolvemos el resultado de la suma
                 // al ejecutar la función
}


int main(){

    miFuncion();
    cout << "1" << endl;
    miOtraFuncion();
    miOtraFuncion();
    miOtraFuncion();
    cout << "2" << endl;

    return 0;
}

// Hola desde la línea 16 :)
void miOtrafuncion(){

    cout << "El código está aquí" << endl;
}