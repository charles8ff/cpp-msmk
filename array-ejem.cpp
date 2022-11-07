#include <string>
#include <stdio.h>
#include <iostream>

using namespace std;

void print(int (&a)[], unsigned int i) {
    cout << "array [ " << i << " ] = " << a[i] << endl;
}
int main() {
    int array[100];
    print (array, 20);
    // print (array, 10000); //segmentation fault
    int arrei[5] = {12,11,10,9,8};
    printf("%d",arrei[3]);
}