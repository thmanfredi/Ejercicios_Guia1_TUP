#include <iostream>
/*
Hacer un programa para ingresar por teclado una cantidad de minutos y
mostrar por pantalla a cuántos días, horas y minutos equivalen.
*/


using namespace std;

int main()
{
    int cantidadMinutos, dias, horas, minutos, minRestantes;

    cout<<"Ingrese la cantidad de minutos: " <<endl;
    cin>>cantidadMinutos;

    dias = cantidadMinutos / 1440;
    minRestantes = cantidadMinutos%1440;
    horas = minRestantes / 60;
    minutos = minRestantes % 60;


    cout<<"Los minutos ingresados: " << cantidadMinutos << " equivalen a:"<<endl;
    cout<<dias<< " dia, "<<horas<<" hora "<<" y "<< minutos << " minutos";






    return 0;
}
