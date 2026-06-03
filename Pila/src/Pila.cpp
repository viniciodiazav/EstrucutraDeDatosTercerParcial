#include "Pila.h"

Pila::Pila() {
    this->primero = nullptr;
    this->tamanio = 0;
}

Pila::~Pila() {}

void Pila::insertarElemento(int d) {
    Dato* nD = new Dato(d);
    if (esVacia()) {
        this->primero = nD;
        this->tamanio = 1;
        return;
    }
    nD->SetSiguiente(this->primero);
    this->primero = nD;
    this->tamanio += 1;
}

int Pila::eliminarElemento() {
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

Dato* Pila::GetPrimero() {
    return this->primero;
}

int Pila::GetPrimerElemento() {
    return this->primero->GetDato();
}

bool Pila::esVacia() {
    return tamanio == 0;
}

int Pila::GetTamanio() {
    return this->tamanio;
}
