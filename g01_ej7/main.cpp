#include <iostream>

/*
Hacer un programa para ingresar por teclado el importe de una venta y el
porcentaje de descuento aplicada a la misma y luego informar por pantalla el
importe a pagar
*/

using namespace std;

int main()
{
    int iv, p, ip;

    cout<<"Ingrese el importe de la venta: ";
    cin>>iv;
    cout<<"Ingrese el procentaje de descuento a aplicar: ";
    cin>>p;

    ip = iv - (iv*p/100);

    cout<<"El importe total a pagar con un descuento del: " << p << "%" << " es: " << ip;



    return 0;
}
