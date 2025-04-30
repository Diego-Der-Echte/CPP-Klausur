#include "ui.h"
#include <iostream>

using namespace std;

Ui::Ui()
{

}

void Ui::mainLoop() {
    Eingabe();

}

void Ui::Eingabe(){
    int zahl1;
    int zahl2;
    int rechenzeichen;

    cout << "Geben Sie die erste Zahl an" << endl;
    cin >> zahl1;

    cout << "Geben Sie die zweite Zahl an" << endl;
    cin >> zahl2;

    cout << "Geben Sie das Rechenzeichen an: 1 = Addieren; 2 = Subtrahieren; 3 = Multiplizieren; 4 = Dividieren" << endl;
    cin >> rechenzeichen;

    cout << "Das Ergebnis ist: " << myRechner.rechnen(zahl1, zahl2, rechenzeichen) << endl;
}

void Ui::Ausgabe(){

}
