#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x1, x2, y1, y2;
    float dist, midx, midy;
    cout << "Introduzca las coordenadas del primer punto (x1, y1): "; cin >> x1 >> y1;
    cout << "Introduzca las coordenadas del segundo punto (x2, y2): "; cin >> x2 >> y2;
    
    dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    cout << "La distancia entre los dos puntos es: " << dist << endl;

    midx = (x1 + x2) / 2;
    midy = (y1 + y2) / 2;

    cout << "Las coordenadas del punto medio son:" << midx << ", " << midy << endl;

    return 0; 
}