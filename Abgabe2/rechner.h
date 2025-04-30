#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator {
public:
    double add(double a, double b);
    double sub(double a, double b);
    double mul(double a, double b);
    double div(double a, double b);

    double power(double basis, double exponent);
    double wurzel(double wert);

    int andOp(int a, int b);
    int orOp(int a, int b);
    int nandOp(int a, int b);
};

#endif // CALCULATOR_H
