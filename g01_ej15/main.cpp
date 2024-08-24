#include <iostream>

/*
La amplitud térmica es la diferencia entre la temperatura máxima y la
temperatura mínima en una zona y tiempo determinado. Dada la temperatura
máxima y la temperatura mínima de San Fernando de ayer, calcular y mostrar la
amplitud térmica.
NOTA: El usuario ingresará como temperatura máxima un valor mayor o igual al
de la temperatura mínima.
*/

using namespace std;

int main()
{

    int tempMax, tempMin, amplitudTermica;

    cout<<"Ingrese la temperatura maxima: ";
    cin>>tempMax;

    cout<<"Ingrese la temperatura minima: ";
    cin>>tempMin;

    amplitudTermica = tempMax - tempMin;

    cout<<"La amplitud termica de acuerdo a la temperatura maxima " <<tempMax<<" y minima " <<tempMin<<" es: "<<amplitudTermica;



    return 0;
}
