#include <iostream>

/*
La amplitud t�rmica es la diferencia entre la temperatura m�xima y la
temperatura m�nima en una zona y tiempo determinado. Dada la temperatura
m�xima y la temperatura m�nima de San Fernando de ayer, calcular y mostrar la
amplitud t�rmica.
NOTA: El usuario ingresar� como temperatura m�xima un valor mayor o igual al
de la temperatura m�nima.
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
