#ifndef I_LIST
#define I_LIST

#include <string>
using namespace std;

class iList {
    virtual void addFirst ( const string& ) = 0;
    virtual void addLast ( const string& ) = 0;
    virtual void addAt ( const unsigned int, const string& ) = 0;
    virtual string getFirst ( void ) const = 0;
    virtual string getLast ( void ) const = 0;
    virtual string getAt ( const unsigned int ) const = 0;
    virtual void removeFirst( void ) = 0;
    virtual void removeLast( void ) = 0;
    virtual void removeAt( const unsigned int ) = 0;
    virtual bool isEmpty( void ) const = 0;
    virtual unsigned int getSize( void ) const = 0;
};

#endif