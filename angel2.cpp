#include <iostream>
#include <string>
#include <cmath>

using namespace std;
class Clase {
    public:
        Clase(){};
        void acción(){
            cout << "Aaaaaaacción" <<endl;
        }
};

int main(){

    int i = 1;

    if (i <= 0) {

        Clase miClase;
        cout << "if 1" <<endl;

    } else {

        if(i == 1) {

            //miClase.acción(); //! NOT DECLARED
            cout << "if 1" <<endl;

        } else {
            if(i == 2) {

                cout << "if 2" <<endl;

            } else {
                if(i == 3) {

                    cout << "if 3" <<endl;

                } else {
                    if(i == 4) {

                        cout << "if 4" <<endl;

                    }
                }
            }
        }
    }
    return 0;
}
