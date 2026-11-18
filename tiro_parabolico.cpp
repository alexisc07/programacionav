#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const double G  = 9.81;               
const double PI = 3.14159265358979;

double gradosARadianes(double grados) {
    return grados * PI / 180.0;
}

double alturaMaxima(double v0, double theta) {
    return pow(v0 * sin(theta), 2) / (2.0 * G);
}

double alcanceMaximo(double v0, double theta) {
    return v0 * v0 * sin(2.0 * theta) / G;
}

double tiempoVuelo(double v0, double theta) {
    return 2.0 * v0 * sin(theta) / G;
}

int main() {
    double v0, anguloGrados;

    cout << "===== TIRO PARABOLICO =====" << endl;
    cout << "Ingresa la velocidad inicial (m/s): ";
    cin >> v0;
    cout << "Ingresa el angulo de tiro (grados): ";
    cin >> anguloGrados;

    if (v0 <= 0 || anguloGrados <= 0 || anguloGrados >= 90) {
        cout << "Datos no validos: v0 > 0 y 0 < angulo < 90." << endl;
        return 1;
    }

    double theta = gradosARadianes(anguloGrados);

    double H = alturaMaxima(v0, theta);
    double R = alcanceMaximo(v0, theta);
    double t = tiempoVuelo(v0, theta);

    cout << fixed << setprecision(4);
    cout << "\n----- RESULTADOS -----" << endl;
    cout << "Componente horizontal vx = " << v0 * cos(theta) << " m/s" << endl;
    cout << "Componente vertical  vy  = " << v0 * sin(theta) << " m/s" << endl;
    cout << "Altura maxima            = " << H << " m" << endl;
    cout << "Distancia horizontal max = " << R << " m" << endl;
    cout << "Tiempo de vuelo          = " << t << " s" << endl;

    return 0;
}