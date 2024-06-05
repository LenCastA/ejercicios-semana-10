#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float arista, altura, areaBase = 0, areaLateral = 0, areaTotal = 0, volumen = 0;
    cout << "Se tiene un prisma regular de base hexagonal.\n";
    cout << "Ingrese la arista de la base en metros: ";
    cin >> arista;
    cout << "Ingrese la altura de la base en metros: ";
    cin >> altura;
    areaLateral = 6 * arista * altura;
    areaBase = (sqrt(3) * pow(arista, 2)) / 4 * 6;
    areaTotal = (6 * arista * altura) + (2 * areaBase);
    volumen = areaBase * altura;

    cout << "El área lateral del prisma es: " << areaLateral << " metros cuadrados" << endl;
    cout << "El área total del prisma es: " << areaTotal << " metros cuadrados" << endl;
    cout << "El volumen del prisma es: " << volumen << " metros cúbicos" << endl;

    return 0;
}