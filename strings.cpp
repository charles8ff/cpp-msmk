#include <iostream>
#include <string>

using namespace std;

int main(){

    string str1 = "Holi";
    string str2 = "Gabss";

    string str3 = str1 + " " + str2;

    string str4 = str1.append(" ").append(str2);

    cout << str3 << endl;
    cout << str4 << endl;


    return 0;
}
