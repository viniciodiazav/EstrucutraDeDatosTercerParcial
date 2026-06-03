#include <iostream>
#include "Pila.h"
#include "Imprimir.h"

using namespace std;

int main()
{
    Pila* pila = new Pila();
    Imprimir* imp = new Imprimir();

    cout << "Agregar elementos: 2, 15, 0 y -2" << endl;
    pila->insertarElemento(2);
    pila->insertarElemento(15);
    pila->insertarElemento(0);
    pila->insertarElemento(-2);

    imp->imp(pila);

    cout << "Eliminar el primer elmento" << endl;
    pila->eliminarElemento();

    imp->imp(pila);

    cout << "Agregar elemento: 8" << endl;
    pila->insertarElemento(8);

    imp->imp(pila);

    cout << "Esta vacia?: " << pila->esVacia() << endl;
    cout << "Tamanio: " << pila->GetTamanio() << endl;
    cout << "Primer elemento: " << pila->GetPrimerElemento() << endl;
    cout << "Direccion del primer elemento: " << pila->GetPrimero() << endl;
    return 0;
}
