#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const double PI = 3.14159265358979;
const double TOLERANCIA = 1e-4;   


double potencia(double base, int exponente) {
    double resultado = 1.0;
    for (int i = 1; i <= exponente; i++) {
        resultado *= base;
    }
    return resultado;
}


double factorial(int n) {
    double resultado = 1.0;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    double grados;

    cout << "===== SERIE DE TAYLOR PARA cos(x) =====" << endl;
    cout << "Ingresa el angulo x (grados): ";
    cin >> grados;

    double x = grados * PI / 180.0;   

    double cosAnterior = 0.0;
    double cosActual   = 0.0;
    double diferencia  = 1.0;
    int n = 0;

    cout << fixed << setprecision(8);
    cout << "\n" << setw(3) << "n" << setw(16) << "termino"
         << setw(18) << "cos(x) acumulado" << setw(14) << "diferencia" << endl;

    do {
        double numerador   = potencia(-1, n) * potencia(x, 2 * n);
        double denominador = factorial(2 * n);
        double termino     = numerador / denominador + 0.0;  

        cosAnterior = cosActual;
        cosActual  += termino;
        diferencia  = fabs(cosActual - cosAnterior);

        cout << setw(3) << n << setw(16) << termino
             << setw(18) << cosActual << setw(14) << diferencia << endl;

        n++;
    } while (diferencia >= TOLERANCIA);

    cout << "\nx = " << grados << " grados = " << x << " rad" << endl;
    cout << "cos(x) por serie de Taylor = " << cosActual << endl;
    cout << "cos(x) con <cmath>         = " << cos(x) << endl;
    cout << "Terminos utilizados        = " << n << endl;

    return 0;
}