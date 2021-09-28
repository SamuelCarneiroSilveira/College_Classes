#include "Ferramenta.h"

Ferramenta::Ferramenta()
{
    //ctor
}

Ferramenta::~Ferramenta()
{
    //dtor
}
void Ferramenta::cadastrarDados()
{
    cout<<"informe o codigo: " << endl;
    cin>>codigo;
    cout<<"informe o modelo: " << endl;
    cin >>modelo;
    cout<<"informe a quantidade inicial: "<< endl;
    cin >> quantidade;
}
void Ferramenta::imprimirDados()
{
    cout << "Codigo: " << codigo << endl;
    cout << "modelo: " << modelo << endl;
    cout << "Quantidade atual: " << quantidade << endl;
}
void Ferramenta::adicionarAoEstoque(int qtd)
{
    this->quantidade += qtd;

}
void Ferramenta::removerDoEstoque(int qtd)
{
    this->quantidade -= qtd;
}
