#ifndef CASA_H
#define CASA_H
#include "Imovel.h"

class Casa: public Imovel
{
    public:
        Casa();
        virtual ~Casa();

        void cadastrarDados();
        void imprimirDados();
    protected:

    private:
        float areaTerreno;

};

#endif // CASA_H
