#ifndef RECHNER_H
#define RECHNER_H

#include "Daten.h"
#include <cmath>
#include <stdexcept>

using namespace std;


class Rechner {
public:
    void setZahl1(double z);
    void setZahl2(double z);
    bool istErsteZahlGesetzt();

    void ergebnis1();

    double add();
    double sub();
    double mul();
    double div();
    double power();
    double wurzel();
    int binAnd();
    int binOr();
    int binnand();

private:
    Daten daten;
    bool ersteZahlGesetzt = false;
    double ergebnis;
};

#endif
