#include <iostream>

/*
Una granja vende la caja de 12 unidades a $1000 y cada huevo suelto a $120.
Hacer un programa para ingresar la cantidad de huevos que compra un cliente y
mostrar por pantalla el importe total a pagar.
Recordatorio. Por cada 12 huevos se debe calcular una caja y el excedente se
calcula como suelto
*/


using namespace std;

int main()
{

    int cantHuevos, importeTotal, cajaHuevos, sueltos;

    cout<<"Ingrese la cantidad de huevos que compro el cliente: " <<endl;
    cin>>cantHuevos;


    cajaHuevos = cantHuevos / 12;
    sueltos = cantHuevos % 12;
    importeTotal = (cajaHuevos * 1000) + (sueltos*120);



    cout<<"El importe a pagar de acuerdo a: " << cajaHuevos << " caja de huevos "<< "y " << sueltos<<" huevos sueltos"<< " es de: " << importeTotal;


    return 0;
}
