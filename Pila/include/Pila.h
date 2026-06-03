#ifndef PILA_H
#define PILA_H
#include "Dato.h"


class Pila
{
    public:
        Pila();
        ~Pila();

        void insertarElemento(int d);
        int eliminarElemento();

        Dato* GetPrimero();
        int GetPrimerElemento();

        bool esVacia();

        int GetTamanio();

    protected:

    private:
        Dato* primero;
        int tamanio;
};

#endif
