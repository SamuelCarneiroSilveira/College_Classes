#ifndef CLIENTE_H
#define CLIENTE_H

#include <Pessoa.h>

class Cliente : public Pessoa
{
private:
    int codigo;
    string dataCadastro;
public:
    void cadastrarDados();
    void imprimirDados();
};

#endif // CLIENTE_H
