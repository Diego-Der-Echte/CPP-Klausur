#include <iostream>
using namespace std;
double eingabe () {
    double widerstand;
    cout << "Bitte Wert für Widerstand eingeben: ";
            cin >> widerstand;

    return widerstand;
}
void rechnung () {

}
void ausgabe  (double ergebnis) {
    cout << "Ergebnis: " << ergebnis
                   << endl << endl;
    return;
}

int main()
{
    int auswahl = 0;
    double widerstand1 = 0, widerstand2 = 0, widerstand3 = 0;
    double ergebnis = 0;
    do
    {
        cout << "Menü:" << endl
             << "1 = Reihenschaltung von 2 Widerständen" << endl
             << "2 = Parallelschaltung von 2 Widerständen" << endl
             << "3 = Reihenschaltung von 3 Widerständen" << endl
             << "0 = Programm beenden" << endl;
        cin >> auswahl;
        if(1 == auswahl)
        {
            widerstand1 = eingabe ();
            widerstand2 = eingabe ();
           ergebnis = widerstand1 + widerstand2;
                    ausgabe(ergebnis);

        }if(2 == auswahl)
        {
                    widerstand1 = eingabe ();
                    widerstand2 = eingabe ();
            double ergebnis;
            ergebnis = (widerstand1 * widerstand2) / (widerstand1 + widerstand2);
            ausgabe(ergebnis);
        }
        if( 3 == auswahl)
        {
            widerstand1 = eingabe ();
            widerstand2 = eingabe ();
            widerstand3 = eingabe ();
            ergebnis = widerstand1 + widerstand2;
            ergebnis = ergebnis + widerstand3;
            ausgabe(ergebnis);
        }
    } while(auswahl > 0);
    return 0;
}
