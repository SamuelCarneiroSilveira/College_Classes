#include "Proprietario.h"

Proprietario::Proprietario()
{
    //ctor
}

Proprietario::~Proprietario()
{
    //dtor
}

void Proprietario::setNome(string nome)
{
    this->nome = nome;
}
void Proprietario::setCpf(string cpf)
{
    this->cpf = cpf;
}
void Proprietario::setanoNascimento(int anoNascimento)
{
    this->anoNascimento =anoNascimento;
}
void Proprietario::setNumeroHabilitacao(int numHabilitacao)
{
    this->numHabilitacao = numHabilitacao;
}
string Proprietario::getNome()
{
    return nome;
}
string Proprietario::getCpf()
{
    return cpf;
}
int Proprietario::getAnoNascimento()
{
    return anoNascimento;
}
int Proprietario::getNumHabilitacao()
{
    return numHabilitacao;
}

void Proprietario::cadastrarDadosProprietario()
{
    cout << "informe o nome: " << endl;
    cin >> nome;
    cout << "informe o cpf: " << endl;
    cin >> cpf;
    cout << "informe o ano de nascimento: " << endl;
    cin >> anoNascimento;
    cout << "informe o numero da Habilitacao: " << endl;
    cin >> numHabilitacao;
    cout << "------------------------------------" << endl;
}
void Proprietario::imprimirDadosProprietario()
{
    cout << "Nome:  " << nome << endl;
    cout << "CPF:  " << cpf << endl;
    cout << "Ano nascimento:  " << anoNascimento << endl;
    cout << "Habilitacao  numero:   " << numHabilitacao<< endl;
    cout << "------------------------------------------" << endl;
}

