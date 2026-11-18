#include <iostream>
#include <cmath>
#include "Complex.h"
using namespace std;

double calcularDelta(double a, double b, double c) {
    return b * b - 4 * a * c;
}

int main() {
    double a, b, c;

    cout << "=== Raices de f(x) = ax^2 + bx + c ===" << endl;

    do {
        cout << "Ingresa a (a != 0): ";
        cin >> a;
        if (a == 0)
            cout << "Error: 'a' no puede ser 0, intenta de nuevo." << endl;
    } while (a == 0);

    cout << "Ingresa b: ";
    cin >> b;
    cout << "Ingresa c: ";
    cin >> c;

    double delta = calcularDelta(a, b, c);
    cout << "\nDelta = b^2 - 4ac = " << delta << endl;

    Complex x1, x2;

    if (delta >= 0) {
        cout << "Delta >= 0: las raices son reales." << endl;
        double raiz = sqrt(delta);
        x1.setComplex((-b - raiz) / (2 * a), 0.0);
        x2.setComplex((-b + raiz) / (2 * a), 0.0);
    } else {
        cout << "Delta < 0: las raices son complejas." << endl;
        double parteReal = -b / (2 * a);
        double parteImag = sqrt(-delta) / (2 * a);
        x1 = Complex(parteReal, -parteImag);
        x2 = Complex(parteReal, parteImag);
    }

    cout << "\nx1 = ";
    x1.imprimir();
    cout << "\nx2 = ";
    x2.imprimir();

    Complex suma = x1.sumar(x2);
    Complex resta = x1.restar(x2);

    cout << "\n\nx1 + x2 = ";
    suma.imprimir();
    cout << "\nx1 - x2 = ";
    resta.imprimir();
    cout << endl;

    return 0;
}
