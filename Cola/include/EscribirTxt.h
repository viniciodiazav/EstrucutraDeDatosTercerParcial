#ifndef ESCRIBIRTXT_H
#define ESCRIBIRTXT_H
#include "Cola.h"
#include <string>


class EscribirTxt
{
    public:
        EscribirTxt(std::string nombreArchivo);
        ~EscribirTxt();

        void escribirCola(Cola* e);

    protected:

    private:
        std::string nombreArchivo;
};

#endif
