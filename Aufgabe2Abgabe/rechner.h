#ifndef RECHNER_H
#define RECHNER_H

#include <string>
#include "daten.h"

class Rechner {
public:
    Rechner(Daten* daten);

    double add(double a, double b);
    double sub(double a, double b);
    double mul(double a, double b);
    double div(double a, double b);
    double potenz(double basis, double exponent);
    double wurzel(double a);
    int bin_and(int a, int b);
    int bin_or(int a, int b);
    int bin_nand(int a, int b);

private:
    Daten* datenablage;
    void speichere(double ergebnis);
};

#endif
