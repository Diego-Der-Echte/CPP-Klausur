#include "rechner.h"
#include <cmath>
#include <stdexcept>

using namespace std;

Rechner::Rechner(Daten* daten) : datenablage(daten) {}

void Rechner::speichere(double ergebnis) {
    datenablage->speichereErgebnis(to_string(ergebnis));
}

double Rechner::add(double a, double b) {
    double r = a + b;
    speichere(r);
    return r;
}

double Rechner::sub(double a, double b) {
    double r = a - b;
    speichere(r);
    return r;
}

double Rechner::mul(double a, double b) {
    double r = a * b;
    speichere(r);
    return r;
}

double Rechner::div(double a, double b) {
    if (b == 0.0) throw runtime_error("Division durch 0!");
    double r = a / b;
    speichere(r);
    return r;
}

double Rechner::potenz(double basis, double exponent) {
    double r = pow(basis, exponent);
    speichere(r);
    return r;
}

double Rechner::wurzel(double a) {
    if (a < 0.0) throw runtime_error("Wurzel aus negativer Zahl!");
    double r = sqrt(a);
    speichere(r);
    return r;
}

int Rechner::bin_and(int a, int b) {
    int r = a & b;
    speichere(r);
    return r;
}

int Rechner::bin_or(int a, int b) {
    int r = a | b;
    speichere(r);
    return r;
}

int Rechner::bin_nand(int a, int b) {
    int r = ~(a & b);
    speichere(r);
    return r;
}
