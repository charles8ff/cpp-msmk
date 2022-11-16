#include <iostream>
#include <string>

using namespace std;

string saludar(){
    cout << "hey"<<endl;
    return "saludo";
}
int main (){
    int cosa = 4;
    cosa<<=9;
    cout << cosa <<endl;
    string result = "no me han saludado";
    string dos = "1";
    cout << result <<endl;
    result = saludar();
    cout << result.size() <<endl;
    return 0;
}