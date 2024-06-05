#include <iostream>
using namespace std;

int main()
{
    float gradosC, gradosF;
    cout << "Introduzca los grados en Celcius: "; cin >> gradosC;

    gradosF = (gradosC * 9 / 5) + 32;

    cout << "Los grados en Fahrenheit son: " << gradosF << endl;

    return 0;
}