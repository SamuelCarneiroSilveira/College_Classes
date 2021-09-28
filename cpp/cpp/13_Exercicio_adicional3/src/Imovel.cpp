#include "Imovel.h"

Imovel::Imovel()
{
    //ctor
}

Imovel::~Imovel()
{
    //dtor
}

void Imovel::cadastrarDados()
{
    cout << "informe o codigo: " << endl;
    cin >> codigo;
    cout << "informe a cidade: " << endl;
    cin >> cidade;
    cout << "informe o valor: " << endl;
    cin >> valor;
}
void Imovel::imprimirDados()
{
    cout << "Codigo: " << codigo << endl;
    cout << "Cidade: " << cidade << endl;
    cout << "Valor: " << valor << endl;
}
