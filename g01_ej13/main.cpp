#include <iostream>

/*
Hacer un programa para un cajero automático para ingresar un importe a retirar
y convertir el mismo en la cantidad de billetes de $1.000, $500, $200 y $100 a
entregar.
Recordatorio. Considerar en todos los casos que el importe a retirar es en todos
los casos múltiplo de $100 ya que el cajero no cuenta con billetes de $50, $20 o
$10.

*/

using namespace std;

int main()
{
    int importe, c_1000, c_500, c_200, c_100;


    cout<<"Ingrese el importe a retirar: "<<endl;
    cin>>importe;


    c_1000 = importe / 1000;
    importe = importe % 1000;

    c_500 = importe / 500;
    importe = importe % 500;

    c_200 = importe / 200;
    importe = importe % 200;

    c_100 = importe / 100;



    cout<<"Retire la siguiente cantidad de billetes:"<<endl;
    cout<<"------------------------------------"<<endl;
    cout<<c_1000<<" billetes de 1000"<<endl;
    cout<<c_500<<" billetes de 500"<<endl;
    cout<<c_200<<" billetes de 200"<<endl;
    cout<<c_100<<" billetes de 100"<<endl;





    return 0;
}
