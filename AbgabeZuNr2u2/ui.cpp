#include "ui.h"
#include <data.h>
#include <rechner.h>
#include <iostream>
using namespace std;

ui::ui()
{

}
int ui::mainLoop() {

    do {



    Eingabe ();

        if (myRechner.getRechenzeichen() >9) {
            cout << "Fehler Falsche Angabe!" << endl;
            return 0;
        }
        if (myRechner.getRechenzeichen() == 0) {
            return 0;
        }

    eingabeZahlen();
    Ausgabe ();
    }
    while (myRechner.getRechenzeichen() != 0);

    return 1;
}


void ui::Eingabe(){

    int rechenzeichen = 0;

    cout << "Was möchten Sie berechnen?" << endl;
        cout << "1 = Addieren" << endl;
        cout << "2 = Subtrahieren" << endl;
        cout << "3 = Multiplizieren" << endl;
        cout << "4 = Dividieren" << endl;
        cout << "5 = Potenz" << endl;
        cout << "6 = Wurzelziehen" << endl;
        cout << "7 = Binär And" << endl;
        cout << "8 = Binär Or" << endl;
        cout << "9 = Binär NAND" << endl;
        cout << "0 = Beenden" << endl;

        cin >> rechenzeichen;
        myRechner.setRechenzeichen(rechenzeichen);
}


void ui::eingabeZahlen() {
        int zahl1 = 0;
        int zahl2 = 0;

        if (myRechner.getRechenzeichen() == 6){
            cout << "Zahl 1" << endl;
            cin >> zahl1;
            myRechner.setZahl1(zahl1);
        }

        if (myRechner.getRechenzeichen() != 6){
            cout << "Zahl 1" << endl;
            cin >> zahl1;
            myRechner.setZahl1(zahl1);

            cout << "Zahl 2" << endl;
            cin >> zahl2;
            myRechner.setZahl2(zahl2);
        }


        if (myRechner.getRechenzeichen() == 4 && zahl2 == 0){
            cout << "Fehler nicht Möglich (Nicht durch 0 Teilbar)" << endl;
                return ;
        }
        if (myRechner.getRechenzeichen() == 6 && zahl1 <= 0) {
                cout << "Fehler nicht Möglich (Keine negative Wurzel)" << endl;
                    return ;
        }

        myRechner.macheRechnung();
}


int ui::Ausgabe(){
        cout << "Das Ergebnis ist:" << endl;
        cout <<  myRechner.getSumme() << endl;

        return summe;
}
