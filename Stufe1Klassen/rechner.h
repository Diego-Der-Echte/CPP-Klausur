#ifndef RECHNER_H
#define RECHNER_H


class Rechner
{
public:
    Rechner();
    int rechnen(int zahl1, int zahl2, int rechenzeichen);

private:
    int zahl1;
    int zahl2;
    int rechenzeichen;
    double summe;


};

#endif // RECHNER_H
