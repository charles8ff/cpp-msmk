#include <iostream>
#include <string>

using namespace std;

int main(){

    int edad = 0;
    int &x = edad;

    cout << "Introduzca su edad: \n\t>>";
    // cin >> edad;
    cout << x + 27<< endl; // Esto será edad + 27
                          // porque 'x' apunta al contenido que hay en edad
    //
    string comida = "pizza";
    cout << &comida << endl; // Esto devuelve una dirección de memoria
                            // del estilo 0x53c69ffcf0 <- eso es hexadecimal
                            // // dIcE CarLoS qUe esTá RePeTidO mimimimi
    // Nosotros podemos, guardar esa posición en un PUNTERO
    string* ptr = &comida;  // Se puede escribir también como:
                            // string *ptr o string * ptr
                            // Pero no son recomendables

    cout << "\nVeamos qué es comida: \n" ;
    cout << "* Comida es: " << comida << endl; // pizza
    cout << "* Comida es: " << &comida << endl;// dirección
    cout << "* Comida es: " << ptr << endl;    // también dirección
    cout << "* Comida es: " << *ptr << endl;   // también pizza

    // ! Voy a cambiar todos los nombres porque si no el compilador llora que flipas

    string cena = "sushi";
    string* puntero = &cena;
    cout << cena << endl; // sushi
    cout << *puntero << endl; // sushi

    // Ahora vamos a desreferenciar (quitar el puntero)
    // y coseguimos cambiar cena sin tocarla.
    *puntero = "Hamburgesa";
    cout << cena << endl; // Hamburgesa
    cout << *puntero << endl; // Hamburgesa

    return 0;
}