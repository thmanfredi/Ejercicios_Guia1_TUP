#include <iostream>

/*
Hacer un programa para que un comercio ingrese por teclado la recaudación en
pesos para cada una de las cuatro semanas del mes. El programa debe listar la
recaudación promedio por semana y el porcentaje de recaudación por semana.
*/

using namespace std;

int main()
{
    int semanaUno, semanaDos, semanaTres, semanaCuatro, promedioSemana, totalSemana;
    double p1, p2, p3, p4;

    cout << "Ingrese la recaudacion de pesos de la primer semana: " << endl;
    cin >> semanaUno;
    cout << "Ingrese la recaudacion de pesos de la segunda semana: " << endl;
    cin >> semanaDos;
    cout << "Ingrese la recaudacion de pesos de la tercer semana: " << endl;
    cin >> semanaTres;
    cout << "Ingrese la recaudacion de pesos de la cuarta semana: " << endl;
    cin >> semanaCuatro;

    totalSemana = semanaUno+semanaDos+semanaTres+semanaCuatro;
    promedioSemana = totalSemana / 4;
    p1 = semanaUno * 100  / totalSemana;
    p2 = semanaDos * 100 / totalSemana;
    p3 = semanaTres * 100 / totalSemana;
    p4 = semanaCuatro * 100 / totalSemana;

    cout << "La recaudacion promedio por semana segun el total de ventas realizadas: " << totalSemana << " es: " << promedioSemana << endl;
    cout << "El porcentaje vendido de la semana uno es:%" << p1 << endl;
    cout << "El porcentaje vendido de la semana dos es:%" << p2 << endl;
    cout << "El porcentaje vendio de la semana tres es:%" << p3 << endl;
    cout << "El porcentaje vendido de la semana cuatro es:%" << p4 << endl;

    return 0;
}
