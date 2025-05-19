#include "Rechner.h"


void Rechner::setZahl1(double z) {
    daten.setZahl1(z);
    ersteZahlGesetzt = true;
}
void Rechner::setZahl2(double z) {
    daten.setZahl2(z);
}
bool Rechner::istErsteZahlGesetzt() {
    return ersteZahlGesetzt;
}



void Rechner::ergebnis1(){
    string tempstring;
    tempstring = "Ergebnis = ";
    tempstring += to_string(ergebnis);
    daten.addtofile(tempstring);

}

double Rechner::add() {

    ergebnis = daten.getZahl1() + daten.getZahl2();
    ergebnis1();
    return ergebnis;
}

double Rechner::sub() {
    ergebnis = daten.getZahl1() - daten.getZahl2();
    ergebnis1();
    return ergebnis;
}

double Rechner::mul() {
    ergebnis = daten.getZahl1() * daten.getZahl2();
    ergebnis1();
    return ergebnis;
}

double Rechner::div() {
    ergebnis = daten.getZahl1() / daten.getZahl2();
    ergebnis1();
    return ergebnis;
}

double Rechner::power() {
    ergebnis = pow(daten.getZahl1(), daten.getZahl2());
    ergebnis1();
    return ergebnis;
}

double Rechner::wurzel() {
    ergebnis = sqrt(daten.getZahl1());
    ergebnis1();
    return ergebnis;
}

int Rechner::binAnd() {
   ergebnis = static_cast<int>(daten.getZahl1()) & static_cast<int>(daten.getZahl2());
    ergebnis1();
   return ergebnis;
}
int Rechner::binOr() {
   ergebnis = static_cast<int>(daten.getZahl1()) | static_cast<int>(daten.getZahl2());
   ergebnis1();
   return ergebnis;
}
int Rechner::binnand() {
   ergebnis = !(static_cast<int>(daten.getZahl1()) & static_cast<int>(daten.getZahl2()));
   ergebnis1();
   return ergebnis;
}

