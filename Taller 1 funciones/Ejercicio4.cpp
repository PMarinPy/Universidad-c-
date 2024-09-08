/*
Elaborado por Juan Pablo Marin M
Entregado a CAOS
Fecha de elaboraci�n: 08/09/24
Versi�n del IDE: 5.1 Dev-cpp
*/
/*
Descripci�n:
Dado un n�mero n, determinar si es un n�mero primo.
*/

#include <iostream>
using namespace std;

bool esPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Digite un n�mero: ";
    cin >> n;

    if (esPrimo(n))
        cout << "El n�mero es primo.";
    else
        cout << "El n�mero NO es primo.";

    return 0;
}

