/* 7-. Un ejemplo, comprobar si un car�cter es una letra (tanto may�scula como min�scula)
 o no.  El programa es similar al del ejercicio 6 anterior, 
 pero aqu� se  combina los operadores "and y or" para obtener 
 las dos franjas en las que est�n los caracteres de las letras:

	Entregado a: CAOS
	Elaborado por: Juan Pablo Marin
	Version: 5.11 (Dev-cpp)
	Fecha de creacion: 21/08/2024       
*/
#include <iostream>
#include <locale.h>
#include <cctype>

using namespace std;

int main() {
	setlocale (LC_ALL,"spanish");
    char letra;
    cout << "Escriba una letra: ";
    cin >> letra;
    isalnum(letra) ? cout <<  "Es una alfanumerica" : cout <<"No es alfanumerica";

    return 0;
}

