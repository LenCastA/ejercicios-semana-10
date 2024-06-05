#include <iostream>
using namespace std;

int main()
{
    float salario = 0, horas = 0;

    cout << "Introduzca las horas trabajadas: "; cin >> horas;
    
    if (horas <= 40)
    {
        salario = horas * 50;
    }
    else if (horas > 40)
    {
        salario = 40 * 50 + (horas - 40) * 70;
    }

    cout << "El salario es: " << salario << endl;
    return 0;
}