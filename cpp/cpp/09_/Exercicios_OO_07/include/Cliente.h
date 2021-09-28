#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>
#include <string>

using namespace std;

class Cliente
{
    public:
        Cliente();
        virtual ~Cliente();

        void setNome(string nome);
        void setCpf(string cpf);

        string getNome();
        string getCpf();

        void imprimirDados();
        void cadastrarDados();
    protected:

    private:
        string nome;
        string cpf;
};

#endif // CLIENTE_H

