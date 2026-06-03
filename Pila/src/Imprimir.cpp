#include "Imprimir.h"
#include <iostream>

using namespace std;

Imprimir::Imprimir() {}

Imprimir::~Imprimir() {}

void Imprimir::imp(Pila* p) {
    if (p->esVacia()) {
        cout << "La pila esta vacia." << endl;
        return;
    }
    int t = p->GetTamanio();
    Dato* D = p->GetPrimero();
    cout << "====== Pila ======" << endl;
    for (int i = 0; i < t; i++) {
        int dato = D->GetDato();
        if (dato < 0 || dato > 9) {
            cout << "|" << dato << "|" << endl;
        } else {
            cout << "| " << dato << "|" << endl;
        }
        D = D->GetSiguiente();
    }
    cout << endl;
}
