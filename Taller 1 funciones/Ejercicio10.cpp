/*
Elaborado por Juan Pablo Marin M
Entregado a CAOS
Fecha de elaboraci�n: 08/09/24
Versi�n del IDE: 5.1 Dev-cpp
*/
/*
Descripci�n:
Leer dos n�meros y calcular su m�ximo com�n divisor (MCD).
*/

#include <iostream>
using namespace std;

int calcularMCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    cout << "Digite el primer n�mero: ";
    cin >> num1;
    cout << "Digite el segundo n�mero: ";
    cin >> num2;
    
    int mcd = calcularMCD(num1, num2);
    cout << "El MCD es: " << mcd << endl;

    return 0;
}

