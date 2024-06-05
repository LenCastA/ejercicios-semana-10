#include <iostream>
#include <string>
using namespace std;

int main()
{
    string course;
    float rubroA, rubroB, rubroC, promedio;
    int pesoA = 3, pesoB = 3, pesoC = 4;
    cout << "Introduzca el nombre del curso: "; cin >> course;
    cout << "Introduzca la nota del rubro A (promedio de calificaciones escritas): "; cin >> rubroA;
    cout << "Introduzca la nota del rubro B (promedio de trabajos calificados): "; cin >> rubroB;
    cout << "Introduzca la nota del rubro C (promedio de examen parcial y final): "; cin >> rubroC;
    
    promedio = (rubroA * pesoA + rubroB * pesoB + rubroC * pesoC) / (pesoA + pesoB + pesoC);

    cout << "El promedio final del curso " << course << " es: " << promedio << endl;
    
    return 0;
}