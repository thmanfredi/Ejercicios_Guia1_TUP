#include <iostream>
#include <iomanip>
/*
Hacer un programa para ingresar por teclado la cantidad de asientos totales en
un avión y la cantidad de pasajes ocupados y luego calcular e informar el
porcentaje de ocupación y el porcentaje de no ocupación del mismo.
*/

using namespace std;

int main()
{

    int asientos, pasajesOcupados;
    float porcentajeOcu, porcentajeNoOcu;

    cout << "Ingrese la cantidad de asientos del avion: ";
    cin >> asientos;
    cout << "Ingrese la cantidad de pasajes ocupados: ";
    cin >> pasajesOcupados;

    porcentajeOcu = static_cast<int>((static_cast<float>(pasajesOcupados) / asientos) * 100);
    porcentajeNoOcu = 100 - porcentajeOcu;
    cout << fixed << setprecision(0);

    cout << "Porcentaje de asientos ocupados: " << porcentajeOcu << "%" << endl;
    cout << "Porcentaje de asientos no ocupados: " << porcentajeNoOcu << "%" << endl;



    return 0;
}
