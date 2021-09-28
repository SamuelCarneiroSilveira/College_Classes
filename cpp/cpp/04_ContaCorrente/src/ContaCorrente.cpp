#include "ContaCorrente.h"

ContaCorrente::ContaCorrente()
{
        saldo = 0;
}

ContaCorrente::~ContaCorrente()
{
    //dtor
}

void ContaCorrente::exibirSaldo(){
    cout << "***** Saldo *****" << endl;
    cout << "numero: " << numero << endl;
    cout << "saldo: " << saldo << endl;
}
void ContaCorrente::realizarSaque(float valor){
        if (saldo >= valor){
            saldo -= valor;
            cout << "saque realizado com sucesso." << endl;
        } else {
            cout << "Saldo insuficiente, saque não realizado." << endl;
        }
}
void ContaCorrente::realizarDeposito(float valor){
        saldo += valor;
        cout << "Deposito realizado com sucesso! " <<endl;
}

void ContaCorrente::setNumero(int numero){
    this->numero = numero;
}
