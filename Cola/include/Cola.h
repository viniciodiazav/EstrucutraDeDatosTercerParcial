#ifndef COLA_H
#define COLA_H
#include "Dato.h"


class Cola
{
    public:
        Cola();
        ~Cola();

        void insertarElemento(int d);
        int eliminarElemento();

        int GetPrimerElemento();
        int GetUltimoElemento();

        Dato* GetPrimero();
        Dato* GetUltimo();

        bool esVacia();

        int GetTamanio();

    protected:

    private:
        Dato* primero;
        Dato* ultimo;
        int tamanio;
};

#endif
