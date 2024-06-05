#include <iostream>
using namespace std;

int main()
{
    int num = 0, contador = 0, suma = 0;
    float promedio = 0;

    while (contador < 7) {
        cout << "Ingresa el número: "; cin >> num;
        if (num % 2 == 0) {
            contador += 1;
            suma += num;
        } else {
            cout << "El número no es par." << endl;
        }
    }

    promedio = suma / 7;

    cout << "El promedio de los números pares es: " << promedio << endl;
    return 0;
}