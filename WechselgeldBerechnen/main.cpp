#include <iostream>

using namespace std;

int main()
{
    double gezahltesGeld;
    double preis;
    double rückgeld;
    int wiederholen;
    const double muenzeEinCent = 0.01;
    const double muenzeZweiCent = 0.02;
    const double muenzeFuenfCent = 0.05;
    const double muenzeZehnCent = 0.10;
    const double muenzeZwanzigCent = 0.20;
    const double muenzeFuenfzigCent = 0.50;
    const double muenzeEinEuro = 1.00;
    const double muenzeZweiEuro = 2.00;

    int anzahlEinCent;
    int anzahlZweiCent;
    int anzahlFuenfCent;
    int anzahlZehnCent;
    int anzahlZwanzigCent;
    int anzahlFuenfzigCent;
    int anzahlEinEuro;
    int anzahlZweiEuro;



    do { cout << "Was bezahlen Sie?" << endl;
        cin >> gezahltesGeld;

        cout << "Was kostet das Produkt?" << endl;
        cin >> preis;

        rückgeld = gezahltesGeld - preis;
        cout << "Sie bekommen " << rückgeld << " Euro wieder" << endl;


                    anzahlZweiEuro = rückgeld / muenzeZweiEuro;
                    rückgeld -= anzahlZweiEuro * muenzeZweiEuro;
                    cout << "Zwei Euro Muenzen " << anzahlZweiEuro << endl;


                    anzahlEinEuro = rückgeld / muenzeEinEuro;
                    rückgeld -= anzahlEinEuro * muenzeEinEuro;
                    cout << "Ein Euro Muenze " << anzahlEinEuro << endl;

                    anzahlFuenfzigCent = rückgeld / muenzeFuenfzigCent;
                    rückgeld -= anzahlFuenfzigCent * muenzeFuenfzigCent;
                    cout << "Fuenfzig Cent Muenze " << anzahlFuenfzigCent << endl;

                    anzahlZwanzigCent = rückgeld / muenzeZwanzigCent;
                    rückgeld -= anzahlZwanzigCent * muenzeZwanzigCent;
                    cout << "Zwanzig Cent Muenze " << anzahlZwanzigCent << endl;

                    anzahlZehnCent = rückgeld / muenzeZehnCent;
                    rückgeld -= anzahlZehnCent * muenzeZehnCent;
                    cout << "Zehn Cent Muenze " << anzahlZehnCent << endl;

                    anzahlFuenfCent = rückgeld / muenzeFuenfCent;
                    rückgeld -= anzahlFuenfCent * muenzeFuenfCent;
                    cout << "Fuenf Cent Muenze " << anzahlFuenfCent << endl;;

                    anzahlZweiCent = rückgeld / muenzeZweiCent;
                    rückgeld -= anzahlZweiCent * muenzeZweiCent;
                    cout << "Zwei Cent Muenze " << anzahlZweiCent << endl;

                    anzahlEinCent = rückgeld / muenzeEinCent;
                    rückgeld -= anzahlEinCent * muenzeEinCent;
                    cout << "Ein Cent Muenze" << anzahlEinCent << endl;


        cout << "Wollen sie nochmal Rechnen? 1 = Ja | 2 = Nein" << endl;
        cin >> wiederholen;
    } while(1 == wiederholen);





    return 0;
}
