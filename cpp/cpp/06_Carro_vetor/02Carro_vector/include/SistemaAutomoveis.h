#ifndef SISTEMAAUTOMOVEIS_H
#define SISTEMAAUTOMOVEIS_H

#include <iostream>
#include <Carro.h>
#include <vector>

using namespace std;


class SistemaAutomoveis
{
    public:
        SistemaAutomoveis();
        virtual ~SistemaAutomoveis();

        void exibirMenuPricipal();
        void cadastrarAutomovel();
        void listarAutomoveis();
        void excluirAutomovel();

    protected:

    private:
        vector<Carro*>automoveis;
};

#endif // SISTEMAAUTOMOVEIS_H
