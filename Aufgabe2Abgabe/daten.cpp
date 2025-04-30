#include "daten.h"
#include <fstream>
#include <iostream>
using namespace std;

void Daten::speichereErgebnis(const string& result) {
    ofstream datei(dateiname, ios::app);
    if (datei.is_open()) {
        datei << result << endl;
        datei.close();
    } else {
        cerr << "Datei konnte nicht geöffnet werden!" << endl;
    }
}

vector<string> Daten::ladeAlleErgebnisse() const {
    ifstream datei(dateiname);
    vector<string> ergebnisse;
    string zeile;

    if (datei.is_open()) {
        while (getline(datei, zeile)) {
            ergebnisse.push_back(zeile);
        }
        datei.close();
    }

    return ergebnisse;
}
