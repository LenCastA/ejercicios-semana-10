#include <iostream>
using namespace std;

int main() {
    int cantidadDeKm;
    double costoAlquiler = 30.0;
    double costoAdicional = 0.0;
    double IGV = 0.18;

    cout << "Ingrese la cantidad de kilometros recorridos: ";
    cin >> cantidadDeKm;

    if (cantidadDeKm > 300 && cantidadDeKm <= 1000) {
        costoAdicional = (cantidadDeKm - 300) * 0.15;
    } else if (cantidadDeKm > 1000) {
        costoAdicional = 700 * 0.15 + (cantidadDeKm - 1000) * 0.10;
    }

    costoAlquiler += costoAdicional;
    costoAlquiler += costoAlquiler * IGV;

    cout << "El costo del alquiler es de $" << costoAlquiler << endl;

    return 0;
}