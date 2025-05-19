#ifndef RECHNER_H
#define RECHNER_H
#include <data.h>
#include <iostream>
#include <cmath>

using namespace std;

class rechner
{
public:
    rechner();

    void macheRechnung();

private:
    int zahl1;
    int zahl2;
    int rechenzeichen;
    double summe;
};

#endif // RECHNER_H
