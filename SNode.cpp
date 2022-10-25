#include <iostream>
#include <string>

using namespace std;

class SNode {
protected:
    string elem;
    SNode *next;

public:
    SNode (const string s) {
        elem = s;
        next = nullptr;
    }
    virtual ~SNode() {if (next != nullptr) delete next;}

    string getString ( void ) const { return elem;}
    void setString (string s ) { elem = s;}

    SNode* getNext() const { return next;}
    void placeNext  (SNode* p) { next = p;}

};

int main (){

    SNode n1 = SNode("uno");
    SNode n2 = SNode("dos");
    SNode n3 = SNode("3");
    n3.setString("tres");
    SNode* flecha = &n2;
    n1.placeNext(flecha);
    flecha = &n3;
    n2.placeNext(flecha);


    cout << n1.getString() << endl;
    cout << n2.getString() << endl;
    cout << n3.getString() << endl;

    flecha = n2.getNext();

    cout << flecha->getString() << endl;
    // flecha->getString(); == (*flecha).getString()

    for(SNode* p = &n1; p!=nullptr; p= p->getNext()){
        cout<< p->getString() << ", ";
    }
    int i = 0;
    for(SNode* p = &n1; p!=nullptr; p= p->getNext()){
        i++;
        p->setString(to_string(i));
    }
    cout << endl;
    for(SNode* p = &n1; p!=nullptr; p= p->getNext()){
        cout<< p->getString() << ", ";
    }
};
