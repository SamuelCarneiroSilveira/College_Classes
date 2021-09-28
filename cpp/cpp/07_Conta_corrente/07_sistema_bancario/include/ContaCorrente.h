#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H

#include <iostream>

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

    protected:

    private:
        int numero;
        float saldo;
};

#endif // CONTACORRENTE_H
