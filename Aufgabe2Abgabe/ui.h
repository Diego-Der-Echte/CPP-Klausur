#ifndef UI_H
#define UI_H

#include "rechner.h"

class Ui {
public:
    Ui(Rechner* rechner);
    void start();
private:
    Rechner* rechner;
    void menueAnzeigen();
    void verarbeiteEingabe(int wahl);
};

#endif
