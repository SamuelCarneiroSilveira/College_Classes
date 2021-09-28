#ifndef AUTOMOVEL_H
#define AUTOMOVEL_H
#include "Veiculo.h"

class Automovel: public Veiculo
{
    public:
        Automovel();
        virtual ~Automovel();

        void setNrPortas(int nrPortas);
        void setCapPortaMalas(int capPortaMalas);

        int getNrPortas();
        int getCapPortaMalas();

        void cadastrarDados();
        void imprimirDados();



    protected:

    private:
        int nrPortas;
        int capPortaMalas;
};

#endif // AUTOMOVEL_H
