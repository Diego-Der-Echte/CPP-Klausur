#include <iostream>

using namespace std;

int main()
{
    double Sparleistung;
    double Prämie;
    double Verheiratet;
    double Kinder;
    double Gespartes1;
    double Gespartes2;


    cout << "Sparleistung max 800 Euro" << endl;
          cin >> Sparleistung;
    if (801 < Sparleistung) {
          cout << "Fehler zu hohe Sparleistung!" << endl;
    }
    else
          if(801 > Sparleistung) {
          cout << Sparleistung << endl;

          cout << " Sind Sie verheiratet? " << " 1 = Ja " << " 2 = Nein " << endl;
          cin >> Verheiratet;

          cout << "Haben Sie Kinder? " << " 1 = 1 Kind " << " 2 = 2 Kinder " << " 3 = 3 Kinder" << " 4 = keine Kinder " << endl;
          cin >> Kinder;
    }

    if (1 == Verheiratet) {
            Gespartes1 = Sparleistung * 1.07;
          cout << Sparleistung << " * " << 1.07 << " + " << endl;
    } else
          if (2 == Verheiratet) {
            Gespartes1 =Sparleistung * 1.14;
           cout << Sparleistung << " * " << 1.14  << endl;
    }

    if (1 == Kinder) {
           Gespartes2 = Gespartes1 * 1.02;
           cout << Gespartes1 << " * " << 1.02 << endl;
    } else
           if (2 == Kinder) {
           Gespartes2 = Gespartes1 * 1.04;
           cout << Gespartes1 << " * " << 1.04 << endl;
    } else
           if (3 == Kinder) {
           Gespartes2 = Gespartes1 * 1.06;
           cout << Sparleistung << " * " << 1.06 << endl;
    } else
           if (4 == Kinder) {
           Gespartes2 = Gespartes1 * 1;
            cout << Gespartes1 << " * " << 1 << endl;
    }

    cout << "Die Sparleistung nach einem Jahr ist ";
    cout << Gespartes2 << endl;

    return 0;
}
