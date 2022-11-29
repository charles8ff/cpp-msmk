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
    for (int i = 0; i < 2; i++)
    {
        cout << endl;
        for (int j = 0; j < 4; j++)
        {
            cout << arrayVariasDimensiones[i][j] << ", ";
        }

    }






    return 0;
}