#include "Dato.h"

Dato::Dato(int d) {
    this->d = d;
    this->sig = nullptr;
    this->ant = nullptr;
}

Dato::~Dato() {}

int Dato::GetDato() {
    return this->d;
}

void Dato::SetDato(int d) {
    this->d = d;
}

Dato* Dato::GetSiguiente() {
    return this->sig;
}

void Dato::SetSiguiente(Dato* sig) {
    this->sig = sig;
}

Dato* Dato::GetAnterior() {
    return this->ant;
}

void Dato::SetAnterior(Dato* ant) {
    this->ant = ant;
}
