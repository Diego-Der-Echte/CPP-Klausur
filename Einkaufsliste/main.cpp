#include <iostream>

using namespace std;

int main()
{
    double Birnen;
    double Gurken;
    double Butter;
    double Milch;
    double Schokolade;
    double Preis;

    cout << "Birnen: 0,87 Euro" << endl;
    cin >> Birnen;
    cout << "Gurken: 0,66 Euro" << endl;
    cin >> Gurken;
    cout << "Butter: 1,57 Euro" << endl;
    cin >> Butter;
    cout << "Milch: 1,12 Euro" << endl;
    cin >> Milch;
    cout << "Schokolade: 1,91 Euro" << endl;
    cin >> Schokolade;

    Preis = Birnen * 0.87 + Gurken * 0.66 + Butter * 1.57 + Milch * 1.12 + Schokolade * 1.91;



    cout << "Insgesamt bezahlen Sie!" << endl;
    cout << Preis << endl;

    return 0;
}
