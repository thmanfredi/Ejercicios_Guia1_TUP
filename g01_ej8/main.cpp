#include <iostream>

/*
Hacer un programa para ingresar por teclado el importe de una venta sin el
descuento y el importe de esa misma venta con el descuento aplicado y luego
informar por pantalla el porcentaje de descuento aplicada a la misma
*/

using namespace std;

int main()
{
    double vsd, vcd, p;


    cout << "Ingrese el importe sin descuento de la venta: " << endl;
    cin >> vsd;
    cout << "Ingrese el importe con descuento: " << endl;
    cin >> vcd;

    p = ((vsd-vcd)/vsd)*100;

    cout << "El importe aplicado segun los valores ingresados: " << vsd <<" y "<< vcd << " es: " << p <<"%"<< endl;


    return 0;
}
