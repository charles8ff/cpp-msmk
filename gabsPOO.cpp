#include <iostream>
#include <string>

using namespace std;

// Un Objeto es el resultado de una plantilla
// ! POO y Programación Funcional
//     son 2 paradigmas
// ! completamente distintos


class Fruit{
    private:// <-  akcess spesifaier :girl_nail_care:
            // NO se acceden desde fuera de la clase

    protected:// <-  akcess spesifaier
              // SÓLO se accede desde clases heredadas

    public: // <-  akcess spesifaier
            // SÍ se acceden desde fuera

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

        // He añadido las llaves porque si no C++ llora

        void estudiar(){};
        void beberCafe(){};
        void dormir(){};
        void hablar(){};

        Alumno(){
            cout << "Hola Mundo" << endl;
        };

};
/* Encapsulamiento

    Imaginen un modelo de software
    y manejan datos sensibles como Seguros Médicos o Nóminas
    ! Todo lo que esté en private sólo se accede por sus propios métodos
    ver líneas 85-91
*/
class Empleado{
    private:
        float sueldo;
    public:
        Empleado(){}; // Constructor

        void setSueldo( float s ){
            sueldo = s;
        }

        float getSueldo(){
            return sueldo;
        }
};


int main(){

    // Primero creamos a Cote en nuestro programa y luego Cote hace cosas

    Alumno Cote;
    Cote.estudiar();
    Cote.beberCafe();
    Cote.ojos = "verdes";

    // Y ahora creamos a Katy y le asignamos un sueldo, usando el método que hemos creado
    Empleado Katy;
    Katy.setSueldo(5000.01);
    //Katy.sueldo = 7000.07
    // cout << Katy.sueldo << endl;
    // ! Estas líneas no funciona porque sueldo es una variable privada
    // ! y no se puede acceder públicamente, necesitamos su método getSueldo()
    cout << Katy.getSueldo() <<endl; // Oh sorpresa, ahora sí, 5k y 1 cent
    float cualSueldo = 0.0;
    cualSueldo = Katy.getSueldo(); // También 5k
    cout << cualSueldo << endl;


    return 0;
}