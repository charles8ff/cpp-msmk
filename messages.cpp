#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;


class Message {
protected:
    string message;
public:
    Message(string text){
        message = text;
    }
    void myPrint(){
        cout << "Your message is: " << message << ".\n";
    }
};

class Alert : public Message {
private:
    int exclamations;
public:
    Alert(int number, string text): Message(text){
        exclamations = number;
    }
    void myAlert(){
        for (int i = 0; i < exclamations ; i++){
            cout << "! ";
        }
        cout << "\t";
        myPrint();
    }
};

int main() {
    Message m1 ("Hello World");
    Message m2 ("Shirei");
    Alert m3 (3, "Ghost in the Machine");
    m1.myPrint();
    //cout << m2.message;
    m3.myPrint();
    m3.myAlert();
    return EXIT_SUCCESS;
}