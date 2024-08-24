#include <iostream>

/*
Una concesionaria de autos paga a los vendedores un sueldo fijo de $5000 más
$700 de premio por cada auto vendido. Hacer un programa que permita
ingresar por teclado la cantidad de autos vendidos por un vendedor y luego
informar por pantalla el sueldo total a pagar.
*/

using namespace std;

int main()
{
    const float SUELDOFIJO = 5000;
    const float PREMIO = 700;
    float sueldoTotal;
    int vtaAutos;

    cout << "Ingrese la cantidad de autos vendidos: ";
    cin >> vtaAutos;


    sueldoTotal = SUELDOFIJO + vtaAutos * PREMIO;

    cout << "Su sueldo de acuerdo a " << vtaAutos << " autos vendidos" << " con un premio de 700 por auto vendido" << " es de:$" << sueldoTotal << endl;


    return 0;
}
