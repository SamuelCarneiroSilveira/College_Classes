#ifndef FERRAMENTA_H
#define FERRAMENTA_H
#include <string>
#include <iostream>
using namespace std;
class Ferramenta
{
    public:
        Ferramenta();
        virtual ~Ferramenta();

        void cadastrarDados();
        void imprimirDados();
        void adicionarAoEstoque(int qtd);
        void removerDoEstoque(int qtd);

    protected:

    private:
        int codigo;
        string modelo;
        int quantidade;
};

#endif // FERRAMENTA_H
