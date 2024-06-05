#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num = 0;
    string numStr, numInv;

    while (numStr.length() != 7) {
        cout << "Ingrese un número entero de 7 dígitos: "; cin >> num;
        numStr = to_string(num);
    }

    numStr = to_string(num);

    for (int i = numStr.length() - 1; i >= 0; i--){
        numInv += numStr[i];
    }

    cout << "El número invertido es: " << numInv << endl;
    
    return 0;
}