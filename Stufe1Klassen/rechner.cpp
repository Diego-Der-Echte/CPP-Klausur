#include "rechner.h"
#include <iostream>

using namespace std;

Rechner::Rechner()
{

}
int Rechner::rechnen(int zahl1, int zahl2, int rechenzeichen){
    if (1 == rechenzeichen){
        summe = zahl1 + zahl2;
    }
    if (2 == rechenzeichen){
        summe = zahl1 - zahl2;
    }
    if (3 == rechenzeichen){
        summe = zahl1 * zahl2;
    }
    if (4 == rechenzeichen){
            if (0 == zahl2) {
            cout << "Fehler" << endl;
            return 0;

            }
        summe = zahl1 / zahl2;
    }
 /* Die Rechnungen zu der jeweiligen Nummer die man eingibt. Bei dem 4 Reichenzeichen wird zudem geprüft ob der teiler 0 ist. Somit würde das Programm abgebrochen werden */

    return summe;
}
