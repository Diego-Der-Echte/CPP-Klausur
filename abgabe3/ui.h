#ifndef UI_H
#define UI_H

#include "Rechner.h"

class Ui {
public:
    void start();

private:
    Rechner rechner;

    void menue();
    void eingabeZahl();
    void eingabeOperation();
};

#endif
