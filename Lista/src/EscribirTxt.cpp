#include "EscribirTxt.h"
#include <fstream>

using namespace std;

EscribirTxt::EscribirTxt(string nombreArchivo) {
    this->nombreArchivo = nombreArchivo;
}

EscribirTxt::~EscribirTxt() {}

void EscribirTxt::escribirLista(Lista* e) {
    ofstream archivo(this->nombreArchivo, ios::app);
    if (archivo.is_open()) {
        archivo << "lista:";
        Dato* D = e->GetPrimero();
        for (int i = e->GetTamanio()- 1; i >= 0; i--) {
            archivo << D->GetDato() << " ";
            D = D->GetSiguiente();
        }
        archivo << endl;
        archivo.close();
    }
}
