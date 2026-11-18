#include <iostream>
using namespace std;

int main() {

    int cantidad;
    double precio;
    double total = 0; // aqui no se inicializaba la variable y podia quedar con un valor de otra variable basura
    const double IVA = 0.16;

    cout << "Ingrese la cantidad de productos: ";
    cin >> cantidad; // aqui agregue una validacion ya que no habia nada que impidiera que el usuario ingresara un valor negativo o cero
    while (cantidad <= 0) {
    cout << "Cantidad invalida. Ingrese un valor positivo: ";
    cin >> cantidad; // mismo caso aqui 
    while (precio <= 0) {
    cout << "Precio invalido. Ingrese un valor positivo: ";
    cin >> precio;
}
}
    cout << "Ingrese el precio del producto: ";
    cin >> precio; 

    for (int i = 0; i < cantidad; i++) { // el bucle se ejecutaba más de lo necesario, debeía ser i < cantidad para que se ejecute exactamente cantidad veces
        total = precio * cantidad; 
    }

    double totalConIVA = total + (total * IVA); // aqui se sumaba el IVA al total de la compra en lugar de multiplicarlo por el total

    if (totalConIVA > 1000) { // aqui se mostraba el total sin IVA cuando lo que siempre se muestra al final es el total con IVA
        cout << "Compra mayor a $1000" << endl;
    }
    else {
        cout << "Compra menor o igual a $1000" << endl;
    }

    cout << "Total de la compra: $" << totalConIVA << endl;

    return 0;
}