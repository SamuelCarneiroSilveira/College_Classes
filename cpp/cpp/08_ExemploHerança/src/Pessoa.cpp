#include "Pessoa.h"
// getters – setters

void Pessoa::imprimirDados()
{
 cout << "Nome: " << this->nome << endl;
 cout << "Data de nascimento: " << this->dataNascimento << endl;
 cout << "Cpf: " << this->cpf << endl;
}
void Pessoa::cadastrarDados()
{
 cout << "Informe o nome:" << endl;
 getline(cin,this->nome);
 cout << "Informe a data de nascimento:" << endl;
 cin >> this->dataNascimento;
 cin.clear();
 cin.sync();
 cout << "Informe o cpf:" << endl;
 getline(cin,this->cpf);
}
