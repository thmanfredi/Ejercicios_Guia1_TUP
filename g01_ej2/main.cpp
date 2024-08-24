#include <iostream>
/*
 Hacer un programa que solicite por teclado que se ingresen dos números y
luego guardarlos en dos variables distintas. A continuación se deben
intercambiar mutuamente los valores en ambas variables y mostrarlos por
pantalla
*/

using namespace std;

int main()
{
    int n1, n2, aux;

    cout << "Ingrese un numero: ";
    cin >> n1;
    cout << "Ingrese otro numero: ";
    cin >> n2;

    cout << "Antes de intercambiar valores: " << endl;
    cout << "n1 = " << n1 << endl;
    cout << "n2 = " << n2 << endl;

    aux = n1;
    n1 = n2;
    n2 = aux;

    cout << "Intercambiando valores: " << endl;
    cout << "n1 = " << n1 << endl;
    cout << "n2 = " << n2 << endl;



    return 0;
}
