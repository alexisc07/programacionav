#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Dado {
public:
    Dado() {
        srand(static_cast<unsigned int>(time(0)));
    }

    int Tirar() {
        return rand() % 6 + 1;
    }
};

class Jugador {
private:
    int saldoBanco;
    int montoApuesta;

public:
    Jugador() {
        saldoBanco = 1000;
        montoApuesta = 0;
    }

    int Apostar() {
        cout << "Saldo actual: $" << saldoBanco << endl;
        cout << "Monto a apostar: $";
        cin >> montoApuesta;
        while (montoApuesta <= 0 || montoApuesta > saldoBanco) {
            cout << "Apuesta invalida. Debe ser mayor a 0 y menor o igual a $"
                 << saldoBanco << ": $";
            cin >> montoApuesta;
        }
        return montoApuesta;
    }

    int NumeroApuesta() {
        int numero;
        cout << "Numero al que apuestas (2 a 12): ";
        cin >> numero;
        while (numero < 2 || numero > 12) {
            cout << "Numero invalido. Elige un valor entre 2 y 12: ";
            cin >> numero;
        }
        return numero;
    }

    void Paga() {
        saldoBanco -= montoApuesta;
    }

    void RecibePago() {
        saldoBanco += montoApuesta;
    }

    int GetSaldoBanco() {
        return saldoBanco;
    }
};

class Craps {
private:
    Dado Dado1;
    Dado Dado2;
    Jugador JugadorApostador;

public:
    Craps() {
        cout << "===== JUEGO CRAPS =====" << endl;
        cout << "Saldo inicial: $" << JugadorApostador.GetSaldoBanco() << endl;
    }

    void Jugar() {
        int ronda = 1;
        char continuar = 's';

        while (JugadorApostador.GetSaldoBanco() > 0 && (continuar == 's' || continuar == 'S')) {
            cout << endl << "--- Ronda " << ronda << " ---" << endl;
            int monto = JugadorApostador.Apostar();
            int numeroApuesta = JugadorApostador.NumeroApuesta();

            int tiro1 = Dado1.Tirar();
            int tiro2 = Dado2.Tirar();
            int valorTiro = tiro1 + tiro2;

            cout << "Dado 1: " << tiro1 << "  Dado 2: " << tiro2
                 << "  Total: " << valorTiro << endl;

            if (valorTiro == numeroApuesta) {
                JugadorApostador.RecibePago();
                cout << "Ganaste! Recibes $" << monto << endl;
            } else {
                JugadorApostador.Paga();
                cout << "Perdiste. Pagas $" << monto << endl;
            }

            cout << "Saldo: $" << JugadorApostador.GetSaldoBanco() << endl;
            ronda++;

            if (JugadorApostador.GetSaldoBanco() > 0) {
                cout << "Seguir jugando? (si/no): ";
                cin >> continuar;
            }
        }

        cout << endl << "===== FIN DEL JUEGO =====" << endl;
        cout << "Saldo final: $" << JugadorApostador.GetSaldoBanco() << endl;
    }
};

int main() {
    cout << "===== PRUEBA DE LA CLASE DADO =====" << endl;
    Dado dadoPrueba;
    for (int i = 1; i <= 5; i++) {
        cout << "Tiro " << i << ": " << dadoPrueba.Tirar() << endl;
    }
    cout << endl;

    Craps juego;
    juego.Jugar();

    return 0;
}