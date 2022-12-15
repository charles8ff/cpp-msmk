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
// Buena suerte leyendo esto, lector del futuro
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
        void cambiarLuz(){
            luzEncendida = !luzEncendida;
        };
};

class Aula: public Instalación{

    private:
        bool tieneProyector;
        int numProyectores = 0;
        bool funcionaCámara;
        string tipoOrdenador = "Helwett Packard";
        bool ordenadorEncendido = false;
        bool proyectorEncendido = false;
        string contraseñaOrdenador = "nomires";

    public:
        Aula();
        void cambiarOrdenador(){
            ordenadorEncendido = !ordenadorEncendido;
        };
        void cambiarProyector(){
            proyectorEncendido = !proyectorEncendido;
        };
};

class Baño: public Instalación{

    private:
        bool unisex = false;
        string género;
        bool tieneSecador;
        bool quedaJabón;
        bool quedaPapel;
        bool tienePapelera;
        bool cadenaTirada;

    public:
        Baño();
        void tirarCadena(){
            if (cadenaTirada == false) cadenaTirada = true;
            else cout << "Congratulations!" << endl;
        }
};

class Educación{

    protected:
        int personas;

    public:
        Educación();
};

class Asignatura: public Educación{

    protected:
        string título;
        int créditos;
        string temario[6];
        //class Profesor profesorTitular; // ! referencias cruzadas

    public:
        Asignatura();
};

class Departamento: public Educación{

    protected:
        string área;
        Asignatura asignaturas[4];
        // Porque lo suyo es que haya más asignaturas que departamentos
        // 4 me ha parecido buen número. Sigo sin estar seguro de esta movida
    public:
        Departamento();
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

        void pulsarInterruptor( Instalación i ){
            i.cambiarLuz();
        };

        void entrarInstalación( Instalación i ){};
        void salirInstalación( Instalación i ){};
};

class Profesor: public Persona{

    private:
        float nómina = 1000.00;
        int numeroAsignaturas;
        float tasaÉxito = 00.00;
        string numSeguridadSocial;
        bool tieneSeguro;
        int dietas;

    public:
        Profesor();
        void corregir(){};
        void evaluar(){};
        void prepararAula( Aula a){};
        void impartirClase( Asignatura as, Aula a){};
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
        Alumno();
        void setGrado( string g ){
            grado = g;
        }
        string getGrado(){
            return grado;
        }
        void estudiar( Asignatura as ){};
        void asistir( Aula a ){};
        void programar(){};
        void jakiar(){};
        void hablar( Alumno* ){}; // Probablemente array de alumnos
        void aprobar( Asignatura as ){};
        void suspender( Asignatura as ){};
        void hacerPrácticas(){};
};


class Directivo : public Persona{

    private:
        string cargo;
        string responsabilidades;
        void contratar (Persona p){
            // TBD
        }

    public:
        Directivo();
        void setCargo( string g ){
            cargo = g;
        }
        string getCargo(){
            return cargo;
        }
        void setResponsabilidades( string g ){
            cargo = g;
        }
        string getResponsabilidades(){
            return cargo;
        }
        void delegar( string tarea ){};
};


class PAS : public Persona{

    protected:
        string departamento;

    public:
        PAS();
        void limpiar(string cosas){};
        void limpiar(Instalación i); // Polimorfismo
};

class Comercial : public Persona{

    protected:
        int numeroDeAlumnos;
        Alumno almunosACargo[5]; //? this.numeroDeAlumnos da error
        float nómina = 1000.00;
        float tasaÉxito = 00.00;

    public:
        Comercial();
        void negociar( Persona ){};
};


int main (){





    return 0;
}