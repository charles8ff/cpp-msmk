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

    // Arrei Mezods
    int edades[12] = { };
    edades[0]=19;
    edades[1]=22;
    edades[2]=21;
    edades[3]=22;
    edades[4]=23;
    edades[5]=22;
    edades[6]=19;
    edades[7]=19;
    edades[8]=31;
    edades[9]=20;
    edades[10]=19;
    edades[11]=26;

    // Tradicional
    for (int i = 0; i < 12; i++){
        cout<< edades[i] <<endl;
    }
    // // Size
    // for (int i =0; i < edades.size(); i++){
    //     cout<< edades[i] <<endl;
    // }
    int j = sizeof(edades);
    cout <<"huh?.:" << j << endl;


    return 0;
}