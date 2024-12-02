#include <iostream>

using namespace std;

int main()
{
    int form;
    double laenge;
    double breite;
    double hoehe;
    double volumen;
    double oberflaecheninhalt;
    double pi = 3.1415926536;

    cout << "Welche Form moechten Sie berechnen? 1=Quader 2=Wuerfel 3=Zylinder" << endl;
                cin >> form;
    cout << "Geben Sie nun Laenge, Breite und Hoehe an." << endl;
    cin >> laenge;
    cin >> breite;
    cin >> hoehe;
        switch(form) {
    case 1:
        volumen = laenge * breite * hoehe;
        oberflaecheninhalt = 2 * (laenge * breite + laenge * hoehe + breite * hoehe);

            break;

    case 2:
    volumen = laenge * breite * hoehe;
    oberflaecheninhalt = 6 * laenge * laenge;

    break;

    case 3:
    volumen = pi * (laenge * laenge / 2) * hoehe;
    oberflaecheninhalt = 2 * pi * (laenge / 2) * (laenge / 2 + 2);

    break;
    }

    cout << "Das Volumen betraegt: " << volumen << endl;
    cout << "Der Oberflaecheninhalt betraegt: " << oberflaecheninhalt << endl;
    return 0;
}
