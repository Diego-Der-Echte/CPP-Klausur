#ifndef RECHNER_H
#define RECHNER_H


class rechner
{
public:
    rechner();
    void setZahl1 (int newZahl1);
    int getZahl1 ();

    void setZahl2 (int newZahl2);
    int getZahl2 ();

    void setRechenzeichen (int newRechenzeichen);
    int getRechenzeichen();

    void setSumme (int newSumme);
    int getSumme ();

    void macheRechnung();

private:
    int zahl1;
    int zahl2;
    int rechenzeichen;
    double summe;
};

#endif // RECHNER_H
