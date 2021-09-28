#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H

#include <string>
#include <iostream>

using namespace std;

class ContaCorrente
{
    public:
        ContaCorrente();
        virtual ~ContaCorrente();

        void setNumero(int numero);

        void exibirSaldo();
        void realizarSaque(float valor);
        void realizarDeposito(float valor);


    protected:

    private:
        int numero;
        float saldo;
};

#endif // CONTACORRENTE_H
