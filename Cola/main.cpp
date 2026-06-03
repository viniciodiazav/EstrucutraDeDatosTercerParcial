#include <iostream>
#include "Cola.h"
#include "Imprimir.h"

using namespace std;

int main()
{
    Cola* cola = new Cola();
    Imprimir* imp = new Imprimir();

    cout << "Agregar elementos: 9, -5, -2 y 11" << endl;
    cola->insertarElemento(9);
    cola->insertarElemento(-5);
    cola->insertarElemento(-2);
    cola->insertarElemento(11);

    imp->imp(cola);

    cout << "Eliminar el primer elmento" << endl;
    cola->eliminarElemento();

    imp->imp(cola);

    cout << "Agregar elemento: 8" << endl;
    cola->insertarElemento(8);

    imp->imp(cola);

    cout << "Esta vacia?: " << cola->esVacia() << endl;
    cout << "Tamanio: " << cola->GetTamanio() << endl;
    cout << "Primer elemento: " << cola->GetPrimerElemento() << endl;
    cout << "Ultimo elemento: " << cola->GetUltimoElemento() << endl;
    cout << "Direccion del primer elemento: " << cola->GetPrimero() << endl;
    cout << "Direccion del ultimo elemento: " << cola->GetUltimo() << endl;
    return 0;
}
