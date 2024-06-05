#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 0;

    while (n <= 0){
        cout << "Ingrese un numero: "; cin >> n;
    }

    cout << "Divisores de " << n << ": ";
    
    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            cout << i << " ";
        }
    }
    return 0;
}