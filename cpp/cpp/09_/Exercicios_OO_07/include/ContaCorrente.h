#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H
#include "Cliente.h"
#include <iostream>
#include <string>

using namespace std;

class ContaCorrente
{
    public:
        ContaCorrente();
        virtual ~ContaCorrente();

        void setNumeroConta(int numero);
        int getNumeroConta();

        void realizarSaque(float valor);
        void realizarDeposito(float valor);
        void consultarSaldo();

        void setCorrentista(Cliente* correntista);
        Cliente* getCorrentista();
    protected:

    private:
        int numero;
        float saldo;
        Cliente* correntista;
};

#endif // CONTACORRENTE_H
