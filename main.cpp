#include <iostream>
using namespace std;

int main() {
    const int CANTIDAD = 5;
    int contador = 0;
    double suma = 0.0;
    double numero = 0.0;

    cout << "Suma de " << CANTIDAD << " numeros\n";

    while (contador < CANTIDAD) {
        cout << "Ingresa un numero: ";
        cin >> numero;

        if (numero >= 0) {
            suma += numero;
            contador++;
        } else {
            cout << "Numero no valido\n";
        }
    }

    cout << "La suma es: " << suma << endl;

    return 0;
}