#ifndef ESCRIBIRTXT_H
#define ESCRIBIRTXT_H
#include "Lista.h"
#include <string>


class EscribirTxt
{
    public:
        EscribirTxt(std::string nombreArchivo);
        ~EscribirTxt();

        void escribirLista(Lista* e);

    protected:

    private:
        std::string nombreArchivo;
};

#endif
