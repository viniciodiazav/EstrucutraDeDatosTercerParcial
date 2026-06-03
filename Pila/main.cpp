#include <iostream>
#include "Pila.h"
#include "Imprimir.h"
#include "EscribirTxt.h"

using namespace std;

int main()
{
    EscribirTxt* estxt = new EscribirTxt("../archivoTxt.txt");
    Imprimir* imp = new Imprimir();

    Pila* pila1 = new Pila();
    pila1->insertarElemento(13);
    pila1->insertarElemento(12);
    pila1->insertarElemento(6);
    pila1->insertarElemento(5);
    pila1->insertarElemento(12);
    pila1->insertarElemento(3);
    pila1->insertarElemento(20);
    pila1->insertarElemento(7);
    pila1->insertarElemento(20);
    pila1->insertarElemento(17);
    imp->imp(pila1);

    estxt->escribirPila(pila1);


    return 0;
}
