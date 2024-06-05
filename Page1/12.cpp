#include <iostream>
using namespace std;

int main()
{
    float area, pagoTotal = 0, pagoInicial = 0, pagoMensual = 0, interes = 0.1;

    cout << "Introduzca el área del terreno: "; cin >> area;
    
    pagoTotal = area * 100;

    cout << "El pago total es: " << pagoTotal << endl;
    cout << "El pago inicial es: "; cin >> pagoInicial;

    pagoTotal -= pagoInicial;
    pagoTotal += pagoTotal * interes;
    pagoMensual = pagoTotal / 12;

    cout << "El pago mensual es: " << pagoMensual << endl;
    return 0;
}