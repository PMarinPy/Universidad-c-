#include <iostream>
#include <cmath> // Necesario para  la funci�n pow
using namespace std;

int main() {
    float a, b;
    
    cout << "Digite un n�mero para a: ";
    cin >> a;
    
    cout << "Digite un n�mero para b: ";
    cin >> b;

    cout << "Suma: " << a + b << endl;
    cout << "Resta: " << a - b << endl;
    cout << "Multiplicaci�n: " << a * b << endl;
    cout << "Divisi�n: " << a / b << endl;
    cout << "Potencia: " << pow(a, b) << endl;

    return 0;
}

