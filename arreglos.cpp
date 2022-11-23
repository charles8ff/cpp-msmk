#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){

    // Arrays de strings en C++ van de la forma: tipodecontenido nombre [capacidad] = {contenido,contenido}
    string alumnos_pesadilla[14] = {"Amador",
                                    "Chispitas",
                                    "Cote",
                                    "Celia",
                                    "Pablito",
                                    "Carlitos",
                                    "Manu",
                                    "AndrésPais",
                                    "Katy",
                                    "Pamela",
                                    "Victoria"
                                    "FJBelmonte",
                                    "Nico",
                                    "DiegoMayordomo"
                                };

    // Iteramos nuestro alumnado
    for (int i = 0; i < 5; i++){
        cout << "La i vale: " << i <<""<<endl;
        cout << "Y el alumno es : "<< alumnos_pesadilla[i] << endl;
    }
    // Chispitas se cambia al grado de Esports
    alumnos_pesadilla[1]= "###Vacío";

    // Using the power of Autos
    for (auto elem : alumnos_pesadilla){
        cout<< elem <<endl;
    }


    return 0;
}