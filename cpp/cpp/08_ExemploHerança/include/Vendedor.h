#ifndef VENDEDOR_H
#define VENDEDOR_H

#include <Pessoa.h>

class Vendedor : public Pessoa
{
private:
    string matricula;
    float comissao;
public:

    void cadastrarDados();
    void imprimirDados();
};

#endif // VENDEDOR_H
