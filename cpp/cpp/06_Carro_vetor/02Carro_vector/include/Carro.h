#ifndef CARRO_H
#define CARRO_H

#include <string>
#include <iostream>

using namespace std;

class Carro
{
    public:
        void setModelo(string modelo);
        void setAnoFabricacao(int anoFabricacao);
        void setCor(string cor);
        string getModelo();
        int getAnoFabricacao();
        string getCor();

        void cadastrarDados();
        void imprimirDados();

    protected:

    private:
        string modelo;
        int anoFabricacao;
        string cor;
};

#endif // CARRO_H
