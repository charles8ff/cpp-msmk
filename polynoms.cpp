// //Interface for a sample of real numbers
// interface iSample {
// //return the maximum number in the sample
// public double getMax();
// //return the minimum number in the sample
// public double getMin();
// //return the sum of all the numbers in the sample
// public double sum();
// //return the mean of the sample
// public double mean();
// //return the mean of the sample
// public double median()
//} not sure if i need this

#include <iostream>
#include <string.h>

using namespace std;

class iPolynomial{
private:
    /* data */
    int degree;
    int nterms;
    string polynom;
public:
    iPolynomial(/* args */);//sample constructor
    ~iPolynomial();//sample destructor
};

iPolynomial::iPolynomial(/* args */){
}

iPolynomial::~iPolynomial(){
}

