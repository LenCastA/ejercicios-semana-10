#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num = 0, suma = 0, conver = 0;
    string nCaract;

    while (num < 1000 || num > 9999){
        cout << "Introduce un número de 4 dígitos: "; cin >> num;
    }
    
    if (num >= 1000 && num < 10000){
        nCaract = to_string(num);
        for (int i = 0; i < nCaract.length(); i++){
            conver = nCaract[i] - '0';
            suma += conver;
        }
        cout << "La suma de los dígitos es: " << suma << endl;
    } else {
        cout << "El número no es válido." << endl;
    }
    return 0;
}