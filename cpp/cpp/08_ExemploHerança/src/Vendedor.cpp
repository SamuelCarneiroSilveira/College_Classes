#include "Vendedor.h"

void Vendedor::cadastrarDados()
{
 // chamada do método da classe base
 Pessoa::cadastrarDados();
 cout << "Informe a matrícula:" << endl;
 cin >> this->matricula;
 cout << "Informe a comissão:" << endl;
 cin >> this->comissao;
}
void Vendedor::imprimirDados()
{
 // chamada do método da classe base
 Pessoa::imprimirDados();
 cout << "Matrícula: " << this->matricula << endl;
 cout << "Comissão: " << this->comissao << endl;
}
