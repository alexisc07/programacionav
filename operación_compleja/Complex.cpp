#include "Complex.h"
#include <iostream>
#include <iomanip>
using namespace std;

Complex::Complex(double r, double i) {
    setComplex(r, i);
}

void Complex::setReal(double r) { real = r; }
void Complex::setImag(double i) { imag = i; }
void Complex::setComplex(double r, double i) {
    real = r;
    imag = i;
}

double Complex::getReal() const { return real; }
double Complex::getImag() const { return imag; }

void Complex::imprimir() const {
    
    double r = real + 0.0;
    double i = imag + 0.0;
    cout << fixed << setprecision(4);
    if (i < 0)
        cout << r << " - " << -i << " * i";
    else
        cout << r << " + " << i << " * i";
}

Complex Complex::sumar(const Complex& otro) const {
    return Complex(real + otro.real, imag + otro.imag);
}

Complex Complex::restar(const Complex& otro) const {
    return Complex(real - otro.real, imag - otro.imag);
}
