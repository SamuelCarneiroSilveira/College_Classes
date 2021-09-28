#include "Veiculo.h"

Veiculo::Veiculo()
{
    //ctor
}

Veiculo::~Veiculo()
{
    //dtor
}

void Veiculo::setModelo(string modelo)
{
    this->modelo = modelo;
}
void Veiculo::setAno(int ano)
{
    this->ano = ano;
}
void Veiculo::setCor(string cor)
{
    this->cor = cor;
}

string Veiculo::getModelo()
{
    return modelo;
}
int Veiculo::getAno()
{
    return ano;
}
string Veiculo::getCor()
{
    return cor;
}
void Veiculo::cadastrarDados()
{
    cout << "Informe o modelo: " <<endl;
    cin >> modelo;
    cout <<"informe o ano: " << endl;
    cin>> ano;
    cout<<"informe a cor: " <<endl;
    cin>>cor;
}
void Veiculo::imprimirDados()
{
    cout << "modelo: " << modelo <<endl;
    cout << "ano: " << ano << endl;
    cout << "cor: " << cor << endl;
}
