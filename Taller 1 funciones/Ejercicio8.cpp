/*
Elaborado por Juan Pablo Marin M
Entregado a CAOS
Fecha de elaboraci�n: 08/09/24
Versi�n del IDE: 5.1 Dev-cpp
*/
/*
Descripci�n:
Leer un n�mero entero y calcular la suma de sus d�gitos.
*/

#include <iostream>
using namespace std;

int sumarDigitos(int num) {
    int suma = 0;
    while (num > 0) {
        suma += num % 10;
        num /= 10;
    }
    return suma;
}

int main() {
    int num;
    cout << "Digite un n�mero entero: ";
    cin >> num;
    
    int suma = sumarDigitos(num);
    cout << "La suma de los d�gitos es: " << suma << endl;

    return 0;
}

