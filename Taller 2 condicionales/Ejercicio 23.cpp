/*
Descripcion:
23. el v�deo club "El cine" tiene una pol�tica para promover el alquiler de sus pel�culas,
esta estrategia consiste en obsequiar el alquiler de una pol�tica si el afiliado lleva
dos (pague dos lleve tres, siendo acumulable, p.e. 2 pague cuatro y lleve seis", etc.) y
que cuando haya alquilado 10 o m�s pel�culas puede llevar dos sin ning�n costo.
Las dos promociones no se excluyen entre s�.

El v�deo club clasifica sus pel�culas as�:
? Cl�sicas.
? Cine-arte.
? Cine-comercial.
? Cartelera (pel�culas exhibida en los cines en ese momento).

El valor del alquiler de cualquier pel�cula es de $1000 y las de cartelera tienen un
recargo de $200. Las promociones s�lo son v�lidas para las pel�culas que no son de
cartelera; si el afiliado desea, puede utilizar su promoci�n con una pel�cula de
cartelera pagando el recargo en efectivo.
El problema que se debe resolver es saber cu�ntas pel�culas puede llevar un afiliado
en determinado momento y cu�nto debe pagar. 

Elabrorado por Juan Pablo Marin M
Entregado a: CAOS
Version del compilador: 5.11 (Dev-cpp)
Fecha de creacion: 19 de agosto de 2024
*/

#include <iostream>
using namespace std;

int main() {
    int c, ca, cc, k; 
    int total, gratis, pagar;

    cout << "Ingrese peliculas clasicas: ";
    cin >> c;
    cout << "Ingrese peliculas cine-arte: ";
    cin >> ca;
    cout << "Ingrese peliculas cine-comercial: ";
    cin >> cc;
    cout << "Ingrese peliculas cartelera: ";
    cin >> k;

    total = c + ca + cc + k;

    int noCartelera = c + ca + cc;
    gratis = noCartelera / 3;

    if (total >= 10) {
        gratis += 2;
    }

    if (gratis > noCartelera) {
        gratis = noCartelera;
    }

    pagar = (noCartelera - gratis) * 1000 + k * 1200;

    cout << "Peliculas a llevar: " << total + gratis << endl;
    cout << "Monto a pagar: $" << pagar << endl;

    return 0;
}

