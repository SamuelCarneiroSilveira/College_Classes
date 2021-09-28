#include "Apartamento.h"

Apartamento::Apartamento()
{
    //ctor
}

Apartamento::~Apartamento()
{
    //dtor
}

void Apartamento::cadastrarDados()
{
    Imovel::cadastrarDados();
    cout << "Informe o andar: " << endl;
    cin >> andar;
}
void Apartamento::imprimirDados()
{
    Imovel::imprimirDados();
    cout << "Andar: " << andar << endl;
}
