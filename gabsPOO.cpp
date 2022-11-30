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
    private:
        /* data */
    public:
        Alumno(/* args */);
        ~Alumno();
};


int main(){



    return 0;
}