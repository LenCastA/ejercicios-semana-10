#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float cateto1, cateto2, hipotenusa;
    cout << "Ingrese el valor del cateto 1 en metros: ";
    cin >> cateto1;
    cout << "Ingrese el valor del cateto 2 en metros: ";
    cin >> cateto2;
    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));
    
    if ( cateto1 > 0 && cateto2 > 0){
        cout << "La hipotenusa del triángulo rectángulo es: " << hipotenusa << " metros" << endl;
    } else {
        cout << "Los catetos no son admisibles" << endl;
    }
    return 0;
}