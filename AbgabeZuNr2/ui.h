#ifndef UI_H
#define UI_H

#include <iostream>
#include "rechner.h"

using namespace std;

class ui
{
public:
    ui();
    int mainLoop();

private:
    rechner myRechner;
    void eingabeZahlen();
    void Eingabe();
    int Ausgabe();
    double summe;
};

#endif // UI_H
