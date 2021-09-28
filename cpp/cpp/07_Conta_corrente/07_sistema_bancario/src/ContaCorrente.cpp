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
    if(saldo >= valor)
        {
            saldo -= valor;
            cout << "Saque de R$" << valor << " realizado com sucesso!" << endl;
        } else {

            cout << "Operação cancelada, saldo insuficiente!" << endl;

        }
}
void ContaCorrente::realizarDeposito(float valor)
{
        saldo += valor;
        cout << "deposito de " << valor << " realizado com sucesso" << endl;
}
void ContaCorrente::consultarSaldo()
{
        cout << "O saldo da conta é: R$" << saldo << endl;
}
