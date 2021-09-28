#ifndef IMOVEL_H
#define IMOVEL_H
#include <string>
#include <iostream>
using namespace std;

class Imovel
{
    public:
        Imovel();
        virtual ~Imovel();

        void cadastrarDados();
        void imprimirDados();
    protected:

    private:
        int codigo;
        string cidade;
        float valor;
};

#endif // IMOVEL_H
