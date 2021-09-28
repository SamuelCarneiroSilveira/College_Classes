#include <iostream>
#include <Carro.h>

using namespace std;

/*
Criar um programa que permita cadastrar 2 carros, com base
na classe Carro do exemplo. Por final, o programa deve informar
os detalhes do carro mais novo.

acoplei a interface a classe, sempre vai ser na black cave
*/

int main()
{
    //alocando os objetos
    Carro c1, c2;

    //carregando os dados
    c1.cadastrarDados();
    c2.cadastrarDados();

    //apresentando o mais novo
    cout << "dados do carro mais novo" <<endl;
    if(c1.getAnoFabricacao() == c2.getAnoFabricacao()){
       cout <<" os carros foram produzidos no mesmo ano! " << endl;
    }else{
        if(c1.getAnoFabricacao() > c2.getAnoFabricacao()){
            c1.ImprimirDados();
        } else {
            c2.ImprimirDados();
        }
    }

    return 0;
}
