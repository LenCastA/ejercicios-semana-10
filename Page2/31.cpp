#include <iostream>
using namespace std;

int main()
{
    float ingresoAnual = 0, impuesto = 0;

    cout << "Ingrese el ingreso anual: "; cin >> ingresoAnual;

    if (ingresoAnual <= 0){
        cout << "Cómo vas a recibir impuesto si ni plata tienes, mongol" << endl;
    } else if (ingresoAnual > 0 && ingresoAnual <= 20000){
        impuesto = 0.08;
        cout << "El impuesto a pagar es de: " << ingresoAnual * impuesto << endl;
    } else if ( ingresoAnual > 20000 && ingresoAnual <= 30000){
        impuesto = 0.1;
        cout << "El impuesto a pagar es de: " << 1600 + ((ingresoAnual - 20000) * impuesto) << endl;
    } else if (ingresoAnual > 30000){
        impuesto = 0.12;
        cout << "El impuesto a pagar es de: " << 2600 + ((ingresoAnual - 30000) * impuesto) << endl;
    }

    return 0;
}