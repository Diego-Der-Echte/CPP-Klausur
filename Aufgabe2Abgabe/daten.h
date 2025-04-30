#ifndef DATEN_H
#define DATEN_H
#include <iostream>

using namespace std;
#include <string>
#include <vector>

class Daten {
public:
    void speichereErgebnis(const string& result);
    vector<string> ladeAlleErgebnisse() const;

private:
    const string dateiname = "daten.txt";
};

#endif
