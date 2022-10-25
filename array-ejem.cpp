#include <iostream>
#include <string.h>

using namespace std;

void print(int (&a)[], unsigned int i) {
    cout << "array [ " << i << " ] = " << a[i] << endl;
}
int main() {
    int array[100];
    print (array, 20);
    print (array, 10000); //segmentation fault
}