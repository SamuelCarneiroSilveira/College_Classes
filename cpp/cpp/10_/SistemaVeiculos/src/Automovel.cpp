#include "Automovel.h"

Automovel::Automovel()
{
    //ctor
}

Automovel::~Automovel()
{
    //dtor
}

void Automovel::setNrPortas(int nrPortas)
{
    this->nrPortas = nrPortas;
}
void Automovel::setCapPortaMalas(int capPortaMalas)
{
    this->capPortaMalas = capPortaMalas;
}
int Automovel::getNrPortas()
{
    return nrPortas;
}
int Automovel::getCapPortaMalas()
{
    return capPortaMalas;
}
void Automovel::cadastrarDados()
{
    Veiculo::cadastrarDados();
    cout << "Informe o numero de portas" << endl;
    cin >> nrPortas;
    cout << "informe a capacidade do porta malas: " <<endl;
    cin >> capPortaMalas;
}
void Automovel::imprimirDados()
{
    Veiculo::imprimirDados();
    cout << "O numero de portas é: " << nrPortas << endl;
    cout << "a capacidade do porta malas é: " << capPortaMalas << endl;
}
