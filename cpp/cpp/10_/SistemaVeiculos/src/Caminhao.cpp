#include "Caminhao.h"

Caminhao::Caminhao()
{
    //ctor
}

Caminhao::~Caminhao()
{
    //dtor
}

void Caminhao::setTipoCarroceria(string tipoCarroceria)
{
    this->tipoCarroceria = tipoCarroceria;
}
void Caminhao::setNrEixos(int nrEixos)
{
    this->nrEixos = nrEixos;
}
string Caminhao::getTipoCarroceria()
{
    return tipoCarroceria;
}
int Caminhao::getNrEixos()
{
    return nrEixos;
}
void Caminhao::cadastrarDados()
{
    Veiculo::cadastrarDados();
    cout << "Informe o tipo de carroceria" << endl;
    cin >> tipoCarroceria;
    cout << "Informe o numero de eixos" << endl;
    cin >> nrEixos;
}
void Caminhao::imprimirDados()
{
    Veiculo::imprimirDados();
    cout << "Carroceria: " << tipoCarroceria << endl;
    cout << "Numero de eixos: " << nrEixos << endl;
}
