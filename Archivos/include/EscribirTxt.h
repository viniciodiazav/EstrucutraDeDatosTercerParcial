#ifndef ESCRIBIRTXT_H
#define ESCRIBIRTXT_H
#include <string>


class EscribirTxt
{
    public:
        EscribirTxt(std::string nombreArchivo);
        ~EscribirTxt();

        void escribirArreglo(int* a, int t);
        void escribirVariable(int v, std::string nombre);

    protected:

    private:
        std::string nombreArchivo;
};

#endif
