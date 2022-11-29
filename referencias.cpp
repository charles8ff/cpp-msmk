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
    // Nosotros podemos, guardar esa posición en un PUNTERO
    string *ptr = &comida;

    cout << "Veamos qué es comida: \n" ;
    cout << "* Comida es: " << comida << endl; // pizza
    cout << "* Comida es: " << &comida << endl;// dirección
    cout << "* Comida es: " << ptr << endl;    // también dirección
    cout << "* Comida es: " << *ptr << endl;   // también pizza

    // ! Por el amor de dios miren a gabs




    return 0;
}