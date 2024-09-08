/*
Elaborado por Juan Pablo Marin M
Entregado a CAOS
Fecha de elaboraci�n: 08/09/24
Versi�n del IDE: 5.1 Dev-cpp
*/
/*
Descripci�n:
Dado un n�mero n, generar los primeros n n�meros de la serie de Fibonacci.
*/

#include <iostream>
using namespace std;

void generarFibonacci(int n) {
    int a = 0, b = 1, siguiente;
    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        siguiente = a + b;
        a = b;
        b = siguiente;
    }
}

int main() {
    int n;
    cout << "Digite la cantidad de n�meros de Fibonacci a generar: ";
    cin >> n;
    
    generarFibonacci(n);
    
    return 0;
}

