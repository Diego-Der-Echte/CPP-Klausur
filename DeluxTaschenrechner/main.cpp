#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

int eingabe(int &eingabeRechenart, double &Zahl1, double &Zahl2) {



    cout << "Was wollen Sie berechnen?" << endl;
    cout << "1 = Plus, 2 = Minus, 3 = Mal, 4 = geteilt, 5 = Sinus, 6 = Kosinus, 7 = Wurzel" << endl;
    cin >> eingabeRechenart;
    if ((eingabeRechenart >7) || (eingabeRechenart <0.9)) {
        cout << "Fehler!!!" << endl;
        return -1; }


    cout << "Geben Sie die erste Zahl ein!" << endl;
    cin >> Zahl1;
    cout << "Geben Sie die zweite Zahl ein!" << endl;
    cin >> Zahl2;

    return eingabeRechenart;
}
void rechnung(int &eingabeRechenart, double &Zahl1, double &Zahl2, double &Ergebnis) {



    switch (eingabeRechenart) {
    case 1: Ergebnis = Zahl1 + Zahl2;
        cout << Zahl1 << " + " << Zahl2 << endl;
        break;
    case 2: Ergebnis = Zahl1 - Zahl2;
        cout << Zahl1 << " - " << Zahl2 << endl;
        break;
    case 3: Ergebnis = Zahl1 * Zahl2;
        cout << Zahl1 << " * " << Zahl2 << endl;
        break;
    case 4: Ergebnis = Zahl1 / Zahl2;
        cout << Zahl1 << " : " << Zahl2 << endl;
        break;
    case 5: Ergebnis = sin(Zahl1 / Zahl2);
        cout << "sin (" << Zahl1 << "/" << Zahl2 << ")" << endl;
        break;
    case 6: Ergebnis = cos(Zahl1 / Zahl2);
        cout << "cos (" << Zahl1 << "/" << Zahl2 << ")" << endl;
        break;
    case 7: Ergebnis = sqrt (Zahl1 + Zahl2);
        cout << "Wurzel (" << Zahl1 << "+" << Zahl2 << ")" << endl;
        break;}

}
void ausgabe (double &Zahl1, double &Zahl2, double &Ergebnis) {

    cout << "Ihr Ergebnis ist: " << Ergebnis << endl;
}
int main() {
        SetConsoleOutputCP(CP_UTF8);

        int eingabeRechenart;
        double Zahl1;
        double Zahl2;
        double Ergebnis;
    eingabe(eingabeRechenart, Zahl1, Zahl2);
    rechnung( eingabeRechenart, Zahl1, Zahl2, Ergebnis);
    ausgabe ( Zahl1, Zahl2, Ergebnis);







    return 0;
}
