#ifndef SISTEMABANCARIO_H
#define SISTEMABANCARIO_H

#include <vector>
#include <string>
#include <iostream>

#include <ContaCorrente.h>
#include "Cliente.h"

using namespace std;

class SistemaBancario
{
    public:
        SistemaBancario();
        virtual ~SistemaBancario();

        void menuPrincipal();

        void menuGerenciamentoContas();
        void incluirConta();
        void excluirConta();
        void listarContas();

        void menuOperacoesSobreContas();
        void realizarDepositoConta();
        void realizarSaqueConta();
        void exibirSaldoConta();

        int consultaPosicaoContaInformada();

        void menuClientes();
        void incluirCliente();
        void listarClientes();
        void excluirCliente();

        void consultarContasDoCliente();



    protected:

    private:
        int indiceIncrementalContas = 0;
        vector<ContaCorrente*> contas;
        vector<Cliente*> clientes;
};

#endif // SISTEMABANCARIO_H
