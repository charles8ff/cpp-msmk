// Repasito dee lo que hemos hecho de aquí pa 'trás
// C++ sólo hoy
#include <iostream>
#include <string>

using namespace std;


int main(){

    // TODO: Ej.1: Print text
    cout << "Cosas" << endl; // endl mete un salto de línea
    cout << "Más cosas\n"; // '\n también es un salto de línea

    cout << "Aún más cosas\n\n\nSí.";

    cout << "\tEsto va a aparecer tabulado.\t Hueco."<<endl;

    cout << "\\ <- Mostrar una barra y unas comillas -> \""<<endl;

    // Esto es un comentario, control + cedilla en VSCode
    /* Esto también */

    // No tienes por qué darle valor al mismo tiempo que lo declaras
    int a = 12;
    double b = 17.99;
    float u = 0.0999;
    char c = 'C';
    string str = "Chispitas";
    bool verdad = true;
    bool mentira = 0;

    // Los arrays son una colección de datos, per sé no son un tipo de datos.
    // Arrays, colecciones, vectores.
    // En c++ los arrays sólo guardan 1 tipo de variables.

    cout << str <<endl;
    cout << a + b <<endl; // Puedes sumar en el cout

    int x, y, z;
    x = y = z = 50;

    int e = 2, f = 3, g = 4;
    // = 2,3,4;

    cout << x <<" "<< y <<" "<< z<<endl;
    cout << e <<" "<< f <<" "<< g<<endl;

    x = 33;
    cout << x <<" "<< y <<" "<< z<<endl;


    // Convención de nombres:
    // Letras dígitos y barrabajas
    // Empiezan por barrabaja o por letra
    // Es case sensitive, es decir, distingue entre mayúsculas y minúsculas
    // x =/= X
    // No pueden incluir caracteres especiales: | @ # $ % & / ( ) = ? ¿
    // Existen palabras reservadas a los nombres de variables
    // bool bool = true  <- no va a funcionar


    // Existen Constantes
    const int DIAS_DEL_AÑO_NO_BISIESTO = 365; // <- solo lectura, no la puedes modificar
    // DIAS_DEL_AÑO_NO_BISIESTO = 7 <- Falla

    // Entrada de teclado
    string textodeejemplo = " ";
    cout << textodeejemplo << endl; // " "
    cin >> textodeejemplo;
    cout << textodeejemplo << endl; // MAGIA

    // TODO: Una calculadora:
    // +, -, *, /
    // pides 2 variables por consola y haces la operación.



    return 0;
}

