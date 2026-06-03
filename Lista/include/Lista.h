#ifndef LISTA_H
#define LISTA_H
#include "Dato.h"


class Lista
{
    public:
        Lista();
        ~Lista();

        void insertarAlFinal(int d);
        void insertarAlInicio(int d);
        void insertarAntesDelIndice(int i, int d);

        int eliminarUltimo();
        int eliminarPrimero();
        int eliminarEnElIndice(int i);

        void limpiarLista();

        int buscarElemento(int d);

        Dato* GetPrimero();
        Dato* GetUltimo();
        int GetTamanio();

        int GetPrimerElemento();
        int GetUltimoElemento();

        bool esVacia();

    protected:

    private:
        Dato* primero;
        Dato* ultimo;
        int tamanio;
};

#endif
