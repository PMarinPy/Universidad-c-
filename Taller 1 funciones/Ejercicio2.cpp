/*
Elaborado por Juan Pablo Marin M
Entregado a CAOS
Fecha de elaboraci�n: 08/09/24
Versi�n del IDE: 5.1 Dev-cpp
*/
/*
Descripci�n:
Lea dos n�meros y diga si el primero es m�ltiplo del segundo.
*/

#include <iostream>
using namespace std;

void verificarMultiplo(int num1, int num2) {
    if(num1 % num2 == 0)
        cout << "El numero uno es un multiplo del segundo";
    else
        cout << "El numero uno NO es un multiplo del segundo";
}

int main() {
    int num1, num2;
    cout << "Digite el numero 1: ";
    cin >> num1;
    cout << "Digite el numero 2: ";
    cin >> num2;
    verificarMultiplo(num1, num2);
    return 0;
}

