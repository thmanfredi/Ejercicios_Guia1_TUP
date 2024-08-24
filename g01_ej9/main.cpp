#include <iostream>

/*
Hacer un programa para ingresar por teclado una cantidad de minutos y
mostrar por pantalla a cuantas horas y minutos equivalen.
*/

using namespace std;

int main()
{
    int cantidadMinutos, minutos;
    int horas;

    cout<<"Ingrese la cantidad de minutos"<<endl;
    cin>>cantidadMinutos;

    horas = cantidadMinutos / 60;
    minutos = cantidadMinutos % 60;

    cout<<"Los minutos ingresados: " << cantidadMinutos << " equivalen a"<<endl;
    cout<< horas << " horas";
    cout<< " y ";
    cout<< minutos << " minutos";



    return 0;
}
