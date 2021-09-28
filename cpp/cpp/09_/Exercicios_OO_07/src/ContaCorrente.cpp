#include "ContaCorrente.h"

ContaCorrente::ContaCorrente()
{
    //ctor
}

ContaCorrente::~ContaCorrente()
{
    //dtor
}

void ContaCorrente::setNumeroConta(int numero)
{
    this->numero = numero;
}

int ContaCorrente::getNumeroConta()
{
    return numero;
}

void ContaCorrente::realizarSaque(float valor)
{
    if (saldo >= valor)
    {
        saldo -= valor;
        cout << "Saque realizado com sucesso." << endl;
    }
    else
    {
        cout << "Saldo insuficiente. Saque nao realizado. " << endl;
    }
}
void ContaCorrente::realizarDeposito(float valor)
{
    saldo += valor;
    cout << "Deposito realizado com sucesso. " << endl;
}
void ContaCorrente::consultarSaldo()
{
    cout << "*** Saldo em Conta Corrente ***" << endl;
    cout << "Numero: " << numero << endl;
    cout << "Correntista: " << correntista->getNome() << endl;
    cout << "Saldo: R$" << saldo << endl;
    cout << "*******************************" << endl;
}

void ContaCorrente::setCorrentista(Cliente* correntista)
{
    this->correntista = correntista;
}
Cliente* ContaCorrente::getCorrentista()
{
    return correntista;
}

