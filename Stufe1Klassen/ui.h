#ifndef UI_H
#define UI_H

#include "rechner.h"
class Ui
{
public:
    Ui();
    void mainLoop();


private:
    Rechner myRechner;
    void Eingabe();
    void Ausgabe();
};

#endif // UI_H
