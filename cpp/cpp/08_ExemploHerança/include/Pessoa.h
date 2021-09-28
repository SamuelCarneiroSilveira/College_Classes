#ifndef PESSOA_H
#define PESSOA_H
#include <string>
#include <iostream>
using namespace std;


class Pessoa
{
private:
    string nome;
    string dataNascimento;
    string cpf;
public:

    string getNome() { return nome;}
    void cadastrarDados();
    void imprimirDados();
};

#endif // PESSOA_H
