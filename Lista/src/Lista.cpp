#include "Lista.h"

Lista::Lista() {
    this->primero = nullptr;
    this->ultimo = nullptr;
    this->tamanio = 0;
}

Lista::~Lista() {}

void Lista::insertarAlFinal(int d) {
    Dato* nD = new Dato(d);
    if (esVacia()) {
        this->primero = nD;
        this->ultimo = nD;
        this->tamanio = 1;
        return;
    }
    nD->SetAnterior(this->ultimo);
    this->ultimo->SetSiguiente(nD);
    this->ultimo = nD;
    this->tamanio += 1;
}

void Lista::insertarAlInicio(int d) {
    Dato* nD = new Dato(d);
    if (esVacia()) {
        this->primero = nD;
        this->ultimo = nD;
        this->tamanio = 1;
        return;
    }
    nD->SetSiguiente(this->primero);
    this->primero->SetAnterior(nD);
    this->primero = nD;
    this->tamanio += 1;
    return;
}

void Lista::insertarAntesDelIndice(int i, int d) {
    if (i >= this->tamanio || i < 0) {
        return;
    }
    if (i == 0) {
        insertarAlInicio(d);
        return;
    }
    Dato* nD = new Dato(d);
    Dato* D = this->primero;
    for (int j = 0; j < i; j++) {
        D = D->GetSiguiente();
    }
    Dato* ant = D->GetAnterior();
    ant->SetSiguiente(nD);
    nD->SetAnterior(ant);
    nD->SetSiguiente(D);
    D->SetAnterior(nD);
    this->tamanio += 1;
    return;
}

int Lista::eliminarUltimo() {
    if (esVacia()) {
        return 0;
    }
    Dato* dE = this->ultimo;
    int d = dE->GetDato();
    this->ultimo = dE->GetAnterior();
    dE->GetAnterior()->SetSiguiente(nullptr);
    delete dE;
    this->tamanio -= 1;
    return d;
}

int Lista::eliminarPrimero() {
    if (esVacia()) {
        return 0;
    }
    Dato* dE = this->primero;
    int d = dE->GetDato();
    this->primero = dE->GetSiguiente();
    dE->GetSiguiente()->SetAnterior(nullptr);
    delete dE;
    this->tamanio -= 1;
    return d;
}

int Lista::eliminarEnElIndice(int i) {
    if (i >= this->tamanio || i < 0) {
        return 0;
    }
    if (esVacia()) {
        return 0;
    }
    if (i == 0) {
        return eliminarPrimero();
    }
    if (i == this->tamanio - 1) {
        return eliminarUltimo();
    }
    Dato* D = this->primero;
    for (int j = 0; j < i; j++) {
        D = D->GetSiguiente();
    }
    D->GetAnterior()->SetSiguiente(D->GetSiguiente());
    D->GetSiguiente()->SetAnterior(D->GetAnterior());
    int d = D->GetDato();
    delete D;
    this->tamanio -= 1;
    return d;
}

void Lista::limpiarLista() {
    while (this->primero != nullptr) {
        eliminarUltimo();
    }
}

int Lista::buscarElemento(int d) {
    if (esVacia()) {
        return -1;
    }
    Dato* D = this->primero;
    for (int i = 0; i < this->tamanio; i++) {
        if (D->GetDato() == d) {
            return i;
        }
        D = D->GetSiguiente();
    }
    return -1;
}

Dato* Lista::GetPrimero() {
    return this->primero;
}

Dato* Lista::GetUltimo() {
    return this->ultimo;
}

int Lista::GetTamanio() {
    return this->tamanio;
}

int Lista::GetPrimerElemento() {
    return this->primero->GetDato();
}

int Lista::GetUltimoElemento() {
    return this->ultimo->GetDato();
}

bool Lista::esVacia() {
    return this->tamanio == 0;
}
