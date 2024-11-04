#include <iostream>

using namespace std;

int main()
{
    double zahl1;
    double zahl2;
    double ergebnis;
    int wiederholung;

    do {   cout << "Zahl 1" << endl;
    cin >> zahl1;

    cout << "Zahl 2" << endl;
    cin >> zahl2;

    ergebnis = zahl1 - zahl2;
    cout << "Das Ergebnis ist ";
    cout << ergebnis << endl;

    cout << "Wollen Sie nochmal rechnen? 1 = Ja | 2 = Nein" << endl;
    cin >> wiederholung;
    }while (1 == wiederholung);






    return 0;
}
