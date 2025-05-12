#include "ui.h"
#include <iostream>
using namespace std;

ui::ui()
{

}
void ui::mainLoop() {


    Eingabe ();
    eingabeZahlen();
    Ausgabe ();
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
        cout << "7 = Binaer And" << endl;
        cout << "8 = Binaer Or" << endl;
        cout << "9 = Binaer NAND" << endl;

        cin >> rechenzeichen;
        myRechner.setRechenzeichen(rechenzeichen);
        if (rechenzeichen >9) {
            cout << "Fehler Falsche Angabe!" << endl;
            return;
        }
}




void ui::eingabeZahlen() {
        int zahl1 = 0;
        int zahl2 = 0;

        cout << "Zahl 1" << endl;
        cin >> zahl1;
        myRechner.setZahl1(zahl1);

        cout << "Zahl 2" << endl;
        cin >> zahl2;
        myRechner.setZahl2(zahl2);

        if (myRechner.getRechenzeichen() == 4 && zahl2 == 0){
            cout << "Fehler nicht Möglich" << endl;
                return ;
        }

        myRechner.macheRechnung();
}


int ui::Ausgabe(){
        cout <<  myRechner.getSumme() << endl;

        return summe;
}
