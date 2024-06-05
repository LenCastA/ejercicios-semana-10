#include <iostream>
using namespace std;

int main()
{
    string name;
    float grades = 0;
    char genero;
    int nMujeresA = 0, nHombresA = 0, nMujeresD = 0, nHombresD = 0;

    for (int i = 1; i < 8; i++){
        cout << "\tPersona n° " << i << endl;
        cout << "Ingrese el nombre del estudiante: "; cin >> name;
        cout << "Ingrese el género del estudiante (M/F): "; cin >> genero;
        cout << "Ingrese la nota del estudiante: "; cin >> grades;
        
        if (genero == 'M' && grades >= 10){
            nHombresA++;
        } else if (genero == 'F' && grades >= 10){
            nMujeresA++;
        } else if (genero == 'M' && grades < 10){
            nHombresD++;
        } else if (genero == 'F' && grades < 10){
            nMujeresD++;
        }
    }

    if (nHombresA > nMujeresA){
        cout << "Los ganadores fueron los hombres" << endl;
    } else if (nHombresA < nMujeresA){
        cout << "Los ganadoras fueron las mujeres" << endl;
    } else {
        cout << "Hay un empate" << endl;
    }
    return 0;
}