#include "rechner.h"



rechner::rechner()
{
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

}
