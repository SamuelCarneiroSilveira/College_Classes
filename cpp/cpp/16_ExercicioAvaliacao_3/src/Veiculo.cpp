#include "Veiculo.h"

Veiculo::Veiculo()
{
    //ctor
}

Veiculo::~Veiculo()
{
    //dtor
}

void Veiculo::setCor(string cor)
{
    this->cor = cor;
}
void Veiculo::setAno(int ano)
{
    this->ano = ano;
}
void Veiculo::setFabricante(string fabricante)
{
    this->fabricante = fabricante;
}
void Veiculo::setModelo(string modelo)
{
    this->modelo = modelo;
}
void Veiculo::setPlaca(string placa)
{
    this->placa = placa;
}
string Veiculo::getCor()
{
    return cor;
}
string Veiculo::getModelo()
{
    return modelo;
}
string Veiculo::getFabricante()
{
    return fabricante;
}
string Veiculo::getPlaca()
{
    return placa;
}
int Veiculo::getAno()
{
    return ano;
}
void Veiculo::cadastrarDadosVeiculo()
{
    cout << "Informe o Ano de fabricacao: " << endl;
    cin >> ano;
    cout << "Informe o modelo:" << endl;
    cin >> modelo;
    cout << "Informe a cor:" << endl;
    cin >> cor;
    cout << "Informe o fabricante:" << endl;
    cin >> fabricante;
    cout << "Informe a placa:" << endl;
    cin >> placa;


}
void Veiculo::imprimirDadosVeiculo()
{
    cout << "Ano de fabricacao: " << ano << endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Cor: " << cor << endl;
    cout << "Fabricante: " << fabricante << endl;
    cout << "Placa: " << placa << endl;
    cout << "Dono: " << dono->getNome() << endl;
    cout << "-----------------------------------" << endl;
}

void Veiculo::setDono(Proprietario* dono)
{
    this->dono = dono;
}
Proprietario* Veiculo::getDono()
{
    return dono;
}
