/* 6-. escriba una vocal min�scula, y  comprobaremos  que lo que ha escrito el usuario 
//es efectivamente una vocal min�scula. O CASO CONTRARIO OTRO VALOR.

	Entregado a: CAOS
	Elaborado por: Juan Pablo Marin
	Version: 5.11 (Dev-cpp)
	Fecha de creacion: 21/08/2024       
*/
#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale (LC_ALL,"spanish");
    char letra;
    cout << "Escriba una letra: ";
    cin >> letra;

    (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') ?
    cout << "Es una vocal min�scula." :
    cout << "No es una vocal min�scula.";

    return 0;
}

