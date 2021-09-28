#ifndef APARTAMENTO_H
#define APARTAMENTO_H
#include "Imovel.h"

class Apartamento: public Imovel
{
    public:
        Apartamento();
        virtual ~Apartamento();

        void cadastrarDados();
        void imprimirDados();
    protected:

    private:
        int andar;
};

#endif // APARTAMENTO_H
