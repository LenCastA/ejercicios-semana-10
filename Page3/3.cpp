#include <iostream>
using namespace std;

int main()
{
    int num = -1, factorial = 1;

    while (num < 0){
        cout << "Introduce un número: "; cin >> num;
    }
    for (int i = 1; i <= num ; i++){
        factorial *= i;
    }
    
    cout << "El factorial de " << num << " es: " << factorial << endl;

    return 0;
}