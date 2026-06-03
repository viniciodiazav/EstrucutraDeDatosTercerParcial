#include <iostream>
#include "Lista.h"
#include "Imprimir.h"
#include "EscribirTxt.h"

using namespace std;

int main()
{
    EscribirTxt* estxt = new EscribirTxt("../archivoTxt.txt");
    Imprimir* imp = new Imprimir();

    Lista* lista1 = new Lista();
    lista1->insertarAlFinal(14);
    lista1->insertarAlFinal(18);
    lista1->insertarAlFinal(12);
    lista1->insertarAlFinal(2);
    lista1->insertarAlFinal(20);
    lista1->insertarAlFinal(11);
    imp->imp(lista1);

    estxt->escribirLista(lista1);

    return 0;
}
