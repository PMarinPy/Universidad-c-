#include <iostream>
#include <string> // Necesario para usar std::string
using namespace std;

int main() {
    float horas, vhora, horase;

    cout << "C�antas horas normales trabaj�?: ";
    cin >> horas;
    cout << "C�al es el precio de la hora?: ";
    cin >> vhora;
	cout << "C�antas horas extra trabaj�?: ";
    cin >> horase;
    float sal = (horas * vhora) + (horase * (vhora + (0.35 * vhora)));

    
    cout << "El salario total del trabajador es: " << sal << endl;

    return 0;
}
