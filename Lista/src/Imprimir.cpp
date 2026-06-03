#include "Imprimir.h"
#include <iostream>

using namespace std;

Imprimir::Imprimir() {}

Imprimir::~Imprimir() {}

void Imprimir::imp(Lista* l) {
    if (l->esVacia()) {
        cout << "La lista esta vacia." << endl;
        return;
    }
    int t = l->GetTamanio();
    Dato* D =l->GetPrimero();
    cout << "====== Lista ======" << endl;
    for (int i = 0; i < t; i++) {
        int d = D->GetDato();
        if (i == 0) {
            cout << "[" << d;
        } else if (i == t - 1) {
            cout << ", " << d << "]\n" << endl;
        } else {
            cout << ", " << d;
        }
        D = D->GetSiguiente();
    }
}
