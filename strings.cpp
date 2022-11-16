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

    string ñññ = "123456789012345678901234567890123";

    cout << ñññ.length() << endl;
    cout << ñññ.size() << endl;

    if (ñññ.length()>12){
        cout << "es segura" << endl;
    } else {
        cout << "NO es segura" << endl;
    }

    ñññ.length()>12 ? cout << "es segura" << endl : cout << "NO es segura" << endl;
    return 0;
}
