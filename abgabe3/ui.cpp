#include "Ui.h"
#include <iostream>
#include <limits>
using namespace std;

void Ui::start() {

    eingabeZahl();
    eingabeZahl();
    eingabeOperation();
}

void Ui::eingabeZahl() {
    double zahl;
    cout << "Gib eine Zahl ein: ";
    cin >> zahl;
    if (rechner.istErsteZahlGesetzt()) {
        rechner.setZahl2(zahl);
    } else {
        rechner.setZahl1(zahl);
    }
}

void Ui::eingabeOperation() {
    int wahl;
    cout <<"Operation wählen"<<endl
         <<"1: Addition"<<endl
         <<"2: Subtraktion"<<endl
         <<"3: Multiplikation"<<endl
         <<"4: Division"<<endl
         <<"5: Potenzieren"<<endl
         <<"6: Wurzel"<<endl
         <<"7: Binaer AND"<<endl
         <<"8: Binaer OR"<<endl
         <<"9:Binaer NAND"<<endl
         <<"Wahl: ";
    cin >> wahl;

    switch (wahl) {
    case 1: cout << "Ergebnis: " << rechner.add() << endl; break;
    case 2: cout << "Ergebnis: " << rechner.sub() << endl; break;
    case 3: cout << "Ergebnis: " << rechner.mul() << endl; break;
    case 4: cout << "Ergebnis: " << rechner.div() << endl; break;
    case 5: cout << "Ergebnis: " << rechner.power() << endl; break;
    case 6: cout << "Ergebnis: " << rechner.wurzel() << endl; break;
    case 7: cout << "Ergebnis: " << rechner.binAnd() << endl; break;
    case 8: cout << "Ergebnis: " << rechner.binOr() << endl; break;
    case 9: cout << "Ergebnis: " << rechner.binnand()<<endl;break;
    default: cout << "Ungültige Auswahl." << endl;
    }
}
