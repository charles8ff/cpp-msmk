#include <iostream>
#include <string>

using namespace std;


double Sumar(double x,double y){
    return x + y;
}

double Restar(double x,double y){
    return x - y;
}

double Multiplicar(double x,double y){
    return x * y;
}

double Dividir(double x,double y){
    if (y == 0 ) {

        cout << "No es posible dividir entre";
        return 0;
    } else return x / y;
}

int main(){

    // https://foro.noticias3d.com/vbulletin/showthread.php?t=387260

    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << "-------- Calculadora C++ No copiada de ningún sitio --------" << endl;
    cout << "------------------ KarmaPolice es un jefe ------------------" << endl;

    double val1;
    cout << "Introduzca el primer valor:\n\t>> ";
    cin >> val1;
    double val2;
    cout << "Introduzca el segundo valor:\n\t>> ";
    cin >> val2;
    cout << "---------------------------------" << endl;

    int chooser;
    do {
        cout << "Para sumar pulse (1), para restar pulse (2),\npara multiplicar pulse (3), para dividir (4):";
        cout << "\nPulse (5) para apagar la calculadora.\t>> ";
        cin >> chooser;

        switch(chooser) {
            case 1:
                cout << "\n";
                cout << ">>>>>--- El resultado de su Suma es:---<<<<<" << endl;
                cout << ">>>>>---------   " << Sumar(val1,val2) << "   ---------<<<<<" << endl;
                cout << "\n";
                break;
            case 2:
                cout << "\n";
                cout << ">>>>>--- El resultado de su Resta es: ---<<<<<" << endl;
                cout << ">>>>>---------   " << Restar(val1,val2) << "   ---------<<<<<" << endl;
                cout << "\n";
                break;
            case 3:
                cout << "\n";
                cout << ">>>>>--- El resultado de su Multiplicación es: ---<<<<<" << endl;
                cout << ">>>>>---------   " << Multiplicar(val1,val2) << "   ---------<<<<<" << endl;
                cout << "\n";
                break;
            case 4:
                cout << "\n";
                cout << ">>>>>--- El resultado de su División es: ---<<<<<" << endl;
                cout << ">>>>>---------   " << Dividir(val1,val2) << "   ---------<<<<<" << endl;
                cout << "\n";
                break;
            default:
                cout << ">>>>>--- Operación no soportada, apagando... ---<<<<<" << endl;
                break;
        }
    } while (chooser < 5);
    return 0;
}
