#include <iostream>
#include "Cola.h"
#include "Imprimir.h"
#include "EscribirTxt.h"

using namespace std;

int main()
{
    EscribirTxt* estxt = new EscribirTxt("../archivoTxt.txt");
    Imprimir* imp = new Imprimir();

    Cola* cola1 = new Cola();
    cola1->insertarElemento(2);
    cola1->insertarElemento(1);
    cola1->insertarElemento(11);
    cola1->insertarElemento(19);
    cola1->insertarElemento(11);
    cola1->insertarElemento(11);
    cola1->insertarElemento(10);
    cola1->insertarElemento(14);
    imp->imp(cola1);

    estxt->escribirCola(cola1);

    return 0;
}
