#include "Imprimir.h"
#include <iostream>

using namespace std;

Imprimir::Imprimir() {}

Imprimir::~Imprimir() {}

void Imprimir::imp(Cola* c) {
    if (c->esVacia()) {
        cout << "La cola esta vacia." << endl;
        return;
    }
    int t = c->GetTamanio();
    Dato* D = c->GetPrimero();
    cout << "====== Cola ======" << endl;
    for (int i = 0; i < t; i++) {
        int dato = D->GetDato();
        if (i == 0) {
            cout << "| " << dato;
        } else if (i < t - 1) {
            cout << " | " << dato;
        } else {
            cout << " | " << dato << " |" << endl;
        }
        D = D->GetSiguiente();
    }
    cout << "\n" << endl;
}
