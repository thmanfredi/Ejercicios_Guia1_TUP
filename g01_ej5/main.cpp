#include <iostream>
/*
Un comercio vende tres marcas de alfajores distintas A, B y C. Hacer un
programa para ingresar por teclado la cantidad de alfajores vendidos de cada
una de las tres marcas y luego se informe el porcentaje de ventas para cada
una de ellas
*/


using namespace std;

int main()
{
    int aguila, guaymallen, oreo, cantTotal;
    float porcentajeAguila, porcentajeGuaymallen, porcentajeOreo;

    cout << "Ingrese la cantidad de alfajores aguila vendidas: " << endl;
    cin >> aguila;

    cout << "Ingrese la cantidad de alfajores guaymallen vendidas: " << endl;
    cin >> guaymallen;

    cout << "Ingrese la cantidad de alfajores oreo vendidas: " << endl;
    cin >> oreo;

    cantTotal = aguila + guaymallen + oreo;

    porcentajeAguila = (float)aguila * 100 / cantTotal;
    porcentajeGuaymallen = (float)guaymallen * 100 / cantTotal;
    porcentajeOreo = (float)oreo * 100 / cantTotal;

    cout << "El porcentaje vendido de alfajores aguila es de: " << porcentajeAguila << "%" << endl;

    cout << "El porcentaje vendido de alfajores guaymallen es de: " << porcentajeGuaymallen << "%" << endl;

    cout << "El porcentaje vendido de alfajores oreo es de: " << porcentajeOreo << "%" << endl;


    return 0;
}
