/*5 USE ternario para validar cadenas por ejemplo para pedir contrase�as, valide con una guardada


	Entregado a: CAOS
	Elaborado por: Juan Pablo Marin
	Version: 5.11 (Dev-cpp)
	Fecha de creacion: 21/08/2024       
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
	float n;
	string attempt,passw;
	cout << "Cree su contrase�a:  ";
	getline(cin,passw);
	cout << "Digite la contrase�a:  ";
	getline(cin, attempt);
	passw == attempt ? cout << "Las contrase�as son iguales." : cout << "Las contrase�as son diferentes.";

}
