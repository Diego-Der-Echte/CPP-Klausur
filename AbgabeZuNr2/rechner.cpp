#include "rechner.h"


using namespace std;


rechner::rechner()
{
    //mydata = new Data;
}


void rechner::macheRechnung(){
    if (rechenzeichen == 1){
        summe = zahl1 + zahl2;
    }

    if (rechenzeichen == 2){
        summe = zahl1 - zahl2;
    }

    if (rechenzeichen == 3){
        summe = zahl1 * zahl2;
    }

    if (rechenzeichen == 4){
        summe = zahl1 / zahl2;
    }

    if (rechenzeichen == 5){
        summe = pow(zahl1, zahl2);
    }

    if (rechenzeichen == 6){
        summe = sqrt(zahl1);
    }

    if (rechenzeichen == 7){
        summe = zahl1 & zahl2;
    }

    if (rechenzeichen == 8){
        summe = zahl1 | zahl2;
    }

    if (rechenzeichen == 9){
        summe = ! (zahl1 & zahl2);
    }
    string tempString = "Ergebnis = ";
    tempString += to_string(summe);
   // mydata->fileWriten(tempString);
}
