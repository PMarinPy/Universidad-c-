/*
Descripci�n del programa
Elaborado por Juan Pablo Marin M
Entregado a CAOS
Fecha de elaboraci�n: 08/09/24
Versi�n del IDE: 5.1 Dev-cpp
*/
/*
Descripci�n:
Leer un n�mero entero X y:
a) Decir si es positivo o negativo.
b) Decir si es par o impar.
c) Leer otro n�mero Y y decir si X es m�ltiplo de Y.
*/

#include <iostream>
using namespace std;

void analizarNumero(int num1, int num2) {
    if(num1 != 0) {
        if(num1 % 2 == 0) {
            if(num1 > 0)
                cout << "El numero uno es par positivo";
            else
                cout << "El numero uno es par negativo";
        } else {
            if(num1 > 0)
                cout << "El numero uno es impar positivo";
            else
                cout << "El numero uno es impar negativo";
        }
        if(num1 % num2 == 0)
            cout << " y el numero uno es un multiplo del segundo";
        else
            cout << " y el numero uno NO es un multiplo del segundo";
    }
}

int main() {
    int num1, num2;
    cout << "Digite el numero 1: ";
    cin >> num1;
    cout << "Digite el numero 2: ";
    cin >> num2;
    analizarNumero(num1, num2);
    return 0;
}

