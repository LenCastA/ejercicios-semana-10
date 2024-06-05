#include <iostream>
using namespace std;

int main()
{
    float radio, pi = 3.1416;
    cout << "Ingrese el radio del círculo en metros: " << endl;
    cin >> radio;
    cout << "La longitud de la circunferencia es: " << 2 * pi * radio << " metros" << endl;
    cout << "El área del círculo es: " << pi * radio * radio << " metros cuadrados" << endl;
    return 0;
}