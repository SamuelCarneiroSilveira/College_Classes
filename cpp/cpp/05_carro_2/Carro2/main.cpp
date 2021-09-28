#include <iostream>
#include <Carro.h>
#define QTD 5
using namespace std;

int main()
{   // alocando
    Carro carros[QTD];

    // cadastrando
    for (int i=0; i<QTD;i++){
        carros[i].cadastrarDados();
    }

    // encontrando indice do mais novo
    int indiceMaisNovo = 0;

    for (int i = 1;i <QTD; i++)
    {
        if(carros[i].getAnoFabricacao() > carros[indiceMaisNovo].getAnoFabricacao()){
            indiceMaisNovo = i;
        }
    }
    system("cls");
    // apresentando o mais novo
    cout << "*** Carro mais novo ****" << endl;
    carros[indiceMaisNovo].ImprimirDados();
    system("pause");

    return 0;
}
