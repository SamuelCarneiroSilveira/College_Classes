#include <iostream>
#include <Circulo.h>

using namespace std;

int main()
{
    Circulo* c = new Circulo();

    float aux;
    cout << "Informe o raio: " << endl;
    cin >> aux;
    c->setRaio(aux);

    cout << "area: " << c->getArea() << endl;
    cout << "perimetro: " << c->getPerimetro() << endl;

    delete c;
    return 0;
}
