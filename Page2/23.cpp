#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    float salary = 0, years = 0, newSalary = 0, bono1 = 0, bono2 = 0;
    int nHijos = 0 , n5years = 0;

    cout << "Introduzca su nombre: "; cin >> name;
    cout << "Introduzca su salario: "; cin >> salary;
    cout << "Introduzca el número de hijos: "; cin >> nHijos;
    cout << "Introduzca los años de antigüedad: "; cin >> years;

    cout << "Nombre: " << name << endl;
    cout << "Salario: " << salary << endl;

    if (nHijos > 0 && nHijos < 5)
    {
        bono1 = 0.03 * nHijos * salary;
    } else if (nHijos >= 5){
        bono1 = 0.03 * 4 * salary;
    } else if (nHijos == 0){
        bono1 = 0;
    } else {
        cout << "Número de hijos inválido" << endl;
    }

    n5years = years / 5;
    bono2 = 0.07 * n5years * salary;
    newSalary = salary + bono1 + bono2;

    cout << "El nuevo salario es: " << newSalary << endl;

    return 0;
}