#ifndef ESCRIBIRTXT_H
#define ESCRIBIRTXT_H
#include "Pila.h"
#include <string>


class EscribirTxt
{
    public:
        EscribirTxt(std::string nombreArchivo);
        ~EscribirTxt();

        void escribirPila(Pila* e);

    protected:

    private:
        std::string nombreArchivo;
};

#endif
