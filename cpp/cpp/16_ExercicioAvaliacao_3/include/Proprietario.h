#ifndef PROPRIETARIO_H
#define PROPRIETARIO_H
#include <iostream>
#include <string>
using namespace std;

class Proprietario
{
    public:
        Proprietario();
        virtual ~Proprietario();

        void setNome(string nome);
        void setCpf(string cpf);
        void setanoNascimento(int anoNascimento);
        void setNumeroHabilitacao(int numHabilitacao);

        string getNome();
        string getCpf();
        int getAnoNascimento();
        int getNumHabilitacao();

        void cadastrarDadosProprietario();
        void imprimirDadosProprietario();

    protected:

    private:
        string cpf;
        string nome;
        int anoNascimento;
        int numHabilitacao;
};

#endif // PROPRIETARIO_H
