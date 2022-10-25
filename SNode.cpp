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
    virtual ~SNode() {if (next !=  nullptr) delete next; }
};