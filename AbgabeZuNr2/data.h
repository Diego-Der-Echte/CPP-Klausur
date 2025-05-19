#ifndef DATA_H
#define DATA_H
#include <iostream>
#include <fstream>

 /*#include <QString>
#include <QStringList>*/

using namespace std;

class Data
{
public:
    Data();

    void setZahl1 (int newZahl1);
    int getZahl1 ();

    void setZahl2 (int newZahl2);
    int getZahl2 ();

    void setRechenzeichen (int newRechenzeichen);
    int getRechenzeichen();

    void setSumme (int newSumme);
    int getSumme ();


    bool fileOpen();
    void fileClose();
    void fileWriten(string newDatei);
    void fileAdd(string ergebnis);

private:
    int zahl1;
    int zahl2;
    int rechenzeichen;
    int summe;
    ofstream daten;
};

#endif // DATA_H
