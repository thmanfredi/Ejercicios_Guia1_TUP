#include <iostream>

/*
Hacer un programa para ingresar el importe de una compra y el descuento a
aplicar. Listar por pantalla, el importe sin descuento, el descuento aplicado y el
importe total a cobrar.
*/




using namespace std;

int main()
{
    int importeCompra, descuento, descuentoAplicado, total;

    cout<<"Ingrese el importe de la compra:$"<<endl;
    cin>>importeCompra;
    cout<<"Ingrese el porcentaje de descuento a aplicar:%"<<endl;
    cin>>descuento;

    descuentoAplicado = (importeCompra*descuento)/100;
    total = importeCompra - descuentoAplicado;


    cout<<"El importe sin descuento es: $"<<importeCompra<<endl;
    cout<<"El descuento aplicado es de: $"<<descuentoAplicado<<endl;
    cout<<"El importe total a pagar es: $"<<total<<endl;



    return 0;
}
