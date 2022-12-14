#include <iostream>
#include <string>

using namespace std;

// TODO: Estamos en una universidad

// Personas
    // Dirección
    // Alumnos
    // Profesores
    // Personal de Atención y Servicio
    // Comerciales

// Instalaciones
    // Aulas
    // Baños

// Departamentos

class Instalación{
    protected:

        bool tieneTecho;
        string materialSuelo;
        int numeroParedes = 4;
        int numeroPuertas = 1;
        string materialPuertas = "Cristal";
        int numeroVentanas = 2;

    public:
        Instalación();
};

class Aula: public Instalación{
    private:
        bool tieneProyector;
        int numProyectores = 0;
        bool cámara;
        string tipoOrdenador = "Helwett Packard";
        string contraseñaOrdenador = "nomires";

    public:
        Aula();
};

class Baño: public Instalación{
    private:
        bool quedaJabón;
        bool quedaPapel;

    public:
        Baño();
};

class Educación{
    protected:
        int personas;

    public:
        Educación();
};

class Persona{
    private:
        int edad = 17;

    public:
        Persona();
};

int main (){





    return 0;
}