#include "Casa.h"


Casa::Casa()
{
    //ctor
}

Casa::~Casa()
{
    //dtor
}
void Casa::cadastrarDados()
{
    Imovel::cadastrarDados();
    cout << "Informe a area do terreno: " << endl;
    cin >> areaTerreno;
}
void Casa::imprimirDados()
{
    Imovel::imprimirDados();
    cout << "Terreno: " << areaTerreno << endl;
}
