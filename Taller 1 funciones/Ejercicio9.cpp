/*
Elaborado por Juan Pablo Marin M
Entregado a CAOS
Fecha de elaboraci�n: 08/09/24
Versi�n del IDE: 5.1 Dev-cpp
*/
/*
Descripci�n:
Leer un n�mero entero y determinar si es par o impar.
*/

#include <iostream>
using namespace std;

bool esPar(int num) {
    return num % 2 == 0;
}

int main() {
    int num;
    cout << "Digite un n�mero entero: ";
    cin >> num;
    
    if (esPar(num))
        cout << "El n�mero es par." << endl;
    else
        cout << "El n�mero es impar." << endl;

    return 0;
}

