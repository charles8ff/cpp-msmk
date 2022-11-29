#include <iostream>
#include <string>

using namespace std;

int main(){

    int s[5] = { 10, 50, 30, 20, 1 };
    int s2 = sizeof(s); // Esto es el espacio de memoria en elementos (en bytes)

    // Al dividir por la longitud de int obtenemos el tamaño de verdad
    int s3 = sizeof(s)/sizeof(int);

    cout << s3 << endl;

    // Arrays Multidimensonales
    string arrayVariasDimensiones [2][4] = {
    /*Esto son 2 arrays, primero uno*/      {"a", "b", "c", "d"},
    /*Y luego el otro*/                     {"e", "f", "g", "h"}
                                        };
    // El 2 es el número de arrays y el 4 el tamaño de los arrays

    cout << arrayVariasDimensiones[1][3] << endl;
    // Sale la 'h' porque del segundo array (índice 1) está la h en el cuarto lugar (índice 3)

    // Queremos cambiar un elemento
    arrayVariasDimensiones[1][3] = "F";
    cout << arrayVariasDimensiones[1][3] << endl;

    // ! Para que no falle el cout de vez en cuando cerrad el archivo y
    // ! Volvedlo a abrir
    // ! https://learn.microsoft.com/en-us/answers/questions/208835/cout-and-other-functins-becomes-ambiguous-in-visua.html

    // Imprimimos todos
    for (int i = 0; i < 2; i++)// la 'i' va de 0 a 2 porque tenemos 2 arrays
    {
        cout << endl;
        for (int j = 0; j < 4; j++)// la 'j' va del 0 a 4 porque los arrays tienen 4 elementos
        {
            cout << arrayVariasDimensiones[i][j] << ", ";
        }   // la pareja de variables i y j van sacando todas las posiciones del array

    }
    cout << "\n\nAcabamos el array" << endl;
    // Con esto obtenemos formas de representar cosas en más de 2 dimensiones.


    // STRUCTS
    struct {
            int miNumero;
            string miString;
        } miEstructura1, miEstructura2, miEstructura3, miEstructura4;

    // Se pueden crear varias cariables del mismo tipo poniéndolas detrás del corchete
    miEstructura1.miNumero = 1000000;
    miEstructura1.miString = "Cállense hombre.";

    cout << miEstructura1.miString << endl;

    struct coche{
            string marca;
            int año;
        } coche1, coche2;

    coche1.marca = "BMW";
    coche1.año = 2020;
    coche2.marca = "R8";
    coche2.año = 1996;

    cout << coche2.año << endl;

    // Las estructuras no parecen ser iterables :(
    // https://stackoverflow.com/questions/55304455/fill-structure-using-loop

    return 0;
}