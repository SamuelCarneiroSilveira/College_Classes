#include "Cliente.h"

Cliente::Cliente()
{
    //ctor
}

Cliente::~Cliente()
{
    //dtor
}

void Cliente::setNome(string nome)
{
 this->nome = nome;
}
void Cliente::setCpf(string cpf)
{
    this->cpf = cpf;
}
string Cliente::getNome()
{
    return nome;
}
string Cliente::getCpf()
{
    return cpf;
}
void Cliente::cadastrarDados()
{
    cout << "Cadastrar nome: " << endl;
    cin >> nome;
    cout << "Cadastrar cpf: " << endl;
    cin >> cpf;
}
void Cliente::imprimirDados()
{
    cout << "Nome: " << nome << endl;
    cout << "CPF: " << cpf << endl;
}
