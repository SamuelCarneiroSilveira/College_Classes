#include "Vendedor.h"

void Vendedor::cadastrarDados()
{
 // chamada do m�todo da classe base
 Pessoa::cadastrarDados();
 cout << "Informe a matr�cula:" << endl;
 cin >> this->matricula;
 cout << "Informe a comiss�o:" << endl;
 cin >> this->comissao;
}
void Vendedor::imprimirDados()
{
 // chamada do m�todo da classe base
 Pessoa::imprimirDados();
 cout << "Matr�cula: " << this->matricula << endl;
 cout << "Comiss�o: " << this->comissao << endl;
}
