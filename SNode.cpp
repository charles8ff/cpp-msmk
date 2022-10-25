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
    virtual ~SNode() {if (next !=  nullptr) delete next;}

    string getString ( void ) const { return elem;}
    void setString (string s ) { elem = s;}

    SNode* getNext() const { return next;}
    void placeNext  (SNode* p) { next = p;}

};