#include <iostream>
#include <cmath>
using namespace std;

class PuntoUnidimensional
{
protected:
    double x;

public:
    PuntoUnidimensional(double x = 0) : x(x) {}
    virtual ~PuntoUnidimensional() {}

    double getX() const { return x; }
    void setX(double valor) { x = valor; }

    virtual double distanciaOrigen() const
    {
        return fabs(x);
    }

    virtual void mostrar() const
    {
        cout << "Punto 1D (" << x << ")";
    }
};

class PuntoBidimensional : public PuntoUnidimensional
{
protected:
    double y;

public:
    PuntoBidimensional(double x = 0, double y = 0) : PuntoUnidimensional(x), y(y) {}

    double getY() const { return y; }
    void setY(double valor) { y = valor; }

    double distanciaOrigen() const override
    {
        return sqrt(x * x + y * y);
    }

    void mostrar() const override
    {
        cout << "Punto 2D (" << x << ", " << y << ")";
    }
};

class PuntoTridimensional : public PuntoBidimensional
{
protected:
    double z;

public:
    PuntoTridimensional(double x = 0, double y = 0, double z = 0) : PuntoBidimensional(x, y), z(z) {}

    double getZ() const { return z; }
    void setZ(double valor) { z = valor; }

    double distanciaOrigen() const override
    {
        return sqrt(x * x + y * y + z * z);
    }

    void mostrar() const override
    {
        cout << "Punto 3D (" << x << ", " << y << ", " << z << ")";
    }
};

int main()
{
    double x, y, z;

    cout << "Coordenada del punto 1D (x): ";
    cin >> x;
    PuntoUnidimensional p1(x);

    cout << "Coordenadas del punto 2D (x y): ";
    cin >> x >> y;
    PuntoBidimensional p2(x, y);

    cout << "Coordenadas del punto 3D (x y z): ";
    cin >> x >> y >> z;
    PuntoTridimensional p3(x, y, z);

    PuntoUnidimensional* puntos[3] = { &p1, &p2, &p3 };

    cout << endl << "Puntos registrados:" << endl;
    for (int i = 0; i < 3; i++)
    {
        puntos[i]->mostrar();
        cout << "  ->  distancia al origen: " << puntos[i]->distanciaOrigen() << endl;
    }

    return 0;
}