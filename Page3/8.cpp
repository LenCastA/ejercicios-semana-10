#include <iostream>
using namespace std;

int main()
{
    int n = 1, suma = 0;

    while (n <= 1){
        cout << "Ingrese un numero: "; cin >> n;
    }

    for (int i = 2; i < n; i++){
        if (i % 2 != 0){
            suma += i;
        }
    }

    cout << "La suma de los numeros impares menores a " << n << " es: " << suma << endl;
    return 0;
}