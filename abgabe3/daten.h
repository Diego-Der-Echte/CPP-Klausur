#ifndef DATEN_H
#define DATEN_H

#include<fstream>
#include <iostream>

class Daten {
public:
    void setZahl1(double z);
    void setZahl2(double z);
    double getZahl1();
    double getZahl2();

    bool creatfile();
    void writefile(std::string newdatei);
    void close();
    void addtofile(std::string ergebnis);

private:
    double zahl1;
    double zahl2;
    std::ofstream daten;
};

#endif
