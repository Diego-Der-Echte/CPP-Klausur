#include "ui.h"

ui::ui()
{

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
