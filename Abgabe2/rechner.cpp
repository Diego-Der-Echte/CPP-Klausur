#include "rechner.h"
#include <cmath>

double Calculator::add(double a, double b) { return a + b; }
double Calculator::sub(double a, double b) { return a - b; }
double Calculator::mul(double a, double b) { return a * b; }
double Calculator::div(double a, double b) { return b != 0 ? a / b : 0; }

double Calculator::power(double basis, double exponent) { return pow(basis, exponent); }
double Calculator::wurzel(double wert) { return sqrt(wert); }

int Calculator::andOp(int a, int b) { return a & b; }
int Calculator::orOp(int a, int b) { return a | b; }
int Calculator::nandOp(int a, int b) { return ~(a & b); }
