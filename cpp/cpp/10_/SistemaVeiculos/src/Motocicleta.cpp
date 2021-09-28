#include "Motocicleta.h"

Motocicleta::Motocicleta()
{
    //ctor
}

Motocicleta::~Motocicleta()
{
    //dtor
}

void Motocicleta::setEstilo(string estilo)
{
    this->estilo = estilo;
}
string Motocicleta::getEstilo()
{
    return estilo;
}
void Motocicleta::cadastrarDados()
{
    Veiculo::cadastrarDados();
    cout << "Informe o estilo da motocicleta: " << endl;
    cin >> estilo;
}
void Motocicleta::imprimirDados()
{
    Veiculo::imprimirDados();
    cout << "Estilo: " << estilo << endl;
}
