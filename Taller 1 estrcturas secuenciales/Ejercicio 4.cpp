#include <iostream>
#include <cmath> // Necesario para  la funci�n pow
using namespace std;

int main() {
    float a, b, c;
    
    cout << "Digite un n�mero para a: ";
    cin >> a;
    
    cout << "Digite un n�mero para b: ";
    cin >> b;
	c = pow((a+b),2) - pow((a*b),3);
    cout << "Cuadrado de la suma: " << pow((a+b),2) << endl;
    cout << "Multiplicaci�n: " << a * b << endl;
    cout << "Cubo del producto: " << pow((a*b),3) << endl;
    cout << "Diferencia del cuadrado de la suma y el cubo del producto: " << c << endl;

    return 0;
}

