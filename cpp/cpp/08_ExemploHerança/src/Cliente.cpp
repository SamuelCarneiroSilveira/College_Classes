#include "Cliente.h"

void Cliente::cadastrarDados()
{
// chamada do m�todo da classe base
    Pessoa::cadastrarDados();
    cout << "Informe o codigo:" << endl;
    cin >> this->codigo;
    cout << "Informe a data de cadastro:" << endl;
    cin >> this->dataCadastro;
}
void Cliente::imprimirDados()
{
// chamada do m�todo da classe base
    Pessoa::imprimirDados();
    cout << "C�digo: " << this->codigo << endl;
    cout << "Data de cadastro: " << this->dataCadastro << endl;
}
