#include "EscribirTxt.h"
#include <fstream>

using namespace std;

EscribirTxt::EscribirTxt(string nombreArchivo) {
    this->nombreArchivo = nombreArchivo;
}

EscribirTxt::~EscribirTxt() {}

void EscribirTxt::escribirArreglo(int* a, int t) {
    ofstream archivo(this->nombreArchivo, ios::app);
    if (archivo.is_open()) {
        archivo << "arreglo:";
        for (int i = 0; i < t; i++) {
            archivo << *(a + i) << " ";
        }
        archivo << endl;
        archivo.close();
    }
}

void EscribirTxt::escribirVariable(int v, string nombre) {
    ofstream archivo(this->nombreArchivo, ios::app);
    if (archivo.is_open()) {
        archivo << nombre << ":";
        archivo << v << endl;
        archivo.close();
    }
}
