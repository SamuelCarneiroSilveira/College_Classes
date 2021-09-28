#ifndef VEICULO_H
#define VEICULO_H
#include <string>
#include <iostream>
#include "Proprietario.h"
using namespace std;

class Veiculo
{
    public:
        Veiculo();
        virtual ~Veiculo();

        void setCor(string cor);
        void setAno(int ano);
        void setFabricante(string fabricante);
        void setModelo(string modelo);
        void setPlaca(string placa);

        string getCor();
        string getModelo();
        string getFabricante();
        string getPlaca();
        int getAno();

        void cadastrarDadosVeiculo();
        void imprimirDadosVeiculo();

        void setDono(Proprietario* dono);
        Proprietario* getDono();

    protected:

    private:
        string cor;
        int ano;
        string fabricante;
        string modelo;
        string placa;
        Proprietario* dono;
};

#endif // VEICULO_H
