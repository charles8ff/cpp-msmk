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
// Y ahora saltas a la línea 34 para saber lo que hace


int voyaSumar ( int a, int b ){ /* 'a' y 'b' son los parámetros de la función*/

    int suma = 0;
    suma = a + b;
    cout << a + b <<endl; // Aquí imprimimos por pantalla la suma

    miFuncion(); // ! Aquí llamamos a otra función (porque podemos)

    return suma; // Y aquí devolvemos el resultado de la suma
                 // al ejecutar la función. Devolver e imprimir por pantalla
                 // ! no es lo mismo.
}

// Hola desde la línea 16 :)
void miOtraFuncion()
{

    cout << "El código está aquí" << endl;
}

// RECURSIVIDAD

int sumaT (int k) {
    if (k >0){
        return k + sumaT(k-1);
    } else {
        return 0;
    }
}


int main(){

    miFuncion();
    cout << "1" << endl;
    miOtraFuncion();
    miOtraFuncion();
    miOtraFuncion();
    cout << "2" << endl;

    int miVariable = 0;
    miVariable = voyaSumar( 1, 5); // El resultado es 6, así que tenemos un 6 por consola
    // y también nos devuelve el 6 a 'miVariable'
    cout << miVariable << endl; //Es un 6 oh sorpresa
    sumaT(9);

    return 0;
}