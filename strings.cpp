#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){

    string str1 = "Holiii";
    string str2 = "Gabss";

    // la forma que vas a usar
    string str3 = str1 + " " + str2;

    // la forma que queda guay y no vas a usar:
    string str4 = str1.append(" ").append(str2);

    cout << str3 << endl;
    cout << str4 << endl;

    string ñññ = "123456789012345678901234567890123";

    // estos 2 son lo mismo
    cout << ñññ.length() << endl;
    cout << ñññ.size() << endl;

    if (ñññ.length()>12){
        cout << "es segura" << endl;
    } else {
        cout << "NO es segura" << endl;
    }
    // soy el triple de guay que todos y meto un if en una sola línea
    ñññ.length()>12 ? cout << "es segura" << endl : cout << "NO es segura" << endl;

    string str5 = "Cote es algo subnormal";
    cout << str5[3] << endl;
    str5[11] ='0';
    cout << str5 << endl;

    // Sorpresa esta variable no funciona
    // string muchoTexto = "Se necesitan 2 padres, 4 abuelos, 8 bisabuelos, 16 "segundos bisabuelos", 32 terceros bisabuelos, 64 cuartos bisabuelos, 128 quintos bisabuelos, 256 sextos bisabuelos, 512 séptimos bisabuelos, 1024 octavos bisabuelos, y 2048 noveno bisabuelos para que pudieras nacer. De 12 generaciones anteriores, necesitabas un total de 4094 ancestros en los últimos 400 años para poder nacer. Ahora piensa por un momento –¿Cuántas luchas? cuantas batallas ¿Cuántas dificultades? ¿Cuánta tristeza? ¿Cuánta felicidad? ¿Cuántas historias de amor? ¿Cuántas expresiones de esperanza para el futuro?–Tuvieron que sufrir tus antepasados para que existieras en este momento presente, y todo para que quieras ser un femboy.";

    // Esta sí
    string muchoTexto = "Se necesitan 2 padres, 4 abuelos, 8 bisabuelos, 16 \"segundos bisabuelos\", 32 terceros bisabuelos, 64 cuartos bisabuelos, 128 quintos bisabuelos, 256 sextos bisabuelos, 512 séptimos bisabuelos, 1024 octavos bisabuelos, y 2048 noveno bisabuelos para que pudieras nacer. De 12 generaciones anteriores, necesitabas un total de 4094 ancestros en los últimos 400 años para poder nacer. Ahora piensa por un momento –¿Cuántas luchas? cuantas batallas ¿Cuántas dificultades? ¿Cuánta tristeza? ¿Cuánta felicidad? ¿Cuántas historias de amor? ¿Cuántas expresiones de esperanza para el futuro?–Tuvieron que sufrir tus antepasados para que existieras en este momento presente, y todo para que quieras ser un femboy.";
    cout << muchoTexto <<endl;

    // Here we go again, esta no
    // string algebra = "10\2=5";
    // Esta sí
    string algebra = "10\\2=5";
    cout << algebra <<endl;

    // Caracteres especiales aquí todos juntos
    cout << "\n\tAAAAAAAAA\vBBB \r" << endl;

    //Pedimos datos al usuario
    string leDatos = " ";
    cout << "Mamahuevaso proporcione su nombre acá:\n\t>>";
    cin >>  leDatos;
    cout << "Sos llamado " << leDatos << " verdáh?"<< endl;// Oh sorpresa revienta con espacios

    cout << "Mamahuevaso proporcione su nombre compuesto acá:\n\t>>";
    getline(cin, leDatos);// Y ahora no
    cout << "Sos llamado " << leDatos << " verdáh?"<< endl;

    // Y ahora : Mates :fear:
    cout << max(10,4) << endl;
    cout << min(50, 789) << endl;
    cout << sqrt(144) << endl;
    cout << round(4.92) << endl;
    cout << floor(9.99) << endl;
    // Arcoseno tangentes raízes cubicas y mucho más en esta librería de mierda

    // Bools
    bool buleano = true;

    if (buleano){
        cout << "Es cierto socio" << endl;
    } else {
        cout << "Mementiste" << endl;
    }

    int num1 = 35;
    int num2 = 4;

    if (num1 > num2){
        cout << "num1 le gana\n";
    } else {
        cout << "num2 le gana o empate\n";
    }
    // Te meto por el culo otra ternaria
    (num1 > num2) ? cout << "num1 le gana\n" : cout << "num2 le gana o empate\n";

    // Else if
    if (num1 > num2){
        cout << "num1 le gana\n";
    } else if (num1 = num2) {
        cout << "Empate\n";
    } else {
        cout << "num2 le gana\n";
    }

    // Hay una cosa maravillosa en c++ y creo que me acabo de adelantar con los chistes de las ternarias
    string result = (num1 > num2) ? "num1 le gana\n" : "num2 le gana o empate\n";
    cout << result << endl;
    // Soy un puto jefe

    // Switches  (peor que las de Nintendo)
    int diadelasemana = 4;

    switch (diadelasemana) {
    case 1:
        cout << "Lunes" << endl;
        break;
    case 2:
        cout << "Martes" << endl;
        break;
    case 3:
        cout << "Miércoles de Makeleleee" << endl;
        break;
    case 4:
        cout << "Jueves" << endl;
        break;
    case 5:
        cout << "Viernes DELAJUNGLA" << endl;
        break;
    case 6:
        cout << "Sábado" << endl;
        break;
    case 7:
        cout << "Domingo" << endl;
        break;
    default: // Si eres imbécil y tu variable no vale ni 1 ni 2 ni 3 ni 4 ni 5 ni 6 ni 7
            // entra en este caso por defecto
        break;
    }

    return 0;
}
