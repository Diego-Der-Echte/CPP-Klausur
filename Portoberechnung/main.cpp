#include <iostream>

using namespace std;

int main()
{
    double laenge;
    double breite;
    double hoehe;
    double gewicht;


    cout << "Geben Sie zuerst die Laenge, dann die Breite, dann die Hoehe und dann das Gewicht (in Gramm) an" << endl;
    cin >> laenge;
    cin >> breite;
    cin >> hoehe;
    cin >> gewicht;


    if ((laenge >= 14 & laenge <= 25.5)&&(breite >= 9 & breite <= 12.5)&&(hoehe <= 0.5)&&(gewicht <= 20)) {
            cout << "Sie muessen 0.85 Euro bezahlen (Standdartformat)" << endl;

} else
        if ((laenge >= 10 & laenge <= 23.5)&&(breite >= 7 & breite <= 12.5)&&(hoehe <=21)&&(gewicht <= 50)) {
            cout << "Sie muessen 1 Euro bezahlen (Kompaktform)" << endl;

} else
        if ((laenge >= 10 & laenge <= 35.3)&&(breite >= 7 & breite <= 25)&&(hoehe <= 2)&&(gewicht <=500)) {
            cout << "Sie muessen 1.6 Euro bezahlen (Großform)" << endl;

} else
        if ((laenge >= 10 & laenge <= 35.3)&&(breite >= 7 & breite <= 25)&&(hoehe <= 5)&&(gewicht <= 1000)) {
            cout << "Sie muessen 2.75 Euro bezahlen (Maxiform)" << endl;

} else
            if (( laenge >= 35.4 | laenge <=9.99)||(breite >= 25.01 | breite <= 6.99)||(hoehe >= 5.1)||(gewicht >= 1000.01)) {
            cout << "Sie koennen den Brief nicht mit normalem Porto verschicken" << endl;
}







    return 0;
}
