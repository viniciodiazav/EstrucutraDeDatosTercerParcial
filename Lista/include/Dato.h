#ifndef DATO_H
#define DATO_H


class Dato
{
    public:
        Dato(int d);
        ~Dato();

        int GetDato();
        void SetDato(int d);

        Dato* GetSiguiente();
        void SetSiguiente(Dato* sig);

        Dato* GetAnterior();
        void SetAnterior(Dato* ant);

    protected:

    private:
        int d;
        Dato* sig;
        Dato* ant;
};

#endif
