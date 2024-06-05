#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int contador = 0;
    long long num = 0;

    cout << "Ingrese un numero: "; cin >> num;

    for (int i = 1; i <= sqrt(num); i++){
        if (num % i == 0 &&  i != num/i){
            contador += 2;
            cout << i << " " << num/i << endl;
        } else if (num % i == 0 && i == num/i){
            contador++;
            cout << i << " " << num/i << endl;
        }
    }
    cout << "El numero " << num << " tiene " << contador << " divisores" << endl;
    return 0;
}