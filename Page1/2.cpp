#include <iostream>
using namespace std;

int main()
{
    float radio, pi = 3.1416;
    cout << "Ingrese el radio del círculo en metros: " << endl;
    cin >> radio;
    cout << "El volumen de la esfera es: " << pi * radio * radio * radio * 4 / 3 << " metros cúbicos" << endl;
    return 0;
}