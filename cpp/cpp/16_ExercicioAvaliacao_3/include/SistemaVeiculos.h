#ifndef SISTEMAVEICULOS_H
#define SISTEMAVEICULOS_H
#include <iostream>
#include <string>
#include <vector>
#include "Veiculo.h"
#include "Proprietario.h"
using namespace std;

class SistemaVeiculos
{
    public:
        SistemaVeiculos();
        virtual ~SistemaVeiculos();

        void menuPrincipal();

        void menuVeiculos();
        void cadastrarVeiculo();
        void listarVeiculos();
        void excluirVeiculo();

        int consultaPosicaoVeiculo();

        void menuProprietarios();
        void cadastrarProprietario();
        void listarProprietarios();
        void excluirProprietario();


    protected:

    private:
        int indiceIncrementalVeiculos = 0;
        vector<Veiculo*> veiculos;
        vector<Proprietario*> proprietarios;
};

#endif // SISTEMAVEICULOS_H
