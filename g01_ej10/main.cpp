#include <iostream>

/*
Hacer un programa para ingresar por teclado una cantidad de horas y mostrar
por pantalla a cuantos días y horas equivalen.
*/

using namespace std;

int main()
{
    int h, dias, horas;

    cout<<"Ingrese la cantidad de horas: " <<endl;
    cin>>h;

    dias = h / 24;
    horas = h % 24;

    cout<<"La cantidad de horas ingresadas: "<< h << " equivale a:" << endl;
    cout<<dias<< " dia";
    cout<<" y ";
    cout<<horas<< " horas";


    return 0;
}
