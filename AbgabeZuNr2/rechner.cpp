#include "rechner.h"
#include <iostream>
#include <cmath>

using namespace std;


rechner::rechner()
{
}

void rechner::setZahl1 (int newZahl1){
    zahl1 = newZahl1;
}
int rechner::getZahl1 (){
    return zahl1;
}

void rechner::setZahl2 (int newZahl2){
    zahl2 = newZahl2;
}
int rechner::getZahl2 (){
    return zahl2;
}

void rechner::setRechenzeichen (int newRechenzeichen){
    rechenzeichen = newRechenzeichen;
}
int rechner::getRechenzeichen(){
    return rechenzeichen;
}
void rechner::setSumme (int newSumme){
    summe = newSumme;
}
int rechner::getSumme (){
    return summe;
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
