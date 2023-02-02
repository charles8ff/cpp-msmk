#include <iostream>
#include <string>
#include <cmath>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {

    int myRand = 0;
    int uGuess = 11;

    srand (time(NULL)); // seed
    myRand = rand() %10 +1; // between 1 and


    do{

        cout << "Guess the number:\n\t>> ";
        cin >> uGuess;
        // Ternary madness
        myRand != uGuess ? myRand < uGuess ? cout << "Your guess is higher than the secret number"<<endl : cout << "Your guess is lower than the secret number, try again"<<endl : cout << "WINNER WINNER CHICKEN DINNER";

    } while (myRand != uGuess);


    return 0;
}