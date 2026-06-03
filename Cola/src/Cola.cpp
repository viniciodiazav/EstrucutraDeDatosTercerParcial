#include "Cola.h"

Cola::Cola() {
    this->primero = nullptr;
    this->ultimo = nullptr;
    this->tamanio = 0;
}

Cola::~Cola() {}

void Cola::insertarElemento(int d) {
    Dato* nD = new Dato(d);
    if (esVacia()) {
        this->primero = nD;
        this->ultimo = nD;
        this->tamanio = 1;
        return;
    }
    this->ultimo->SetSiguiente(nD);
    this->ultimo = nD;
    this->tamanio += 1;
}

int Cola::eliminarElemento() {
    if (esVacia()) {
        return 0;
    }
    Dato* dE = this->primero;
    this->primero = this->primero->GetSiguiente();
    int d = dE->GetDato();
    delete dE;
    this->tamanio -= 1;
    return d;
}

int Cola::GetPrimerElemento() {
    return this->primero->GetDato();
}

int Cola::GetUltimoElemento() {
    return this->ultimo->GetDato();
}

Dato* Cola::GetPrimero() {
    return this->primero;
}

Dato* Cola::GetUltimo() {
    return this->ultimo;
}

bool Cola::esVacia() {
    return this->tamanio == 0;
}

int Cola::GetTamanio() {
    return this->tamanio;
}
