#include <iostream>
#include <string>
using namespace std;

int main()
{
    string nombreCliente;
    char tipoProducto;
    int cantidadProducto;
    float pagoInicial = 0, pagoFinal = 0, descuento = 0, totalDescuento = 0;

    cout << "Ingrese el nombre del cliente: "; cin >> nombreCliente;
    cout << "Ingrese el tipo de producto (A, B, C): "; cin >> tipoProducto;
    cout << "Ingrese la cantidad de productos: "; cin >> cantidadProducto;

    if (tipoProducto == 'A'){
        pagoInicial = cantidadProducto * 2.5;
        if ( cantidadProducto > 0 && cantidadProducto <= 30){
            descuento = 0.07;
            totalDescuento = pagoInicial * descuento;
            pagoFinal = pagoInicial - totalDescuento;
        } else if (cantidadProducto > 30){
            descuento = 0.15;
            totalDescuento = pagoInicial * descuento;
            pagoFinal = pagoInicial - totalDescuento;
        } else {
            cout << "Cantidad de productos inválida" << endl;
            return 1;
        }
    } else if (tipoProducto == 'B'){
        pagoInicial = cantidadProducto * 4.7;
        if (cantidadProducto < 20){
            descuento = 0.05;
            totalDescuento = pagoInicial * descuento;
            pagoFinal = pagoInicial - totalDescuento;
        } else if (cantidadProducto >= 20 && cantidadProducto <= 100){
            descuento = 0.25;
            totalDescuento = pagoInicial * descuento;
            pagoFinal = pagoInicial - totalDescuento;
        } else if (cantidadProducto > 100){
            descuento = 0.35;
            totalDescuento = pagoInicial * descuento;
            pagoFinal = pagoInicial - totalDescuento;
        } else {
            cout << "Cantidad de productos inválida" << endl;
            return 1;
        }
    } else if (tipoProducto == 'C'){
        pagoInicial = cantidadProducto * 16.4;
        if (cantidadProducto < 0){
            cout << "Cantidad de productos inválida" << endl;
            return 1;
        } else {
            descuento = 0.02;
            totalDescuento = pagoInicial * descuento;
            pagoFinal = pagoInicial - totalDescuento;
            
        }
    } else {
        cout << "Tipo de producto inválido" << endl;
        return 1;
    }

    cout << "Cliente: " << nombreCliente << endl;
    cout << "Monto facturado: " << pagoInicial << endl;
    cout << "Descuento: " << totalDescuento << endl;
    cout << "Monto a pagar: " << pagoFinal << endl;
    
    return 0;
}