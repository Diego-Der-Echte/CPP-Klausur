#include "daten.h"
#include <fstream>
#include <iostream>

using namespace std;

void Daten::setZahl1(double z) {
    zahl1 = z;
}

void Daten::setZahl2(double z) {
    zahl2 = z;
}

double Daten::getZahl1() {
    return zahl1;
}

double Daten::getZahl2() {
    return zahl2;
}


bool Daten::creatfile(){
    daten.open("datei.txt",ios::app);
    if(!daten.is_open()){
    cout <<"Fehler" << endl;
        return false;
    }
    return true;
}
void Daten::writefile(std::string newdatei){
    daten <<newdatei<< "\n";

}
void Daten::close(){
    daten.close();
}

void Daten::addtofile(std::string ergebnis){
    if(!creatfile()){
        cout << "Fehler";
        return;
    }
    writefile(ergebnis);
    close();
}
