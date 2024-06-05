#include <iostream>
using namespace std;

int main()
{
    float velocidad;
    cout << "Introduzca la velocidad en km/h: "; cin >> velocidad;
    cout << "La velocidad en m/s es: " << velocidad * 5 / 18 << endl;

    return 0;
}