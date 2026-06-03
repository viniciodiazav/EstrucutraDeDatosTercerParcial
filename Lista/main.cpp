#include <iostream>
#include "Lista.h"
#include "Imprimir.h"

using namespace std;

int main()
{
    Lista* lista = new Lista();
    Imprimir* imp = new Imprimir();

    cout << "Agregando elementos: 4, -1 y 2" << endl;

    lista->insertarAlFinal(4);
    lista->insertarAlFinal(-1);
    lista->insertarAlFinal(2);

    imp->imp(lista);

    cout << "Agregando al final elemento: 5" << endl;

    lista->insertarAlFinal(5);

    imp->imp(lista);

    cout << "Agregando al inicio elemento: 12" << endl;

    lista->insertarAlInicio(12);

    imp->imp(lista);

    cout << "Agregando elemento 8 antes del indice: 1" << endl;

    lista->insertarAntesDelIndice(1, 8);

    imp->imp(lista);

    cout << "Eliminando elemento en el indice: 3" << endl;

    lista->eliminarEnElIndice(3);

    imp->imp(lista);

    cout << "Eliminando el primer y ultimo elemento" << endl;

    lista->eliminarUltimo();
    lista->eliminarPrimero();

    imp->imp(lista);

    cout << "Esta vacia?: " << lista->esVacia() << endl;
    cout << "Tamanio: " << lista->GetTamanio() << endl;
    cout << "Buscar elemento [-5]: " << lista->buscarElemento(-1) << " (n = indice/ -1 = no encontrado)" << endl;
    cout << "Buscar elemento [4]: " << lista->buscarElemento(4) << " (n = indice/ -1 = no encontrado)" << endl;
    cout << "Primer elemento: " << lista->GetPrimerElemento() << endl;
    cout << "Ultimo elemento: " << lista->GetUltimoElemento() << endl;
    cout << "Direccion del primer elemento: " << lista->GetPrimero() << endl;
    cout << "Direccion del ultimo elemento: " << lista->GetUltimo() << endl;
    return 0;
}
