#include "data.h"



Data::Data()
{

}

void Data::setZahl1 (int newZahl1){
    zahl1 = newZahl1;
}
int Data::getZahl1 (){
    return zahl1;
}

void Data::setZahl2 (int newZahl2){
    zahl2 = newZahl2;
}
int Data::getZahl2 (){
    return zahl2;
}

void Data::setRechenzeichen (int newRechenzeichen){
    rechenzeichen = newRechenzeichen;
}
int Data::getRechenzeichen(){
    return rechenzeichen;
}
void Data::setSumme (int newSumme){
    summe = newSumme;
}
int Data::getSumme (){
    return summe;
}

void fileOpen() {
    ofstream fileOpen("output.txt", std::ios::app);
}
