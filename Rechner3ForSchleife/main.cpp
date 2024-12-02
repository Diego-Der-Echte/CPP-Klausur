#include <iostream>

using namespace std;

int main()
{
    double Zahl1;
    double Zeichen;
    double Zahl2;
    double Ergebnis;

    for(int i = 0;i < 5; i++){

    cout << "Zahl 1" << endl;
    cin >> Zahl1;

    cout << "Zahl 2" << endl;
    cin >> Zahl2;

    cout << "Rechenzeichen:" << " 1 = Addition " << " 2 = Subtraktion " << " 3 = Multiplication " << " 4 = Division " << endl;
    cin >> Zeichen;


    if (1 == Zeichen) {Ergebnis = Zahl1 + Zahl2;
        cout << Zahl1 << " + " << Zahl2 << endl;

    } else if (2 == Zeichen) {Ergebnis = Zahl1 - Zahl2;
        cout << Zahl1 << " - " << Zahl2 << endl;

    } else if (3 == Zeichen) {Ergebnis = Zahl1 * Zahl2;
        cout << Zahl1 << " * " << Zahl2 << endl;

    } else if (4 == Zeichen) {Ergebnis = Zahl1 / Zahl2;
        cout << Zahl1 << " : " << Zahl2 << endl;
    } else //
        cout << "Falsche Eingabe!" << endl;


    cout << "Das Ergebnis ist ";
    cout << Ergebnis << endl;
    }
    return 0;
}
