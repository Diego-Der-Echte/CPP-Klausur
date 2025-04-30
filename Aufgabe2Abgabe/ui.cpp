#include "ui.h"
#include <iostream>
using namespace std;

Ui::Ui(Rechner* rechner) : rechner(rechner) {}

void Ui::menueAnzeigen() {
    cout << "Taschenrechner" << endl;
    cout << "1: Addition" << endl;
    cout << "2: Subtraktion" << endl;
    cout << "3: Multiplikation" << endl;
    cout << "4: Division" << endl;
    cout << "5: Potenzieren" << endl;
    cout << "6: Wurzel" << endl;
    cout << "7: Binär AND" << endl;
    cout << "8: Binär OR" << endl;
    cout << "9: Binär NAND" << endl;
    cout << "0: Beenden" << endl;
    cout << "Was nehmen Sie?" << endl;
}

void Ui::verarbeiteEingabe(int wahl) {
    double zahl1;
    double zahl2;
    int ia, ib;
    try {
        switch(wahl) {
        case 1:
            cout << "Zahl 1: "; cin >> zahl1;
            cout << "Zahl 2: "; cin >> zahl2;
            cout << "Ergebnis: " << rechner->add(zahl1, zahl2) << "\n";
            break;
        case 2:
            cout << "Zahl 1: "; cin >> zahl1;
            cout << "Zahl 2: "; cin >> zahl2;
            cout << "Ergebnis: " << rechner->sub(zahl1, zahl2) << "\n";
            break;
        case 3:
            cout << "Zahl 1: "; cin >> zahl1;
            cout << "Zahl 2: "; cin >> zahl2;
            cout << "Ergebnis: " << rechner->mul(zahl1, zahl2) << "\n";
            break;
        case 4:
            cout << "Zahl 1: "; cin >> zahl1;
            cout << "Zahl 2: "; cin >> zahl2;
            cout << "Ergebnis: " << rechner->div(zahl1, zahl2) << "\n";
            break;
        case 5:
            cout << "Basis: "; cin >> zahl1;
            cout << "Exponent: "; cin >> zahl2;
            cout << "Ergebnis: " << rechner->potenz(zahl1, zahl2) << "\n";
            break;
        case 6:
            cout << "Zahl: "; cin >> zahl1;
            cout << "Ergebnis: " << rechner->wurzel(zahl1) << "\n";
            break;
        case 7:
            cout << "Int 1: "; cin >> ia;
            cout << "Int 2: "; cin >> ib;
            cout << "Ergebnis: " << rechner->bin_and(ia, ib) << "\n";
            break;
        case 8:
            cout << "Int 1: "; cin >> ia;
            cout << "Int 2: "; cin >> ib;
            cout << "Ergebnis: " << rechner->bin_or(ia, ib) << "\n";
            break;
        case 9:
            cout << "Int 1: "; cin >> ia;
            cout << "Int 2: "; cin >> ib;
            cout << "Ergebnis: " << rechner->bin_nand(ia, ib) << "\n";
            break;
        default:
            cout << "Ungültige Eingabe!\n";
        }
    } catch (exception& e) {
        cerr << "Fehler: " << e.what() << "\n";
    }
}

void Ui::start() {
    int wahl;
    do {
        menueAnzeigen();
        cin >> wahl;
        if (wahl != 0) {
            verarbeiteEingabe(wahl);
        }
    } while (wahl != 0);
}
