#include <iostream>
#include <cmath> // Necesario para  la funci�n pow
using namespace std;

int main() {
    float r,area;
    double pi = 3.141592653589793;
    cout << "Digite un n�mero para el radio: ";
    cin >> r;
    area = pow((pi * r),2);
	
    cout << "�rea: " << area << endl;
    

    return 0;
}

