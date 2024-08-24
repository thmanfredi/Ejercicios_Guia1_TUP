#include <iostream>

/*
Hacer un programa para ingresar por teclado la cantidad de horas trabajadas
por un operario y el valor que se le paga por hora trabajada y listar por pantalla
el sueldo que le corresponda.*/

using namespace std;

int main()
{
    float horasTrabajadas, valorHora, sueldo;

    cout << "Ingrese la cantidad de horas trabajadas: ";
    cin >> horasTrabajadas;
    cout << "Ingrese el valor se le paga por hora trabajada: ";
    cin >> valorHora;

    sueldo = horasTrabajadas*valorHora;

    cout << "El sueldo a cobrar de acuerdo a: " << horasTrabajadas << " horas," << " a un valor de: " << valorHora << " por hora trabajada, es de: " << sueldo << endl;



    return 0;
}
