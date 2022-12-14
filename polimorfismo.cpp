#include <iostream>
#include <string>

using namespace std;

// TODO: Estamos en una universidad
// Instalación
    // Aula
    // Baño
// Persona
    // Profesor
    // Alumno
    // Directivo
    // Personal de Atención y Servicio
    // Comercial
//! esto va a ser una interfaz
//? Educación
    // Asignatura
    // Departamento
// TODO: Acabar en lucidchart como creemos que tiene que ser la interfaz educación.

class Instalación{

    protected:
        bool tieneTecho;
        string materialSuelo;
        int numeroParedes = 4;
        int numeroPuertas = 1;
        string materialPuertas = "Cristal";
        int numeroVentanas = 2;
        bool luzEncendida = false;

    public:
        Instalación();
        void pulsarInterruptor(){
            luzEncendida = !luzEncendida;
        };
};

class Aula: public Instalación{

    private:
        bool tieneProyector;
        int numProyectores = 0;
        bool funcionaCámara;
        string tipoOrdenador = "Helwett Packard";
        string contraseñaOrdenador = "nomires";

    public:
        Aula();
};

class Baño: public Instalación{

    private:
        bool unisex = false;
        string género;
        bool tieneSecador;
        bool quedaJabón;
        bool quedaPapel;
        bool tienePapelera;

    public:
        Baño();
};


class Persona{

    private:
        string ojos;
        string nombre;
        string apellidos;
        string DNI;
        string teléfono;
        string direción;
        int edad = 17;

    public:
        Persona();
};

class Profesor: public Persona{

    private:
        float nómina = 1000.00;
        int numeroAsignaturas;
        float tasaÉxito;
        string numSeguridadSocial;
        bool tieneSeguro;
        int dietas;

    public:
        Profesor();
        void corregir(){};
        void evaluar(){};
        void impartirClase( string asignatura){};
        void pasarLista(){};

};

class Alumno : public Persona{

    private:
        string grado;
        string curso;
        int númeroLista;
        float notas[4] = {0.0,0.0,0.0,0.0};
        float porcentajeAsistencia = 00.00;
        int entregados;
        int créditosCursados;
        int créditosPendientes;

    public:
        void setGrado( string g ){
            grado = g;
        }
        string getGrado(){
            return grado;
        }
        void estudiar(){};
        void asistir(){};
        void programar(){};
        void jakiar(){};
        void hablar(){};
        void aprobar(){};
        void suspender(){};
        void hacerPrácticas(){};
};

class Educación{

    protected:
        int personas;

    public:
        Educación();
};


int main (){





    return 0;
}