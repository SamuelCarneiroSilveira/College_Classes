#ifndef VEICULO_H
#define VEICULO_H

#include <string>
#include <iostream>

using namespace std;

class Veiculo
{
    public:
        Veiculo();
        virtual ~Veiculo();

        void setModelo(string modelo);
        void setAno(int ano);
        void setCor(string cor);

        string getModelo();
        int getAno();
        string getCor();

        void cadastrarDados();
        void imprimirDados();


    protected:

    private:
        string modelo;
        int ano;
        string cor;
};

#endif // VEICULO_H
