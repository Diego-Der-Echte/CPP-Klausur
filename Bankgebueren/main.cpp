#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    double Ueberweisungen;
        double Gebuehren1;
        double Gebuehren2;
        double Zwischenergebnis1;
        double Gebuehren3;
        double Zwischenergebnis2;


                cout << " Wie viel Ueberweisungen hatten Sie diesen Monat? " << endl;
        cin >> Ueberweisungen;



                    if(Ueberweisungen < 11) {
            Gebuehren1 = Ueberweisungen;
                        cout << " Die Ueberweisungen sind gratis " << endl;

                    } else
                            if((Ueberweisungen > 10)&&(Ueberweisungen < 21)) {
                                    Zwischenergebnis1 = Ueberweisungen - 10;
                                        Gebuehren2 = Zwischenergebnis1 * 0.15;

                                cout << "Die Gebuehren fuer die Ueberweisungen sind: ";
                                    cout << Gebuehren2 << " Euro " << endl;

                    } else
                            if (Ueberweisungen > 20) {
                                    Zwischenergebnis2 = Ueberweisungen - 20;
                                        Gebuehren3 = 10 * 0.15 + Zwischenergebnis2 * 0.10;

                                cout << "Die Gebuehren fuer die Ueberweisungen sind: ";
                                    cout << Gebuehren3 << " Euro " << endl;
                    }








    return 0;
}
