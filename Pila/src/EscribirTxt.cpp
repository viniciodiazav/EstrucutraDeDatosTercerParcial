#include "EscribirTxt.h"
#include <fstream>

using namespace std;

EscribirTxt::EscribirTxt(string nombreArchivo) {
    this->nombreArchivo = nombreArchivo;
}

EscribirTxt::~EscribirTxt() {}

void EscribirTxt::escribirPila(Pila* e) {
    ofstream archivo(this->nombreArchivo, ios::app);
    if (archivo.is_open()) {
        archivo << "pila:";
        int datos[e->GetTamanio()];
        Dato* D = e->GetPrimero();
        for (int i = 0; i < e->GetTamanio(); i++) {
            datos[i] = D->GetDato();
            D = D->GetSiguiente();
        }
        for (int i = e->GetTamanio()- 1; i >= 0; i--) {
            archivo << datos[i] << " ";
        }
        archivo << endl;
        archivo.close();
    }
}
