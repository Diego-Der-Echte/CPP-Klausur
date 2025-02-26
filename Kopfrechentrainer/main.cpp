#include <iostream>
#include <cstdlib> // Für rand
#include <time.h>
#include <windows.h>

using namespace std;
const int arraySize = 50;

void eingabeRechenart (int &eingabeRechenzeichen) {
    cout << "Was möchten Sie berechnen? 1 = +; 2 = -; 3 = x" << endl;
                cin >> eingabeRechenzeichen;
    if (eingabeRechenzeichen >3) {
        cout << "Fehler!!" << endl;
    }
}

void rechnung (int eingabeRechenzeichen) {

    int ergebnis1;
    int ergebnisT1;

    if (eingabeRechenzeichen == 1) {
        int array[arraySize];
            srand(time(NULL));

        for (int i = 0; i < arraySize; i++) {
            array[i] = 1 + rand () % 100;
        }
        for (int i = 0; i < arraySize; i+=2){
            cout << array[i] << " + " << array[i+1] << " = " << endl;
            cin >> ergebnis1;
            ergebnisT1 = array[i] + array[i+1];
            cout << ergebnisT1 << endl;
    }
    }
        if (eingabeRechenzeichen == 2) {
            int array[arraySize];
                //srand(time(NULL));

            for (int i = 0; i < arraySize; i++) {
                array[i] = 1 + rand () % 100;
            }
            for (int i = 0; i < arraySize; i+=2){
                cout << array[i] << " - " << array[i+1] << " = " << endl;
                cin >> ergebnis1;
                ergebnisT1 = array[i] - array[i+1];
                cout << ergebnisT1 << endl;
            }
        }
        if (eingabeRechenzeichen == 3) {
            int array[arraySize];
                //srand(time(NULL));

            for (int i = 0; i < arraySize; i++) {
                array[i] = 1 + rand () % 100;
            }
            for (int i = 0; i < arraySize; i+=2){
                cout << array[i] << " x " << array[i+1] << " = " << endl;
                cin >> ergebnis1;
                ergebnisT1 = array[i] * array[i+1];
                cout << ergebnisT1 << endl;
            }
        }
    }



int main()
{
    int eingabeRechenzeichen;

    eingabeRechenart(eingabeRechenzeichen);
    rechnung(eingabeRechenzeichen);


    return 0;
}
