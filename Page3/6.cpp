#include <iostream>
using namespace std;

int main()
{
    int nPersonas = 0, edad = 0, nMayores = 0, nMenores = 0;
    float sumaMayores = 0, sumaMenores = 0, promedioMayores = 0, promedioMenores = 0;
    
    while (nPersonas <= 0) {
        cout << "Ingrese el número de personas: "; cin >> nPersonas;
    }

    for (int i = 0; i < nPersonas; i++) {
        cout << "Introduzca la edad de la persona " << i + 1 << " :"; cin >> edad;

        if (edad >= 18) {
            sumaMayores += edad;
            nMayores += 1;
        } else if (edad < 18 && edad > 0){
            sumaMenores += edad;
            nMenores += 1;
        } else {
            cout << "Edad inválida" << endl;
            i --;
        }
    }

    promedioMayores = sumaMayores / nMayores;
    promedioMenores = sumaMenores / nMenores;

    if (sumaMayores == 0) {
        promedioMayores = 0;
    }

    if (sumaMenores == 0) {
        promedioMenores = 0;
    }

    cout << "El promedio de edad de las personas mayores de edad es: " << promedioMayores << endl;
    cout << "El promedio de edad de las personas menores de edad es: " << promedioMenores << endl;

    return 0;
}