#include <iostream>
#include <string>

using namespace std;

// Un Objeto es el resultado de una plantilla

// ! POO y Programación Funcional
//       son 2 paradigmas
// ! completamente distintos


class Fruit{
    private:// <-  akcess spesifaier :girl_nail_care:
        // No se acceden desde fuera de la clase

    protected:// <-  akcess spesifaier
        // Sólo se accede desde clases heredadas

    public: // <-  akcess spesifaier
        // Sí se acceden desde fuera

        // Parámetros de la clase
        string color;
        int size;
        string taste;
        float cost;

};

class Alumno{
    public:
        string ojos;
        string nombre;
        string apellidos;
        string DNI;
        // ! He añadido las llaves porque si no c++ llora
        void estudiar(){};
        void beberCafe(){};
        void dormir(){};
        void hablar(){};

        Alumno(){
            cout << "Hola Mundo" << endl;
        };

};


int main(){

    // Primero creamos a Cote en nuestro programa y luego Cote hace cosas
    ////
    Alumno Cote;
    Cote.estudiar();
    Cote.beberCafe();
    Cote.ojos = "verdes";

    return 0;
}