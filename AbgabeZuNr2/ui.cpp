#include "ui.h"
#include <iostream>
using namespace std;

ui::ui()
{

}



int ui::Eingabe(){

    int rechenzeichen = 0;
    int zahl1 = 0;
    int zahl2 = 0;

    cout << "Was möchten Sie berechnen?" << endl;
        cout << "1 = Addieren" << endl;
        cout << "2 = Subtrahieren" << endl;
        cout << "3 = Multiplizieren" << endl;
        cout << "4 = Dividieren" << endl;
        cout << "5 = Potenz" << endl;
        cout << "6 = Wurzelziehen" << endl;
        cout << "7 = Binaer And" << endl;
        cout << "8 = Binaer Or" << endl;

        cin >> rechenzeichen;
        if (rechenzeichen >8) {
            cout << "Fehler Falsche Angabe!" << endl;
            return 0;
        }

        switch (rechenzeichen) {
        case 1:
            cout << "Multiplizieren" << endl;
            cout << "Eingabe Zahl 1 und Zahl 2" << endl;
            cin >> zahl1;
            cin >> zahl2;
            break;

        case 2:
            cout << "Subtrahieren" << endl;
            cout << "Eingabe Zahl 1 und Zahl 2" << endl;
            cin >> zahl1;
            cin >> zahl2;
            break;

        case 3:
            cout << "Multiplizieren" << endl;
            cout << "Eingabe Zahl 1 und Zahl 2" << endl;
            cin >> zahl1;
            cin >> zahl2;
            break;

        case 4:
            cout << "Dividieren" << endl;
            cout << "Eingabe Zahl 1 und Zahl 2" << endl;
            cin >> zahl1;
            cin >> zahl2;

            if (0 == zahl2) {
                cout << "Fehler nicht Möglich" << endl;
                    return 0;
            }
            break;

        case 5:
            cout << "Potenz" << endl;
            cout << "Eingabe Zahl 1 und Zahl 2 (Potenz)" << endl;
            cin >> zahl1;
            cin >> zahl2;
            break;

        case 6:
            cout << "Wurzelziehen" << endl;
            cout << "Eingabe Zahl 1" << endl;
            cin >> zahl1;
            break;

        case 7:
            cout << "Binaer And" << endl;
            cout << "Eingabe Zahl 1" << endl;
            cin >> zahl1;
            break;

        case 8:
            cout << "Binaer Or" << endl;
            cout << "Eingabe Zahl 1" << endl;
            cin >> zahl1;
            break;
        }
        return zahl1 / zahl2;
}
