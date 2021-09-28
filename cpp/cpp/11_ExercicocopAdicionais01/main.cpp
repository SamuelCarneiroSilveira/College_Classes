#include <iostream>
#include "Ponto2D.h"
using namespace std;

int main()
{
    Ponto2D pt;
    cout << "informe o ponto x: "<<endl;
    float aux;
    cin >> aux;
    pt.setX(aux);
    cout << "informe o ponto y: "<<endl;
    cin >> aux;
    pt.setY(aux);

    cout<< "A distancia a origem eh: " << pt.calculaDistanciaAOrigem() << endl;


    return 0;
}
