// Repasito dee lo que hemos hecho de aquí pa 'trás
// Hoy C++ sólo
#include <iostream>
#include <string>

using namespace std;


int main(){

    // TODO: Ej.1: Print text
    cout << "Cosas" << endl; // endl mete un salto de línea
    cout << "Más cosas\n"; // '\n también es un salto de línea

    cout << "Aún más cosas\n\n\nSí.";

    cout << "\tEsto va a aparecer tabulado.\t Hueco."<<endl;

    cout << "\\ <- Mostrar una barra y unas comillas -> \""<<endl;

    // Esto es un comentario, control + cedilla en VSCode
    /* Esto también */

    // No tienes por qué darle valor al mismo tiempo que lo declaras
    int a = 12;
    double b = 17.99;
    float u = 0.0999;
    char c = 'C';
    string str = "Chispitas";
    bool verdad = true;
    bool mentira = 0;

    // Los arrays son una colección de datos, per sé no son un tipo de datos.
    // Arrays, colecciones, vectores.
    // En c++ los arrays sólo guardan 1 tipo de variables.

    cout << str <<endl;
    cout << a + b <<endl; // Puedes sumar en el cout

    int x, y, z;
    x = y = z = 50;

    int e = 2, f = 3, g = 4;
    // = 2,3,4;

    cout << x <<" "<< y <<" "<< z<<endl;
    cout << e <<" "<< f <<" "<< g<<endl;

    x = 33;
    cout << x <<" "<< y <<" "<< z<<endl;


    // * Convención de nombres:
    // Letras dígitos y barrabajas
    // Empiezan por barrabaja o por letra
    // Es case sensitive, es decir, distingue entre mayúsculas y minúsculas
    // x =/= X
    // No pueden incluir caracteres especiales: | @ # $ % & / ( ) = ? ¿
    // Existen palabras reservadas a los nombres de variables
    // bool bool = true  <- no va a funcionar


    // Existen Constantes
    const int DIAS_DEL_AÑO_NO_BISIESTO = 365; // <- solo lectura, no la puedes modificar
    // DIAS_DEL_AÑO_NO_BISIESTO = 7 <- Falla

    // Entrada de teclado
    string textodeejemplo = " ";
    cout << textodeejemplo << endl; // " "
    cin >> textodeejemplo;
    cout << textodeejemplo << endl; // MAGIA

    // TODO: Una calculadora:
    // +, -, *, /
    // pides 2 variables por consola y haces la operación.

    // * Diferencia entre double y float:
    // En double tienes más precision en los decimales que en float
    // Más info aquí -> https://youtu.be/s9F8pu5KfyM
    // Recordamos que las string son grupos de caracteres

    // Operadores
    int num1, num2;
    num1 = 5;
    num2 = 2;
    int resultado = num1 % num2; // resultado = 1
    num1++;
    cout << num1 << endl; // num1 = 6
    if (num1 == num2) cout << "No es" << endl;
    if (num1 != num2) cout << "Sí es" << endl; // Os fiáis de que está escrito ! = sin espacio
    if (num1 > num2) cout << "También es" << endl;
    if (num1 < num2) cout << "No es" << endl;
    if (num1 >= num2) cout << "Sí acontece" << endl; // Os fiáis de que está escrito > = sin espacio
    if (num1 <= num2) cout << "No acontece" << endl; // Os fiáis de que está escrito < = sin espacio

    if (num1 == 6 && num2 == 2) cout << "Chachi" <<endl;
    if (num1 == 6 || num2 == 2) cout << "Chachi" <<endl;

    if (!(num1 < 5 && num2 < 10)){
            cout << "Pasó algo" <<endl;
        } else if (num1 == 6) {
            cout << "Pasó más" <<endl;
        } else {
            cout << "Pasó otra cosa" <<endl;
        }

    int time = 20;
    // * Ternarias:
    string result = (time < 18) ? "Good day." : "Good evening.";
    cout << result;

    // Librería math : existe
    // A otra cosa


    // Switches
    int caso = 0;
    switch (caso){
    case 1:
        /* code */
        break;
    case 2:
        /* code */
        break;
    case 3:
        /* code */
        break;
    // Repetir al gusto

    default: // Entra en el default si no encuentra ninguno de los casos
        /* code */
        break;
    }


    // Bucles
    int i = 10;
    while (i > 0) {
        cout << "Hola";
        i--;
    }

    do {
        cout << "Hola";
        i++;
    } while (i < 10);

    for (int j = 0; j < 5; j = j+2) {
        cout << "salu2";
        // Aquí ya no hace falta el j=j+2 porque está arriba
    }
    // ! Los pasos prohibidos:
    // break;
    // continue;
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            continue;
        }
        cout << i << "\n";
    }
    cout << "\n----------------------------------\n"; // Aquí saca todos menos el 4
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            break;
        }
        cout << i << "\n";
    } // Aquí parará en el 4 y hastaluegomaricarmen


    // Arrays
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    cout << cars[0]; // Efectivamente imprime Volvo porque empieza en 0

    // Para recorrer un array
    for (int i = 0; i < 4; i++){
        cout << "La i vale: " << i <<" "<<endl;
        cout << "Y el coche es : "<< cars[i] << endl;
    }
    // ! Siempre inicializar los arrays con el número de elementos que va a tener

    // Arrays Multidimensonales
    string arrayVariasDimensiones [2][4] = {
    /*Esto son 2 arrays, primero uno*/  {"a", "b", "c", "d"},
    /*Y luego el otro*/                 {"e", "f", "g", "h"}
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
            int miNumero; // Tiene ahora un número
            string miString; // y una letra asignados a la misma variable
        } miEstructura1, miEstructura2, miEstructura3, miEstructura4;

    // Se pueden crear varias variables del mismo tipo poniéndolas detrás del corchete
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

    struct personitas
{
        string nombre = " ";
        string apellido_1 = " ";
        string apellido_2 = " ";
        int edad = 0;

    } Victoria, Carlos, Pablo, Amador, Gabs;

    Carlos.nombre = "Carlos";
    Carlos.apellido_1 = "Fisac";
    Carlos.apellido_2 = "Ferrández";
    Carlos.edad = 23;

    cout << "Nombre: "<< Victoria.nombre <<endl; // Sale vacío porque no lo hemos asignado
    cout << "Nombre: "<< Carlos.nombre <<endl; // Sale Carlos porque línea 248 lo hemos asignado

    // * REFERENCIAS
    int edad = 0;
    int &x = edad;

    cout << "Introduzca su edad: \n\t>>";
    // cin >> edad;
    cout << x + 27<< endl; // Esto será edad + 27
                          // porque 'x' apunta al contenido que hay en edad
    //
    string comida = "pizza";
    cout << &comida << endl; // Esto devuelve una dirección de memoria
                            // del estilo 0x53c69ffcf0 <- eso es hexadecimal
                            // // dIcE CarLoS qUe esTá RePeTidO mimimimi
    // Nosotros podemos, guardar esa posición en un PUNTERO
    string* ptr = &comida;  // Se puede escribir también como:
                            // string *ptr o string * ptr
                            // Pero no son recomendables

    cout << "\nVeamos qué es comida: \n" ;
    cout << "* Comida es: " << comida << endl; // pizza
    cout << "* Comida es: " << &comida << endl;// dirección
    cout << "* Comida es: " << ptr << endl;    // también dirección
    cout << "* Comida es: " << *ptr << endl;   // también pizza

    // ! Voy a cambiar todos los nombres porque si no el compilador llora que flipas

    string cena = "sushi";
    string* puntero = &cena;
    cout << cena << endl; // sushi
    cout << *puntero << endl; // sushi

    // Ahora vamos a desreferenciar (quitar el puntero)
    // y coseguimos cambiar cena sin tocarla.
    *puntero = "Hamburgesa";
    cout << cena << endl; // Hamburgesa
    cout << *puntero << endl; // Hamburgesa

    return 0;
}