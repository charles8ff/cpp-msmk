#include <iostream>
#include <string>

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
    cout << "\n\tAAAAAAAAA\vBBB \r" <<endl;

    //Pedimos datos al usuario
    string leDatos = " ";
    cout << "Mamahuevaso proporcione su nombre acá:\n\t>>";
    cin >>  leDatos;
    cout << "Sos llamado " << leDatos << " verdáh?";// Oh sorpresa revienta con espacios
    cout << "Mamahuevaso proporcione su nombre compuesto acá:\n\t>>";

    getline(cin, leDatos);// Y ahora no
    cout << "Sos llamado " << leDatos << " verdáh?";
    return 0;
}
